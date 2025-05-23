// Copyright (c) 2017-2023, University of Tennessee. All rights reserved.
// SPDX-License-Identifier: BSD-3-Clause
// This program is free software: you can redistribute it and/or modify it under
// the terms of the BSD 3-Clause license. See the accompanying LICENSE file.

#include "lapack.hh"
#include "lapack_internal.hh"
#include "lapack/fortran.h"
#include "NoConstructAllocator.hh"

#if LAPACK_VERSION >= 30300  // >= v3.3

#include <vector>

namespace lapack {

using blas::max;
using blas::min;
using blas::real;

// -----------------------------------------------------------------------------
void lapmr(
    bool forwrd, int64_t m, int64_t n,
    float* X, int64_t ldx,
    int64_t* K )
{
    lapack_int forwrd_ = to_lapack_int( forwrd );
    lapack_int m_ = to_lapack_int( m );
    lapack_int n_ = to_lapack_int( n );
    lapack_int ldx_ = to_lapack_int( ldx );
    #ifndef LAPACK_ILP64
        // 32-bit copy
        std::vector< lapack_int > K_( &K[0], &K[(m)] );
        lapack_int* K_ptr = &K_[0];
    #else
        lapack_int* K_ptr = K;
    #endif

    LAPACK_slapmr(
        &forwrd_, &m_, &n_,
        X, &ldx_,
        K_ptr );
    #ifndef LAPACK_ILP64
        std::copy( K_.begin(), K_.end(), K );
    #endif
}

// -----------------------------------------------------------------------------
void lapmr(
    bool forwrd, int64_t m, int64_t n,
    double* X, int64_t ldx,
    int64_t* K )
{
    lapack_int forwrd_ = to_lapack_int( forwrd );
    lapack_int m_ = to_lapack_int( m );
    lapack_int n_ = to_lapack_int( n );
    lapack_int ldx_ = to_lapack_int( ldx );
    #ifndef LAPACK_ILP64
        // 32-bit copy
        std::vector< lapack_int > K_( &K[0], &K[(m)] );
        lapack_int* K_ptr = &K_[0];
    #else
        lapack_int* K_ptr = K;
    #endif

    LAPACK_dlapmr(
        &forwrd_, &m_, &n_,
        X, &ldx_,
        K_ptr );
    #ifndef LAPACK_ILP64
        std::copy( K_.begin(), K_.end(), K );
    #endif
}

// -----------------------------------------------------------------------------
void lapmr(
    bool forwrd, int64_t m, int64_t n,
    std::complex<float>* X, int64_t ldx,
    int64_t* K )
{
    lapack_int forwrd_ = to_lapack_int( forwrd );
    lapack_int m_ = to_lapack_int( m );
    lapack_int n_ = to_lapack_int( n );
    lapack_int ldx_ = to_lapack_int( ldx );
    #ifndef LAPACK_ILP64
        // 32-bit copy
        std::vector< lapack_int > K_( &K[0], &K[(m)] );
        lapack_int* K_ptr = &K_[0];
    #else
        lapack_int* K_ptr = K;
    #endif

    LAPACK_clapmr(
        &forwrd_, &m_, &n_,
        (lapack_complex_float*) X, &ldx_,
        K_ptr );
    #ifndef LAPACK_ILP64
        std::copy( K_.begin(), K_.end(), K );
    #endif
}

// -----------------------------------------------------------------------------
void lapmr(
    bool forwrd, int64_t m, int64_t n,
    std::complex<double>* X, int64_t ldx,
    int64_t* K )
{
    lapack_int forwrd_ = to_lapack_int( forwrd );
    lapack_int m_ = to_lapack_int( m );
    lapack_int n_ = to_lapack_int( n );
    lapack_int ldx_ = to_lapack_int( ldx );
    #ifndef LAPACK_ILP64
        // 32-bit copy
        std::vector< lapack_int > K_( &K[0], &K[(m)] );
        lapack_int* K_ptr = &K_[0];
    #else
        lapack_int* K_ptr = K;
    #endif

    LAPACK_zlapmr(
        &forwrd_, &m_, &n_,
        (lapack_complex_double*) X, &ldx_,
        K_ptr );
    #ifndef LAPACK_ILP64
        std::copy( K_.begin(), K_.end(), K );
    #endif
}

}  // namespace lapack

#endif  // LAPACK >= v3.3
