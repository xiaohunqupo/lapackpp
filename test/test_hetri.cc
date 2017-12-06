#include "test.hh"
#include "lapack.hh"
#include "lapack_flops.hh"
#include "print_matrix.hh"
#include "error.hh"

#include <vector>
#include <omp.h>

// -----------------------------------------------------------------------------
// simple overloaded wrappers around LAPACKE
static lapack_int LAPACKE_hetri(
    char uplo, lapack_int n, float* A, lapack_int lda, lapack_int* ipiv )
{
    return LAPACKE_ssytri( LAPACK_COL_MAJOR, uplo, n, A, lda, ipiv );
}

static lapack_int LAPACKE_hetri(
    char uplo, lapack_int n, double* A, lapack_int lda, lapack_int* ipiv )
{
    return LAPACKE_dsytri( LAPACK_COL_MAJOR, uplo, n, A, lda, ipiv );
}

static lapack_int LAPACKE_hetri(
    char uplo, lapack_int n, std::complex<float>* A, lapack_int lda, lapack_int* ipiv )
{
    return LAPACKE_chetri( LAPACK_COL_MAJOR, uplo, n, A, lda, ipiv );
}

static lapack_int LAPACKE_hetri(
    char uplo, lapack_int n, std::complex<double>* A, lapack_int lda, lapack_int* ipiv )
{
    return LAPACKE_zhetri( LAPACK_COL_MAJOR, uplo, n, A, lda, ipiv );
}

// -----------------------------------------------------------------------------
static lapack_int LAPACKE_hetrf(
    char uplo, lapack_int n, float* A, lapack_int lda, lapack_int* ipiv )
{
    return LAPACKE_ssytrf( LAPACK_COL_MAJOR, uplo, n, A, lda, ipiv );
}

static lapack_int LAPACKE_hetrf(
    char uplo, lapack_int n, double* A, lapack_int lda, lapack_int* ipiv )
{
    return LAPACKE_dsytrf( LAPACK_COL_MAJOR, uplo, n, A, lda, ipiv );
}

static lapack_int LAPACKE_hetrf(
    char uplo, lapack_int n, std::complex<float>* A, lapack_int lda, lapack_int* ipiv )
{
    return LAPACKE_chetrf( LAPACK_COL_MAJOR, uplo, n, A, lda, ipiv );
}

static lapack_int LAPACKE_hetrf(
    char uplo, lapack_int n, std::complex<double>* A, lapack_int lda, lapack_int* ipiv )
{
    return LAPACKE_zhetrf( LAPACK_COL_MAJOR, uplo, n, A, lda, ipiv );
}

// -----------------------------------------------------------------------------
template< typename scalar_t >
void test_hetri_work( Params& params, bool run )
{
    using namespace blas;
    typedef typename traits< scalar_t >::real_t real_t;
    typedef long long lld;

    // get & mark input values
    lapack::Uplo uplo = params.uplo.value();
    int64_t n = params.dim.n();
    int64_t align = params.align.value();

    // mark non-standard output values
    params.ref_time.value();
    // params.ref_gflops.value();
    // params.gflops.value();

    if (! run)
        return;

    // ---------- setup
    int64_t lda = roundup( max( 1, n ), align );
    size_t size_A = (size_t) lda * n;
    size_t size_ipiv = (size_t) (n);

    std::vector< scalar_t > A_tst( size_A );
    std::vector< scalar_t > A_ref( size_A );
    std::vector< int64_t > ipiv_tst( size_ipiv );
    std::vector< lapack_int > ipiv_ref( size_ipiv );

    int64_t idist = 1;
    int64_t iseed[4] = { 0, 1, 2, 3 };
    lapack::larnv( idist, iseed, A_tst.size(), &A_tst[0] );
    A_ref = A_tst;

    // initialize ipiv_tst and ipiv_ref
    int64_t info_trf = lapack::hetrf( uplo, n, &A_tst[0], lda, &ipiv_tst[0] );
    if (info_trf != 0) {
        fprintf( stderr, "lapack::hetrf returned error %lld\n", (lld) info_trf );
    }
    std::copy( ipiv_tst.begin(), ipiv_tst.end(), ipiv_ref.begin() );

    // ---------- run test
    libtest::flush_cache( params.cache.value() );
    double time = omp_get_wtime();
    int64_t info_tst = lapack::hetri( uplo, n, &A_tst[0], lda, &ipiv_tst[0] );
    time = omp_get_wtime() - time;
    if (info_tst != 0) {
        fprintf( stderr, "lapack::hetri returned error %lld\n", (lld) info_tst );
    }

    params.time.value() = time;
    // double gflop = lapack::Gflop< scalar_t >::hetri( n );
    // params.gflops.value() = gflop / time;

    if (params.ref.value() == 'y' || params.check.value() == 'y') {
        libtest::flush_cache( params.cache.value() );
        // ---------- factor reference
        int64_t info_ref_trf = LAPACKE_hetrf( uplo2char(uplo), n, &A_ref[0], lda, &ipiv_ref[0] );
        if (info_ref_trf != 0) {
            fprintf( stderr, "LAPACKE_hetrf returned error %lld\n", (lld) info_ref_trf );
        }

        // ---------- run reference
        time = omp_get_wtime();
        int64_t info_ref = LAPACKE_hetri( uplo2char(uplo), n, &A_ref[0], lda, &ipiv_ref[0] );
        time = omp_get_wtime() - time;
        if (info_ref != 0) {
            fprintf( stderr, "LAPACKE_hetri returned error %lld\n", (lld) info_ref );
        }

        params.ref_time.value() = time;
        // params.ref_gflops.value() = gflop / time;

        // ---------- check error compared to reference
        real_t error = 0;
        if (info_tst != info_ref) {
            error = 1;
        }
        error += abs_error( A_tst, A_ref );
        params.error.value() = error;
        params.okay.value() = (error == 0);  // expect lapackpp == lapacke
    }
}

// -----------------------------------------------------------------------------
void test_hetri( Params& params, bool run )
{
    switch (params.datatype.value()) {
        case libtest::DataType::Integer:
            throw std::exception();
            break;

        case libtest::DataType::Single:
            test_hetri_work< float >( params, run );
            break;

        case libtest::DataType::Double:
            test_hetri_work< double >( params, run );
            break;

        case libtest::DataType::SingleComplex:
            test_hetri_work< std::complex<float> >( params, run );
            break;

        case libtest::DataType::DoubleComplex:
            test_hetri_work< std::complex<double> >( params, run );
            break;
    }
}