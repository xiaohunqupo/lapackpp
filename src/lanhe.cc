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
/// @ingroup norm
float lanhe(
    lapack::Norm norm, lapack::Uplo uplo, int64_t n,
    std::complex<float> const* A, int64_t lda )
{
    char norm_ = to_char( norm );
    char uplo_ = to_char( uplo );
    lapack_int n_ = to_lapack_int( n );
    lapack_int lda_ = to_lapack_int( lda );

    // from docs
    int64_t lwork = (norm == Norm::Inf || norm == Norm::One ? n : 1);

    // allocate workspace
    lapack::vector< float > work( max( 1, lwork ) );

    return LAPACK_clanhe(
        &norm_, &uplo_, &n_,
        (lapack_complex_float*) A, &lda_,
        &work[0]
    );
}

// -----------------------------------------------------------------------------
/// Returns the value of the one norm, Frobenius norm,
/// infinity norm, or the element of largest absolute value of a
/// complex hermitian matrix A.
///
/// Overloaded versions are available for
/// `float`, `double`, `std::complex<float>`, and `std::complex<double>`.
/// For real matrices, this is an alias for `lapack::lansy`.
/// For complex symmetric matrices, see `lapack::lansy`.
///
/// @param[in] norm
///     The value to be returned:
///     - lapack::Norm::Max: max norm: max(abs(A(i,j))).
///                          Note this is not a consistent matrix norm.
///     - lapack::Norm::One: one norm: maximum column sum
///     - lapack::Norm::Inf: infinity norm: maximum row sum
///     - lapack::Norm::Fro: Frobenius norm: square root of sum of squares
///
/// @param[in] uplo
///     Whether the upper or lower triangular part of the
///     hermitian matrix A is to be referenced.
///     - lapack::Uplo::Upper: Upper triangular part of A is referenced
///     - lapack::Uplo::Lower: Lower triangular part of A is referenced
///
/// @param[in] n
///     The order of the matrix A. n >= 0. When n = 0, returns zero.
///
/// @param[in] A
///     The n-by-n matrix A, stored in an lda-by-n array.
///     The hermitian matrix A.
///     - If uplo = Upper, the leading n-by-n
///     upper triangular part of A contains the upper triangular part
///     of the matrix A, and the strictly lower triangular part of A
///     is not referenced.
///
///     - If uplo = Lower, the leading n-by-n lower
///     triangular part of A contains the lower triangular part of
///     the matrix A, and the strictly upper triangular part of A is
///     not referenced.
///
///     - Note that the imaginary parts of the diagonal
///     elements need not be set and are assumed to be zero.
///
/// @param[in] lda
///     The leading dimension of the array A. lda >= max(n,1).
///
/// @ingroup norm
double lanhe(
    lapack::Norm norm, lapack::Uplo uplo, int64_t n,
    std::complex<double> const* A, int64_t lda )
{
    char norm_ = to_char( norm );
    char uplo_ = to_char( uplo );
    lapack_int n_ = to_lapack_int( n );
    lapack_int lda_ = to_lapack_int( lda );

    // from docs
    int64_t lwork = (norm == Norm::Inf || norm == Norm::One ? n : 1);

    // allocate workspace
    lapack::vector< double > work( max( 1, lwork ) );

    return LAPACK_zlanhe(
        &norm_, &uplo_, &n_,
        (lapack_complex_double*) A, &lda_,
        &work[0]
    );
}

}  // namespace lapack
