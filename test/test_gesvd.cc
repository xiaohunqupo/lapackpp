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
#include "check_svd.hh"

#include <vector>

// -----------------------------------------------------------------------------
template< typename scalar_t >
void test_gesvd_work( Params& params, bool run )
{
    using real_t = blas::real_type< scalar_t >;
    using lapack::Job;

    // get & mark input values
    lapack::Job jobu = params.jobu();
    lapack::Job jobvt = params.jobvt();
    int64_t m = params.dim.m();
    int64_t n = params.dim.n();
    int64_t align = params.align();
    int64_t verbose = params.verbose();
    params.matrix.mark();

    real_t eps = std::numeric_limits< real_t >::epsilon();
    real_t tol = params.tol() * eps;

    // mark non-standard output values
    params.ref_time();
    //params.ref_gflops();
    //params.gflops();
    params.ortho_U();
    params.ortho_V();
    params.error2();
    params.error2.name( "Sigma" );
    params.msg();


    if (! run)
        return;

    // skip invalid options
    if (jobu  == Job::OverwriteVec && jobvt == Job::OverwriteVec) {
        params.msg() = "skipping: jobu and jobvt cannot both be overwrite.";
        return;
    }

    // ---------- setup
    int64_t u_ncol = (jobu == Job::AllVec ? m : blas::min( m, n ));
    int64_t lda = roundup( blas::max( 1, m ), align );
    int64_t ldu = roundup( m, align );
    int64_t v_nrow = (jobvt == Job::AllVec ? n : blas::min( m, n ));
    int64_t ldvt = roundup( v_nrow, align );
    size_t size_A = (size_t) lda * n;
    size_t size_S = (size_t) (blas::min(m,n));
    size_t size_U = (size_t) ldu * u_ncol;
    size_t size_VT = (size_t) ldvt * n;

    std::vector< scalar_t > A_tst( size_A );
    std::vector< scalar_t > A_ref( size_A );
    std::vector< real_t > Sigma_tst( size_S );
    std::vector< real_t > Sigma_ref( size_S );
    std::vector< scalar_t > U_tst( size_U );
    std::vector< scalar_t > U_ref( size_U );
    std::vector< scalar_t > VT_tst( size_VT );
    std::vector< scalar_t > VT_ref( size_VT );

    lapack::generate_matrix( params.matrix, m, n, &A_tst[0], lda );
    A_ref = A_tst;

    if (verbose >= 2) {
        printf( "A = " ); print_matrix( m, n, &A_tst[0], lda );
    }


    // ---------- run test
    testsweeper::flush_cache( params.cache() );
    double time = testsweeper::get_wtime();
    int64_t info_tst = lapack::gesvd(
        jobu, jobvt, m, n,
        &A_tst[0], lda,
        &Sigma_tst[0],
        &U_tst[0], ldu,
        &VT_tst[0], ldvt );
    time = testsweeper::get_wtime() - time;
    if (info_tst != 0) {
        fprintf( stderr, "lapack::gesvd returned error %lld\n", llong( info_tst ) );
    }

    if (verbose >= 2) {
        printf( "A_out = " ); print_matrix( m, n, &A_tst[0], lda );
        printf( "U = "     ); print_matrix( m, u_ncol, &U_tst[0], ldu );
        printf( "VT = "    ); print_matrix( v_nrow, n, &VT_tst[0], ldvt );
        printf( "Sigma = " ); print_vector( n, &Sigma_tst[0], 1 );
    }

    params.time() = time;
    //double gflop = lapack::Gflop< scalar_t >::gesvd( jobu, jobvt, m, n );
    //params.gflops() = gflop / time;

    // ---------- check numerical error
    // result[ 0 ] = || A - U Sigma VT || / (||A|| max( m, n )),
    //                                      if jobu  != NoVec and jobvt != NoVec.
    // result[ 1 ] = || I - U^H U || / m,   if jobu  != NoVec.
    // result[ 2 ] = || I - VT VT^H || / n, if jobvt != NoVec.
    // result[ 3 ] = 0 if Sigma has non-negative values in non-increasing order,
    //                 else >= 1.
    real_t result[ 4 ] = { (real_t) testsweeper::no_data_flag,
                           (real_t) testsweeper::no_data_flag,
                           (real_t) testsweeper::no_data_flag,
                           (real_t) testsweeper::no_data_flag };
    if (params.check() == 'y') {
        // U2 or VT2 points to A if overwriting
        scalar_t* U2    = &U_tst[0];
        int64_t   ldu2  = ldu;
        scalar_t* VT2   = &VT_tst[0];
        int64_t   ldvt2 = ldvt;
        if (jobu == Job::OverwriteVec) {
            U2   = &A_tst[0];
            ldu2 = lda;
        }
        else if (jobvt == Job::OverwriteVec) {
            VT2   = &A_tst[0];
            ldvt2 = lda;
        }
        check_svd( jobu, jobvt, m, n, &A_ref[0], lda,
                   &Sigma_tst[0], U2, ldu2, VT2, ldvt2, result );

        if (verbose >= 2) {
            printf( "U2 = "  ); print_matrix( m, u_ncol, U2, ldu2 );
            printf( "VT2 = " ); print_matrix( v_nrow, n, VT2, ldvt2 );
        }
    }

    if (params.ref() == 'y') {
        // ---------- run reference
        testsweeper::flush_cache( params.cache() );
        time = testsweeper::get_wtime();
        int64_t info_ref = LAPACKE_gesvd(
            to_char( jobu ), to_char( jobvt ), m, n,
            &A_ref[0], lda,
            &Sigma_ref[0],
            &U_ref[0], ldu,
            &VT_ref[0], ldvt );
        time = testsweeper::get_wtime() - time;
        if (info_ref != 0) {
            fprintf( stderr, "LAPACKE_gesvd returned error %lld\n", llong( info_ref ) );
        }

        params.ref_time() = time;
        //params.ref_gflops() = gflop / time;

        // ---------- check error compared to reference
        if (info_tst != info_ref) {
            result[ 0 ] = 1;
        }
        result[ 3 ] += rel_error( Sigma_tst, Sigma_ref );
    }
    params.error()   = result[ 0 ];
    params.ortho_U() = result[ 1 ];
    params.ortho_V() = result[ 2 ];
    params.error2()  = result[ 3 ];
    params.okay() = (
        (jobu == Job::NoVec || jobvt == Job::NoVec || result[ 0 ] < tol)
        && (jobu  == Job::NoVec || result[ 1 ] < tol)
        && (jobvt == Job::NoVec || result[ 2 ] < tol)
        && result[ 3 ] < tol);
}

// -----------------------------------------------------------------------------
void test_gesvd( Params& params, bool run )
{
    switch (params.datatype()) {
        case testsweeper::DataType::Single:
            test_gesvd_work< float >( params, run );
            break;

        case testsweeper::DataType::Double:
            test_gesvd_work< double >( params, run );
            break;

        case testsweeper::DataType::SingleComplex:
            test_gesvd_work< std::complex<float> >( params, run );
            break;

        case testsweeper::DataType::DoubleComplex:
            test_gesvd_work< std::complex<double> >( params, run );
            break;

        default:
            throw std::runtime_error( "unknown datatype" );
            break;
    }
}
