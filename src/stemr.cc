// Copyright (c) 2017-2023, University of Tennessee. All rights reserved.
// SPDX-License-Identifier: BSD-3-Clause
// This program is free software: you can redistribute it and/or modify it under
// the terms of the BSD 3-Clause license. See the accompanying LICENSE file.

#include "lapack.hh"
#include "lapack/fortran.h"
#include "NoConstructAllocator.hh"

#include <vector>

namespace lapack {

using blas::max;
using blas::min;
using blas::real;

// -----------------------------------------------------------------------------
int64_t stemr(
    lapack::Job jobz, lapack::Range range, int64_t n,
    float* D,
    float* E, float vl, float vu, int64_t il, int64_t iu,
    int64_t* m,
    float* W,
    float* Z, int64_t ldz, int64_t nzc,
    int64_t* isuppz,
    bool* tryrac )
{
    // check for overflow
    if (sizeof(int64_t) > sizeof(lapack_int)) {
        lapack_error_if( std::abs(n) > std::numeric_limits<lapack_int>::max() );
        lapack_error_if( std::abs(il) > std::numeric_limits<lapack_int>::max() );
        lapack_error_if( std::abs(iu) > std::numeric_limits<lapack_int>::max() );
        lapack_error_if( std::abs(ldz) > std::numeric_limits<lapack_int>::max() );
        lapack_error_if( std::abs(nzc) > std::numeric_limits<lapack_int>::max() );
    }
    char jobz_ = to_char( jobz );
    char range_ = to_char( range );
    lapack_int n_ = (lapack_int) n;
    lapack_int il_ = (lapack_int) il;
    lapack_int iu_ = (lapack_int) iu;
    lapack_int m_ = (lapack_int) *m;
    lapack_int ldz_ = (lapack_int) ldz;
    lapack_int nzc_ = (lapack_int) nzc;
    #ifndef LAPACK_ILP64
        // 32-bit copy
        lapack::vector< lapack_int > isuppz_( (2*max( 1, n )) );  // was m; n >= m
        lapack_int* isuppz_ptr = &isuppz_[0];
    #else
        lapack_int* isuppz_ptr = isuppz;
    #endif
    lapack_int tryrac_ = (lapack_int) *tryrac;
    lapack_int info_ = 0;

    // query for workspace size
    float qry_work[1];
    lapack_int qry_iwork[1];
    lapack_int ineg_one = -1;
    LAPACK_sstemr(
        &jobz_, &range_, &n_,
        D,
        E, &vl, &vu, &il_, &iu_, &m_,
        W,
        Z, &ldz_, &nzc_,
        isuppz_ptr, &tryrac_,
        qry_work, &ineg_one,
        qry_iwork, &ineg_one, &info_
    );
    if (info_ < 0) {
        throw Error();
    }
    lapack_int lwork_ = real(qry_work[0]);
    lapack_int liwork_ = real(qry_iwork[0]);

    // allocate workspace
    lapack::vector< float > work( lwork_ );
    lapack::vector< lapack_int > iwork( liwork_ );

    LAPACK_sstemr(
        &jobz_, &range_, &n_,
        D,
        E, &vl, &vu, &il_, &iu_, &m_,
        W,
        Z, &ldz_, &nzc_,
        isuppz_ptr, &tryrac_,
        &work[0], &lwork_,
        &iwork[0], &liwork_, &info_
    );
    if (info_ < 0) {
        throw Error();
    }
    *m = m_;
    #ifndef LAPACK_ILP64
        std::copy( &isuppz_[0], &isuppz_[m_], isuppz );  // was begin to end
    #endif
    *tryrac = tryrac_;
    return info_;
}

// -----------------------------------------------------------------------------
int64_t stemr(
    lapack::Job jobz, lapack::Range range, int64_t n,
    double* D,
    double* E, double vl, double vu, int64_t il, int64_t iu,
    int64_t* m,
    double* W,
    double* Z, int64_t ldz, int64_t nzc,
    int64_t* isuppz,
    bool* tryrac )
{
    // check for overflow
    if (sizeof(int64_t) > sizeof(lapack_int)) {
        lapack_error_if( std::abs(n) > std::numeric_limits<lapack_int>::max() );
        lapack_error_if( std::abs(il) > std::numeric_limits<lapack_int>::max() );
        lapack_error_if( std::abs(iu) > std::numeric_limits<lapack_int>::max() );
        lapack_error_if( std::abs(ldz) > std::numeric_limits<lapack_int>::max() );
        lapack_error_if( std::abs(nzc) > std::numeric_limits<lapack_int>::max() );
    }
    char jobz_ = to_char( jobz );
    char range_ = to_char( range );
    lapack_int n_ = (lapack_int) n;
    lapack_int il_ = (lapack_int) il;
    lapack_int iu_ = (lapack_int) iu;
    lapack_int m_ = (lapack_int) *m;
    lapack_int ldz_ = (lapack_int) ldz;
    lapack_int nzc_ = (lapack_int) nzc;
    #ifndef LAPACK_ILP64
        // 32-bit copy
        lapack::vector< lapack_int > isuppz_( (2*max( 1, n )) );  // was m; n >= m
        lapack_int* isuppz_ptr = &isuppz_[0];
    #else
        lapack_int* isuppz_ptr = isuppz;
    #endif
    lapack_int tryrac_ = (lapack_int) *tryrac;
    lapack_int info_ = 0;

    // query for workspace size
    double qry_work[1];
    lapack_int qry_iwork[1];
    lapack_int ineg_one = -1;
    LAPACK_dstemr(
        &jobz_, &range_, &n_,
        D,
        E, &vl, &vu, &il_, &iu_, &m_,
        W,
        Z, &ldz_, &nzc_,
        isuppz_ptr, &tryrac_,
        qry_work, &ineg_one,
        qry_iwork, &ineg_one, &info_
    );
    if (info_ < 0) {
        throw Error();
    }
    lapack_int lwork_ = real(qry_work[0]);
    lapack_int liwork_ = real(qry_iwork[0]);

    // allocate workspace
    lapack::vector< double > work( lwork_ );
    lapack::vector< lapack_int > iwork( liwork_ );

    LAPACK_dstemr(
        &jobz_, &range_, &n_,
        D,
        E, &vl, &vu, &il_, &iu_, &m_,
        W,
        Z, &ldz_, &nzc_,
        isuppz_ptr, &tryrac_,
        &work[0], &lwork_,
        &iwork[0], &liwork_, &info_
    );
    if (info_ < 0) {
        throw Error();
    }
    *m = m_;
    #ifndef LAPACK_ILP64
        std::copy( &isuppz_[0], &isuppz_[m_], isuppz );  // was begin to end
    #endif
    *tryrac = tryrac_;
    return info_;
}

// -----------------------------------------------------------------------------
int64_t stemr(
    lapack::Job jobz, lapack::Range range, int64_t n,
    float* D,
    float* E, float vl, float vu, int64_t il, int64_t iu,
    int64_t* m,
    float* W,
    std::complex<float>* Z, int64_t ldz, int64_t nzc,
    int64_t* isuppz,
    bool* tryrac )
{
    // check for overflow
    if (sizeof(int64_t) > sizeof(lapack_int)) {
        lapack_error_if( std::abs(n) > std::numeric_limits<lapack_int>::max() );
        lapack_error_if( std::abs(il) > std::numeric_limits<lapack_int>::max() );
        lapack_error_if( std::abs(iu) > std::numeric_limits<lapack_int>::max() );
        lapack_error_if( std::abs(ldz) > std::numeric_limits<lapack_int>::max() );
        lapack_error_if( std::abs(nzc) > std::numeric_limits<lapack_int>::max() );
    }
    char jobz_ = to_char( jobz );
    char range_ = to_char( range );
    lapack_int n_ = (lapack_int) n;
    lapack_int il_ = (lapack_int) il;
    lapack_int iu_ = (lapack_int) iu;
    lapack_int m_ = (lapack_int) *m;
    lapack_int ldz_ = (lapack_int) ldz;
    lapack_int nzc_ = (lapack_int) nzc;
    #ifndef LAPACK_ILP64
        // 32-bit copy
        lapack::vector< lapack_int > isuppz_( (2*max( 1, n )) );  // was m; n >= m
        lapack_int* isuppz_ptr = &isuppz_[0];
    #else
        lapack_int* isuppz_ptr = isuppz;
    #endif
    lapack_int tryrac_ = (lapack_int) *tryrac;
    lapack_int info_ = 0;

    // query for workspace size
    float qry_work[1];
    lapack_int qry_iwork[1];
    lapack_int ineg_one = -1;
    LAPACK_cstemr(
        &jobz_, &range_, &n_,
        D,
        E, &vl, &vu, &il_, &iu_, &m_,
        W,
        (lapack_complex_float*) Z, &ldz_, &nzc_,
        isuppz_ptr, &tryrac_,
        qry_work, &ineg_one,
        qry_iwork, &ineg_one, &info_
    );
    if (info_ < 0) {
        throw Error();
    }
    lapack_int lwork_ = real(qry_work[0]);
    lapack_int liwork_ = real(qry_iwork[0]);

    // allocate workspace
    lapack::vector< float > work( lwork_ );
    lapack::vector< lapack_int > iwork( liwork_ );

    LAPACK_cstemr(
        &jobz_, &range_, &n_,
        D,
        E, &vl, &vu, &il_, &iu_, &m_,
        W,
        (lapack_complex_float*) Z, &ldz_, &nzc_,
        isuppz_ptr, &tryrac_,
        &work[0], &lwork_,
        &iwork[0], &liwork_, &info_
    );
    if (info_ < 0) {
        throw Error();
    }
    *m = m_;
    #ifndef LAPACK_ILP64
        std::copy( &isuppz_[0], &isuppz_[m_], isuppz );  // was begin to end
    #endif
    *tryrac = tryrac_;
    return info_;
}

// -----------------------------------------------------------------------------
int64_t stemr(
    lapack::Job jobz, lapack::Range range, int64_t n,
    double* D,
    double* E, double vl, double vu, int64_t il, int64_t iu,
    int64_t* m,
    double* W,
    std::complex<double>* Z, int64_t ldz, int64_t nzc,
    int64_t* isuppz,
    bool* tryrac )
{
    // check for overflow
    if (sizeof(int64_t) > sizeof(lapack_int)) {
        lapack_error_if( std::abs(n) > std::numeric_limits<lapack_int>::max() );
        lapack_error_if( std::abs(il) > std::numeric_limits<lapack_int>::max() );
        lapack_error_if( std::abs(iu) > std::numeric_limits<lapack_int>::max() );
        lapack_error_if( std::abs(ldz) > std::numeric_limits<lapack_int>::max() );
        lapack_error_if( std::abs(nzc) > std::numeric_limits<lapack_int>::max() );
    }
    char jobz_ = to_char( jobz );
    char range_ = to_char( range );
    lapack_int n_ = (lapack_int) n;
    lapack_int il_ = (lapack_int) il;
    lapack_int iu_ = (lapack_int) iu;
    lapack_int m_ = (lapack_int) *m;
    lapack_int ldz_ = (lapack_int) ldz;
    lapack_int nzc_ = (lapack_int) nzc;
    #ifndef LAPACK_ILP64
        // 32-bit copy
        lapack::vector< lapack_int > isuppz_( (2*max( 1, n )) );  // was m; n >= m
        lapack_int* isuppz_ptr = &isuppz_[0];
    #else
        lapack_int* isuppz_ptr = isuppz;
    #endif
    lapack_int tryrac_ = (lapack_int) *tryrac;
    lapack_int info_ = 0;

    // query for workspace size
    double qry_work[1];
    lapack_int qry_iwork[1];
    lapack_int ineg_one = -1;
    LAPACK_zstemr(
        &jobz_, &range_, &n_,
        D,
        E, &vl, &vu, &il_, &iu_, &m_,
        W,
        (lapack_complex_double*) Z, &ldz_, &nzc_,
        isuppz_ptr, &tryrac_,
        qry_work, &ineg_one,
        qry_iwork, &ineg_one, &info_
    );
    if (info_ < 0) {
        throw Error();
    }
    lapack_int lwork_ = real(qry_work[0]);
    lapack_int liwork_ = real(qry_iwork[0]);

    // allocate workspace
    lapack::vector< double > work( lwork_ );
    lapack::vector< lapack_int > iwork( liwork_ );

    LAPACK_zstemr(
        &jobz_, &range_, &n_,
        D,
        E, &vl, &vu, &il_, &iu_, &m_,
        W,
        (lapack_complex_double*) Z, &ldz_, &nzc_,
        isuppz_ptr, &tryrac_,
        &work[0], &lwork_,
        &iwork[0], &liwork_, &info_
    );
    if (info_ < 0) {
        throw Error();
    }
    *m = m_;
    #ifndef LAPACK_ILP64
        std::copy( &isuppz_[0], &isuppz_[m_], isuppz );  // was begin to end
    #endif
    *tryrac = tryrac_;
    return info_;
}

}  // namespace lapack
