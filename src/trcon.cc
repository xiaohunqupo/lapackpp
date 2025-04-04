// Copyright (c) 2017-2023, University of Tennessee. All rights reserved.
// SPDX-License-Identifier: BSD-3-Clause
// This program is free software: you can redistribute it and/or modify it under
// the terms of the BSD 3-Clause license. See the accompanying LICENSE file.

#include "lapack.hh"
#include "lapack_internal.hh"
#include "lapack/fortran.h"
#include "NoConstructAllocator.hh"

#include <vector>

namespace lapack {

using blas::max;
using blas::min;
using blas::real;

// -----------------------------------------------------------------------------
int64_t trcon(
    lapack::Norm norm, lapack::Uplo uplo, lapack::Diag diag, int64_t n,
    float const* A, int64_t lda,
    float* rcond )
{
    char norm_ = to_char( norm );
    char uplo_ = to_char( uplo );
    char diag_ = to_char( diag );
    lapack_int n_ = to_lapack_int( n );
    lapack_int lda_ = to_lapack_int( lda );
    lapack_int info_ = 0;

    // allocate workspace
    lapack::vector< float > work( (3*n) );
    lapack::vector< lapack_int > iwork( (n) );

    LAPACK_strcon(
        &norm_, &uplo_, &diag_, &n_,
        A, &lda_, rcond,
        &work[0],
        &iwork[0], &info_
    );
    if (info_ < 0) {
        throw Error();
    }
    return info_;
}

// -----------------------------------------------------------------------------
int64_t trcon(
    lapack::Norm norm, lapack::Uplo uplo, lapack::Diag diag, int64_t n,
    double const* A, int64_t lda,
    double* rcond )
{
    char norm_ = to_char( norm );
    char uplo_ = to_char( uplo );
    char diag_ = to_char( diag );
    lapack_int n_ = to_lapack_int( n );
    lapack_int lda_ = to_lapack_int( lda );
    lapack_int info_ = 0;

    // allocate workspace
    lapack::vector< double > work( (3*n) );
    lapack::vector< lapack_int > iwork( (n) );

    LAPACK_dtrcon(
        &norm_, &uplo_, &diag_, &n_,
        A, &lda_, rcond,
        &work[0],
        &iwork[0], &info_
    );
    if (info_ < 0) {
        throw Error();
    }
    return info_;
}

// -----------------------------------------------------------------------------
int64_t trcon(
    lapack::Norm norm, lapack::Uplo uplo, lapack::Diag diag, int64_t n,
    std::complex<float> const* A, int64_t lda,
    float* rcond )
{
    char norm_ = to_char( norm );
    char uplo_ = to_char( uplo );
    char diag_ = to_char( diag );
    lapack_int n_ = to_lapack_int( n );
    lapack_int lda_ = to_lapack_int( lda );
    lapack_int info_ = 0;

    // allocate workspace
    lapack::vector< std::complex<float> > work( (2*n) );
    lapack::vector< float > rwork( (n) );

    LAPACK_ctrcon(
        &norm_, &uplo_, &diag_, &n_,
        (lapack_complex_float*) A, &lda_, rcond,
        (lapack_complex_float*) &work[0],
        &rwork[0], &info_
    );
    if (info_ < 0) {
        throw Error();
    }
    return info_;
}

// -----------------------------------------------------------------------------
int64_t trcon(
    lapack::Norm norm, lapack::Uplo uplo, lapack::Diag diag, int64_t n,
    std::complex<double> const* A, int64_t lda,
    double* rcond )
{
    char norm_ = to_char( norm );
    char uplo_ = to_char( uplo );
    char diag_ = to_char( diag );
    lapack_int n_ = to_lapack_int( n );
    lapack_int lda_ = to_lapack_int( lda );
    lapack_int info_ = 0;

    // allocate workspace
    lapack::vector< std::complex<double> > work( (2*n) );
    lapack::vector< double > rwork( (n) );

    LAPACK_ztrcon(
        &norm_, &uplo_, &diag_, &n_,
        (lapack_complex_double*) A, &lda_, rcond,
        (lapack_complex_double*) &work[0],
        &rwork[0], &info_
    );
    if (info_ < 0) {
        throw Error();
    }
    return info_;
}

}  // namespace lapack
