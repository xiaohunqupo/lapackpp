#include "test.hh"
#include "lapack.hh"
#include "lapack_flops.hh"
#include "print_matrix.hh"
#include "error.hh"

#include <vector>
#include <omp.h>

// -----------------------------------------------------------------------------
// simple overloaded wrappers around LAPACKE
static lapack_int LAPACKE_ungqr(
    lapack_int m, lapack_int n, lapack_int k, float* A, lapack_int lda, float* tau )
{
    return LAPACKE_sorgqr( LAPACK_COL_MAJOR, m, n, k, A, lda, tau );
}

static lapack_int LAPACKE_ungqr(
    lapack_int m, lapack_int n, lapack_int k, double* A, lapack_int lda, double* tau )
{
    return LAPACKE_dorgqr( LAPACK_COL_MAJOR, m, n, k, A, lda, tau );
}

static lapack_int LAPACKE_ungqr(
    lapack_int m, lapack_int n, lapack_int k, std::complex<float>* A, lapack_int lda, std::complex<float>* tau )
{
    return LAPACKE_cungqr( LAPACK_COL_MAJOR, m, n, k, A, lda, tau );
}

static lapack_int LAPACKE_ungqr(
    lapack_int m, lapack_int n, lapack_int k, std::complex<double>* A, lapack_int lda, std::complex<double>* tau )
{
    return LAPACKE_zungqr( LAPACK_COL_MAJOR, m, n, k, A, lda, tau );
}

// -----------------------------------------------------------------------------
template< typename scalar_t >
void test_ungqr_work( Params& params, bool run )
{
    using namespace blas;
    typedef typename traits< scalar_t >::real_t real_t;
    typedef long long lld;

    // get & mark input values
    int64_t m = params.dim.m();
    int64_t n = params.dim.n();
    int64_t k = params.dim.k();
    int64_t align = params.align.value();

    // mark non-standard output values
    params.ortho.value();
    params.time.value();
    params.gflops.value();
    params.ref_time.value();
    params.ref_gflops.value();
    params.okay.value();

    if (! run)
        return;

    // Check for problems in testing
    if (! ( n <= m && k <= n ) ) {
        printf( "skipping because ungqr requires n <= m and k <= n\n" );
        return;
    }

    // ---------- setup
    int64_t lda = roundup( max( 1, m ), align );
    size_t size_A = (size_t) lda * n;
    size_t size_tau = (size_t) (k);

    std::vector< scalar_t > A_tst( size_A );
    std::vector< scalar_t > A_ref( size_A );
    std::vector< scalar_t > A_factored( size_A );
    std::vector< scalar_t > tau( size_tau );

    int64_t idist = 1;
    int64_t iseed[4] = { 0, 1, 2, 3 };
    lapack::larnv( idist, iseed, A_tst.size(), &A_tst[0] );
    lapack::larnv( idist, iseed, tau.size(), &tau[0] );
    // save matrix
    A_ref = A_tst;

    // ---------- factor matrix
    int64_t info_qrf = lapack::geqrf( m, n, &A_tst[0], lda, &tau[0] );
    if (info_qrf != 0) {
        fprintf( stderr, "lapack::unqrf returned error %lld\n", (lld) info_qrf );
    }
    // save matrix
    A_factored = A_tst;

    // // ---------- run test
    libtest::flush_cache( params.cache.value() );
    double time = omp_get_wtime();
    int64_t info_tst = lapack::ungqr( m, n, k, &A_tst[0], lda, &tau[0] );
    time = omp_get_wtime() - time;
    if (info_tst != 0) {
        fprintf( stderr, "lapack::ungqr returned error %lld\n", (lld) info_tst );
    }

    params.time.value() = time;
    double gflop = lapack::Gflop< scalar_t >::ungqr( m, n, k );
    params.gflops.value() = gflop / time;

    if (params.check.value() == 'y') {
        // ---------- check error
        // comparing to ref. solution doesn't work
        // Following lapack/TESTING/LIN/zqrt02.f
        // Note (0 <= n <= m)  (0 <= k <= n).
        real_t eps = std::numeric_limits< real_t >::epsilon();
        real_t tol = params.tol.value();

        int64_t ldq = max( m, n );
        int64_t ldr = max( m, n );
        std::vector< scalar_t > Q( ldq * n );
        std::vector< scalar_t > R( ldr * n );

        // Copy the first k columns of the factorization to the array Q
        real_t rogue = -10000000000; // -1D+10
        lapack::laset( lapack::MatrixType::General, m, n, rogue, rogue, &Q[0], ldq );
        lapack::lacpy( lapack::MatrixType::Lower, m-1, k, &A_factored[1], lda, &Q[1], ldq );

        // Generate the first n columns of the matrix Q
        int64_t info_ungqr = lapack::ungqr( m, n, k, &Q[0], ldq, &tau[0] );
        if (info_ungqr != 0) {
            fprintf( stderr, "lapack::ungqr returned error %lld\n", (lld) info_ungqr );
        }

        // Copy R(1:n,1:k)
        lapack::laset( lapack::MatrixType::General, n, k, 0.0, 0.0, &R[0], ldr );
        lapack::lacpy( lapack::MatrixType::Upper, n, k, &A_factored[0], lda, &R[0], ldr );

        // Compute R - Q'*A
        blas::gemm( Layout::ColMajor, Op::ConjTrans, Op::NoTrans, n, k, m,
                    -1.0, &Q[0], ldq, &A_ref[0], lda, 1.0, &R[0], ldr );

        // Compute norm( R - Q'*A ) / ( M * norm(A) * EPS ) .
        real_t Anorm = lapack::lange( lapack::Norm::One, m, k, &A_ref[0], lda );
        real_t resid1 = lapack::lange( lapack::Norm::One, n, k, &R[0], ldr );
        real_t error1 = 0;
        if (Anorm > 0)
            error1 = resid1 / ( m * Anorm );

        // Compute I - Q'*Q
        lapack::laset( lapack::MatrixType::General, n, n, 0.0, 1.0, &R[0], ldr );
        blas::herk( Layout::ColMajor, Uplo::Upper, Op::ConjTrans, n, m, -1.0, &Q[0], ldq, 1.0, &R[0], ldr );

        // Compute norm( I - Q'*Q ) / ( M * EPS ) .
        real_t resid2 = lapack::lansy( lapack::Norm::One, lapack::Uplo::Upper, n, &R[0], ldr );
        real_t error2 = ( resid2 / m );

        params.error.value() = error1;
        params.ortho.value() = error2;
        params.okay.value() = (error1 < tol*eps) && (error2 < tol*eps);
    }

    if (params.ref.value() == 'y') {
        // ---------- run reference
        libtest::flush_cache( params.cache.value() );
        time = omp_get_wtime();
        int64_t info_ref = LAPACKE_ungqr( m, n, k, &A_ref[0], lda, &tau[0] );
        time = omp_get_wtime() - time;
        if (info_ref != 0) {
            fprintf( stderr, "LAPACKE_ungqr returned error %lld\n", (lld) info_ref );
        }

        params.ref_time.value() = time;
        params.ref_gflops.value() = gflop / time;
    }
}

// -----------------------------------------------------------------------------
void test_ungqr( Params& params, bool run )
{
    switch (params.datatype.value()) {
        case libtest::DataType::Integer:
            throw std::exception();
            break;

        case libtest::DataType::Single:
            test_ungqr_work< float >( params, run );
            break;

        case libtest::DataType::Double:
            test_ungqr_work< double >( params, run );
            break;

        case libtest::DataType::SingleComplex:
            test_ungqr_work< std::complex<float> >( params, run );
            break;

        case libtest::DataType::DoubleComplex:
            test_ungqr_work< std::complex<double> >( params, run );
            break;
    }
}