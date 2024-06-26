// Copyright (c) 2017-2023, University of Tennessee. All rights reserved.
// SPDX-License-Identifier: BSD-3-Clause
// This program is free software: you can redistribute it and/or modify it under
// the terms of the BSD 3-Clause license. See the accompanying LICENSE file.

#include "test.hh"
#include "lapack.hh"
#include "lapack/flops.hh"
#include "print_matrix.hh"
#include "error.hh"
#include "check_heev.hh"
#include "lapacke_wrappers.hh"

#include <vector>

// -----------------------------------------------------------------------------
template< typename scalar_t >
void test_heevr_work( Params& params, bool run )
{
    using real_t = blas::real_type< scalar_t >;
    using lapack::Job;

    // Constants
    const real_t eps = std::numeric_limits< real_t >::epsilon();

    // get & mark input values
    lapack::Job jobz = params.jobz();
    lapack::Uplo uplo = params.uplo();
    int64_t n = params.dim.n();
    int64_t align = params.align();
    int64_t verbose = params.verbose();
    real_t tol = params.tol() * eps;
    params.matrix.mark();

    // get_range fills in range, il, iu, vl, vu
    real_t  vl, vu;
    int64_t il, iu;
    lapack::Range range;
    params.get_range( n, &range, &vl, &vu, &il, &iu );

    // mark non-standard output values
    params.ref_time();
    // params.ref_gflops();
    // params.gflops();
    params.ortho();
    params.error2();
    params.error2.name( "Lambda" );

    if (! run)
        return;

    // skip invalid ranges
    if (il > iu) {
        params.msg() = "skipping: requires 1 <= il <= iu <= n";
        return;
    }

    // ---------- setup
    int64_t lda = roundup( blas::max( 1, n ), align );
    real_t abstol = 0;  // default value
    int64_t nfound;
    lapack_int nfound_ref;
    int64_t ldz = (jobz == lapack::Job::Vec
                   ? roundup( blas::max( 1, n ), align )
                   : 1 );
    size_t size_A = (size_t) lda * n;
    size_t size_Z = (size_t) ldz * n;
    size_t size_isuppz = (size_t) ( 2 * blas::max( 1, n ) );

    std::vector< scalar_t > A_tst( size_A );
    std::vector< scalar_t > A_ref( size_A );
    std::vector< scalar_t > Z( size_Z );  // eigenvectors
    std::vector< real_t > Lambda_tst( n );
    std::vector< real_t > Lambda_ref( n );
    std::vector< int64_t > isuppz_tst( size_isuppz );
    std::vector< lapack_int > isuppz_ref( size_isuppz );

    lapack::generate_matrix( params.matrix, n, n, &A_tst[0], lda );
    A_ref = A_tst;

    if (verbose >= 1) {
        printf( "\n" );
        printf( "A n=%5lld, lda=%5lld\n", llong( n ), llong( lda ) );
    }
    if (verbose >= 2) {
        printf( "A = " );
        print_matrix( n, n, &A_tst[0], lda );
    }

    // ---------- run test
    testsweeper::flush_cache( params.cache() );
    double time = testsweeper::get_wtime();
    int64_t info_tst = lapack::heevr(
                           jobz, range, uplo, n, &A_tst[0], lda,
                           vl, vu, il, iu, abstol, &nfound,
                           &Lambda_tst[0], &Z[0], ldz, &isuppz_tst[0] );
    time = testsweeper::get_wtime() - time;
    if (info_tst != 0) {
        fprintf( stderr, "lapack::heevr returned error %lld\n", llong( info_tst ) );
    }

    params.time() = time;
    // double gflop = lapack::Gflop< scalar_t >::heevr( jobz, range, n );
    // params.gflops() = gflop / time;

    if (verbose >= 2) {
        printf( "nfound = %lld\n", llong( nfound ) );
        printf( "Lambda = " );
        print_vector( n, &Lambda_tst[0], 1 );
        if (jobz == lapack::Job::Vec) {
            printf( "Z = " );
            print_matrix( n, nfound, &Z[0], ldz );
        }
    }

    if (params.check() == 'y') {
        // ---------- check numerical error
        // result[ 0 ] = || A - Z Lambda Z^H || / (n ||A||), if jobz != NoVec.
        // result[ 1 ] = || I - Z^H Z || / n, if jobz != NoVec.
        // result[ 2 ] = 0 if Lambda is in non-decreasing order, else > 0.
        real_t result[ 3 ] = { (real_t) testsweeper::no_data_flag,
                               (real_t) testsweeper::no_data_flag,
                               (real_t) testsweeper::no_data_flag };

        check_heev( jobz, uplo, n, &A_ref[0], lda,
                    nfound, &Lambda_tst[0], &Z[0], ldz, result );

        params.error()  = result[ 0 ];
        params.ortho()  = result[ 1 ];
        params.error2() = result[ 2 ];
        params.okay()   = (jobz == Job::NoVec || result[ 0 ] < tol)
                       && (jobz == Job::NoVec || result[ 1 ] < tol)
                       && result[ 2 ] < tol;
    }

    if (params.ref() == 'y' || params.check() == 'y') {
        // ---------- run reference
        testsweeper::flush_cache( params.cache() );
        time = testsweeper::get_wtime();
        int64_t info_ref = LAPACKE_heevr(
                               to_char( jobz ), to_char( range ), to_char( uplo ), n,
                               &A_ref[0], lda,
                               vl, vu, il, iu, abstol, &nfound_ref,
                               &Lambda_ref[0], &Z[0], ldz, &isuppz_ref[0] );
        time = testsweeper::get_wtime() - time;
        if (info_ref != 0) {
            fprintf( stderr, "LAPACKE_heevr returned error %lld\n", llong( info_ref ) );
        }

        params.ref_time() = time;
        // params.ref_gflops() = gflop / time;

        // ---------- check error compared to reference
        real_t error = 0;
        if (info_tst != info_ref) {
            error = 1;
        }
        error += std::abs( nfound - nfound_ref );
        error += rel_error( Lambda_tst, Lambda_ref );
        // Not checking isuppz: it's not really useful, and occasionally it
        // differs between tst and ref, though all other checks pass.
        params.error2() = error;
        params.okay() = params.okay() && (error < tol);
    }
}

// -----------------------------------------------------------------------------
void test_heevr( Params& params, bool run )
{
    switch (params.datatype()) {
        case testsweeper::DataType::Single:
            test_heevr_work< float >( params, run );
            break;

        case testsweeper::DataType::Double:
            test_heevr_work< double >( params, run );
            break;

        case testsweeper::DataType::SingleComplex:
            test_heevr_work< std::complex<float> >( params, run );
            break;

        case testsweeper::DataType::DoubleComplex:
            test_heevr_work< std::complex<double> >( params, run );
            break;

        default:
            throw std::runtime_error( "unknown datatype" );
            break;
    }
}
