// Copyright (c) 2017-2023, University of Tennessee. All rights reserved.
// SPDX-License-Identifier: BSD-3-Clause
// This program is free software: you can redistribute it and/or modify it under
// the terms of the BSD 3-Clause license. See the accompanying LICENSE file.

#include "test.hh"
#include "lapack.hh"
#include "lapack/flops.hh"
#include "print_matrix.hh"
#include "error.hh"
#include "lapacke_wrappers.hh"

#include <vector>

#if LAPACK_VERSION >= 30500  // >= 3.5

// -----------------------------------------------------------------------------
template< typename scalar_t >
void test_sytrf_rook_work( Params& params, bool run )
{
    using real_t = blas::real_type< scalar_t >;

    // Constants
    real_t eps = std::numeric_limits<real_t>::epsilon();

    // get & mark input values
    lapack::Uplo uplo = params.uplo();
    int64_t n = params.dim.n();
    int64_t align = params.align();
    real_t tol = params.tol() * eps;
    params.matrix.mark();

    // mark non-standard output values
    params.ref_time();
    // params.ref_gflops();
    // params.gflops();

    if (! run)
        return;

    // ---------- setup
    int64_t lda = roundup( blas::max( 1, n ), align );
    size_t size_A = (size_t) lda * n;
    size_t size_ipiv = (size_t) (n);

    std::vector< scalar_t > A_tst( size_A );
    std::vector< scalar_t > A_ref( size_A );
    std::vector< int64_t > ipiv_tst( size_ipiv );
    std::vector< lapack_int > ipiv_ref( size_ipiv );

    lapack::generate_matrix( params.matrix, n, n, &A_tst[0], lda );
    A_ref = A_tst;

    // ---------- run test
    testsweeper::flush_cache( params.cache() );
    double time = testsweeper::get_wtime();
    int64_t info_tst = lapack::sytrf_rook( uplo, n, &A_tst[0], lda, &ipiv_tst[0] );
    time = testsweeper::get_wtime() - time;
    if (info_tst != 0) {
        fprintf( stderr, "lapack::sytrf_rook returned error %lld\n", llong( info_tst ) );
    }

    params.time() = time;
    // double gflop = lapack::Gflop< scalar_t >::sytrf_rook( n );
    // params.gflops() = gflop / time;

    if (params.ref() == 'y' || params.check() == 'y') {
        // ---------- run reference
        testsweeper::flush_cache( params.cache() );
        time = testsweeper::get_wtime();
        int64_t info_ref = LAPACKE_sytrf_rook( to_char( uplo ), n, &A_ref[0], lda, &ipiv_ref[0] );
        time = testsweeper::get_wtime() - time;
        if (info_ref != 0) {
            fprintf( stderr, "LAPACKE_sytrf_rook returned error %lld\n", llong( info_ref ) );
        }

        params.ref_time() = time;
        // params.ref_gflops() = gflop / time;

        // ---------- check error compared to reference
        real_t error = 0;
        if (info_tst != info_ref) {
            error = 1;
        }
        error = blas::max( error, rel_error( A_tst, A_ref ) );
        error = blas::max( error, rel_error( ipiv_tst, ipiv_ref ) );
        params.error() = error;
        params.okay() = (error < tol);
    }
}

// -----------------------------------------------------------------------------
void test_sytrf_rook( Params& params, bool run )
{
    switch (params.datatype()) {
        case testsweeper::DataType::Single:
            test_sytrf_rook_work< float >( params, run );
            break;

        case testsweeper::DataType::Double:
            test_sytrf_rook_work< double >( params, run );
            break;

        case testsweeper::DataType::SingleComplex:
            test_sytrf_rook_work< std::complex<float> >( params, run );
            break;

        case testsweeper::DataType::DoubleComplex:
            test_sytrf_rook_work< std::complex<double> >( params, run );
            break;

        default:
            throw std::runtime_error( "unknown datatype" );
            break;
    }
}

#else

// -----------------------------------------------------------------------------
void test_sytrf_rook( Params& params, bool run )
{
    fprintf( stderr, "sytrf_rook requires LAPACK >= 3.5\n\n" );
    exit(0);
}

#endif  // LAPACK >= 3.5
