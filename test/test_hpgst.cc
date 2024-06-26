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

// -----------------------------------------------------------------------------
template< typename scalar_t >
void test_hpgst_work( Params& params, bool run )
{
    using real_t = blas::real_type< scalar_t >;

    // Constants
    real_t eps = std::numeric_limits<real_t>::epsilon();

    // get & mark input values
    int64_t itype = params.itype();
    lapack::Uplo uplo = params.uplo();
    int64_t n = params.dim.n();
    real_t tol = params.tol() * eps;

    // mark non-standard output values
    params.ref_time();
    // params.ref_gflops();
    // params.gflops();

    if (! run)
        return;

    // ---------- setup
    size_t size_AP = (size_t) (n*(n+1)/2);
    size_t size_BP = (size_t) (n*(n+1)/2);

    std::vector< scalar_t > AP_tst( size_AP );
    std::vector< scalar_t > AP_ref( size_AP );
    std::vector< scalar_t > BP( size_BP );

    int64_t idist = 1;
    int64_t iseed[4] = { 0, 1, 2, 3 };
    lapack::larnv( idist, iseed, AP_tst.size(), &AP_tst[0] );
    lapack::larnv( idist, iseed, BP.size(), &BP[0] );

    // diagonally dominant -> positive definite
    if (uplo == lapack::Uplo::Upper) {
        for (int64_t i = 0; i < n; ++i) {
            BP[ i + 0.5*(i+1)*i ] += n;
        }
    }
    else { // lower
        for (int64_t i = 0; i < n; ++i) {
            BP[ i + n*i - 0.5*i*(i+1) ] += n;
        }
    }

    // Factor BP
    int64_t info_trf = lapack::pptrf( uplo, n, &BP[0] );
    if (info_trf != 0) {
        fprintf( stderr, "lapack::pptrf returned error %lld\n", llong( info_trf ) );
    }

    AP_ref = AP_tst;

    // ---------- run test
    testsweeper::flush_cache( params.cache() );
    double time = testsweeper::get_wtime();
    int64_t info_tst = lapack::hpgst( itype, uplo, n, &AP_tst[0], &BP[0] );
    time = testsweeper::get_wtime() - time;
    if (info_tst != 0) {
        fprintf( stderr, "lapack::hpgst returned error %lld\n", llong( info_tst ) );
    }

    params.time() = time;
    // double gflop = lapack::Gflop< scalar_t >::hpgst( itype, n );
    // params.gflops() = gflop / time;

    if (params.ref() == 'y' || params.check() == 'y') {
        // ---------- run reference
        testsweeper::flush_cache( params.cache() );
        time = testsweeper::get_wtime();
        int64_t info_ref = LAPACKE_hpgst( itype, to_char( uplo ), n, &AP_ref[0], &BP[0] );
        time = testsweeper::get_wtime() - time;
        if (info_ref != 0) {
            fprintf( stderr, "LAPACKE_hpgst returned error %lld\n", llong( info_ref ) );
        }

        params.ref_time() = time;
        // params.ref_gflops() = gflop / time;

        // ---------- check error compared to reference
        real_t error = 0;
        if (info_tst != info_ref) {
            error = 1;
        }
        error = blas::max( error, rel_error( AP_tst, AP_ref ) );
        params.error() = error;
        params.okay() = (error < tol);
    }
}

// -----------------------------------------------------------------------------
void test_hpgst( Params& params, bool run )
{
    switch (params.datatype()) {
        case testsweeper::DataType::Single:
            test_hpgst_work< float >( params, run );
            break;

        case testsweeper::DataType::Double:
            test_hpgst_work< double >( params, run );
            break;

        case testsweeper::DataType::SingleComplex:
            test_hpgst_work< std::complex<float> >( params, run );
            break;

        case testsweeper::DataType::DoubleComplex:
            test_hpgst_work< std::complex<double> >( params, run );
            break;

        default:
            throw std::runtime_error( "unknown datatype" );
            break;
    }
}
