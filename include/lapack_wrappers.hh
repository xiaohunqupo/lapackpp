#ifndef ICL_LAPACK_WRAPPERS_HH
#define ICL_LAPACK_WRAPPERS_HH

#include "lapack_util.hh"

namespace lapack {

// -----------------------------------------------------------------------------
int64_t bbcsd(
    lapack::JobCS jobu1, lapack::JobCS jobu2, lapack::JobCS jobv1t, lapack::JobCS jobv2t, lapack::Op trans, int64_t m, int64_t p, int64_t q,
    float* theta,
    float* phi,
    float* U1, int64_t ldu1,
    float* U2, int64_t ldu2,
    float* V1T, int64_t ldv1t,
    float* V2T, int64_t ldv2t,
    float* B11D,
    float* B11E,
    float* B12D,
    float* B12E,
    float* B21D,
    float* B21E,
    float* B22D,
    float* B22E );

int64_t bbcsd(
    lapack::JobCS jobu1, lapack::JobCS jobu2, lapack::JobCS jobv1t, lapack::JobCS jobv2t, lapack::Op trans, int64_t m, int64_t p, int64_t q,
    double* theta,
    double* phi,
    double* U1, int64_t ldu1,
    double* U2, int64_t ldu2,
    double* V1T, int64_t ldv1t,
    double* V2T, int64_t ldv2t,
    double* B11D,
    double* B11E,
    double* B12D,
    double* B12E,
    double* B21D,
    double* B21E,
    double* B22D,
    double* B22E );

int64_t bbcsd(
    lapack::JobCS jobu1, lapack::JobCS jobu2, lapack::JobCS jobv1t, lapack::JobCS jobv2t, lapack::Op trans, int64_t m, int64_t p, int64_t q,
    float* theta,
    float* phi,
    std::complex<float>* U1, int64_t ldu1,
    std::complex<float>* U2, int64_t ldu2,
    std::complex<float>* V1T, int64_t ldv1t,
    std::complex<float>* V2T, int64_t ldv2t,
    float* B11D,
    float* B11E,
    float* B12D,
    float* B12E,
    float* B21D,
    float* B21E,
    float* B22D,
    float* B22E );

int64_t bbcsd(
    lapack::JobCS jobu1, lapack::JobCS jobu2, lapack::JobCS jobv1t, lapack::JobCS jobv2t, lapack::Op trans, int64_t m, int64_t p, int64_t q,
    double* theta,
    double* phi,
    std::complex<double>* U1, int64_t ldu1,
    std::complex<double>* U2, int64_t ldu2,
    std::complex<double>* V1T, int64_t ldv1t,
    std::complex<double>* V2T, int64_t ldv2t,
    double* B11D,
    double* B11E,
    double* B12D,
    double* B12E,
    double* B21D,
    double* B21E,
    double* B22D,
    double* B22E );

// -----------------------------------------------------------------------------
int64_t bdsdc(
    lapack::Uplo uplo, lapack::CompQ compq, int64_t n,
    float* D,
    float* E,
    float* U, int64_t ldu,
    float* VT, int64_t ldvt,
    float* Q,
    int64_t* IQ );

int64_t bdsdc(
    lapack::Uplo uplo, lapack::CompQ compq, int64_t n,
    double* D,
    double* E,
    double* U, int64_t ldu,
    double* VT, int64_t ldvt,
    double* Q,
    int64_t* IQ );

// -----------------------------------------------------------------------------
int64_t bdsqr(
    lapack::Uplo uplo, int64_t n, int64_t ncvt, int64_t nru, int64_t ncc,
    float* D,
    float* E,
    float* VT, int64_t ldvt,
    float* U, int64_t ldu,
    float* C, int64_t ldc );

int64_t bdsqr(
    lapack::Uplo uplo, int64_t n, int64_t ncvt, int64_t nru, int64_t ncc,
    double* D,
    double* E,
    double* VT, int64_t ldvt,
    double* U, int64_t ldu,
    double* C, int64_t ldc );

int64_t bdsqr(
    lapack::Uplo uplo, int64_t n, int64_t ncvt, int64_t nru, int64_t ncc,
    float* D,
    float* E,
    std::complex<float>* VT, int64_t ldvt,
    std::complex<float>* U, int64_t ldu,
    std::complex<float>* C, int64_t ldc );

int64_t bdsqr(
    lapack::Uplo uplo, int64_t n, int64_t ncvt, int64_t nru, int64_t ncc,
    double* D,
    double* E,
    std::complex<double>* VT, int64_t ldvt,
    std::complex<double>* U, int64_t ldu,
    std::complex<double>* C, int64_t ldc );

// -----------------------------------------------------------------------------
int64_t bdsvdx(
    lapack::Uplo uplo, lapack::Job jobz, lapack::Range range, int64_t n,
    float* D,
    float* E, float vl, float vu, int64_t il, int64_t iu,
    int64_t* ns,
    float* S,
    float* Z, int64_t ldz );

int64_t bdsvdx(
    lapack::Uplo uplo, lapack::Job jobz, lapack::Range range, int64_t n,
    double* D,
    double* E, double vl, double vu, int64_t il, int64_t iu,
    int64_t* ns,
    double* S,
    double* Z, int64_t ldz );

// -----------------------------------------------------------------------------
int64_t disna(
    lapack::Job job, int64_t m, int64_t n,
    float const* D,
    float* SEP );

int64_t disna(
    lapack::Job job, int64_t m, int64_t n,
    double const* D,
    double* SEP );

// -----------------------------------------------------------------------------
int64_t gbbrd(
    lapack::Vect vect, int64_t m, int64_t n, int64_t ncc, int64_t kl, int64_t ku,
    float* AB, int64_t ldab,
    float* D,
    float* E,
    float* Q, int64_t ldq,
    float* PT, int64_t ldpt,
    float* C, int64_t ldc );

int64_t gbbrd(
    lapack::Vect vect, int64_t m, int64_t n, int64_t ncc, int64_t kl, int64_t ku,
    double* AB, int64_t ldab,
    double* D,
    double* E,
    double* Q, int64_t ldq,
    double* PT, int64_t ldpt,
    double* C, int64_t ldc );

int64_t gbbrd(
    lapack::Vect vect, int64_t m, int64_t n, int64_t ncc, int64_t kl, int64_t ku,
    std::complex<float>* AB, int64_t ldab,
    float* D,
    float* E,
    std::complex<float>* Q, int64_t ldq,
    std::complex<float>* PT, int64_t ldpt,
    std::complex<float>* C, int64_t ldc );

int64_t gbbrd(
    lapack::Vect vect, int64_t m, int64_t n, int64_t ncc, int64_t kl, int64_t ku,
    std::complex<double>* AB, int64_t ldab,
    double* D,
    double* E,
    std::complex<double>* Q, int64_t ldq,
    std::complex<double>* PT, int64_t ldpt,
    std::complex<double>* C, int64_t ldc );

// -----------------------------------------------------------------------------
int64_t gbcon(
    lapack::Norm norm, int64_t n, int64_t kl, int64_t ku,
    float const* AB, int64_t ldab,
    int64_t const* ipiv, float anorm,
    float* rcond );

int64_t gbcon(
    lapack::Norm norm, int64_t n, int64_t kl, int64_t ku,
    double const* AB, int64_t ldab,
    int64_t const* ipiv, double anorm,
    double* rcond );

int64_t gbcon(
    lapack::Norm norm, int64_t n, int64_t kl, int64_t ku,
    std::complex<float> const* AB, int64_t ldab,
    int64_t const* ipiv, float anorm,
    float* rcond );

int64_t gbcon(
    lapack::Norm norm, int64_t n, int64_t kl, int64_t ku,
    std::complex<double> const* AB, int64_t ldab,
    int64_t const* ipiv, double anorm,
    double* rcond );

// -----------------------------------------------------------------------------
int64_t gbequ(
    int64_t m, int64_t n, int64_t kl, int64_t ku,
    float const* AB, int64_t ldab,
    float* R,
    float* C,
    float* rowcnd,
    float* colcnd,
    float* amax );

int64_t gbequ(
    int64_t m, int64_t n, int64_t kl, int64_t ku,
    double const* AB, int64_t ldab,
    double* R,
    double* C,
    double* rowcnd,
    double* colcnd,
    double* amax );

int64_t gbequ(
    int64_t m, int64_t n, int64_t kl, int64_t ku,
    std::complex<float> const* AB, int64_t ldab,
    float* R,
    float* C,
    float* rowcnd,
    float* colcnd,
    float* amax );

int64_t gbequ(
    int64_t m, int64_t n, int64_t kl, int64_t ku,
    std::complex<double> const* AB, int64_t ldab,
    double* R,
    double* C,
    double* rowcnd,
    double* colcnd,
    double* amax );

// -----------------------------------------------------------------------------
int64_t gbequb(
    int64_t m, int64_t n, int64_t kl, int64_t ku,
    float const* AB, int64_t ldab,
    float* R,
    float* C,
    float* rowcnd,
    float* colcnd,
    float* amax );

int64_t gbequb(
    int64_t m, int64_t n, int64_t kl, int64_t ku,
    double const* AB, int64_t ldab,
    double* R,
    double* C,
    double* rowcnd,
    double* colcnd,
    double* amax );

int64_t gbequb(
    int64_t m, int64_t n, int64_t kl, int64_t ku,
    std::complex<float> const* AB, int64_t ldab,
    float* R,
    float* C,
    float* rowcnd,
    float* colcnd,
    float* amax );

int64_t gbequb(
    int64_t m, int64_t n, int64_t kl, int64_t ku,
    std::complex<double> const* AB, int64_t ldab,
    double* R,
    double* C,
    double* rowcnd,
    double* colcnd,
    double* amax );

// -----------------------------------------------------------------------------
int64_t gbrfs(
    lapack::Op trans, int64_t n, int64_t kl, int64_t ku, int64_t nrhs,
    float const* AB, int64_t ldab,
    float const* AFB, int64_t ldafb,
    int64_t const* ipiv,
    float const* B, int64_t ldb,
    float* X, int64_t ldx,
    float* ferr,
    float* berr );

int64_t gbrfs(
    lapack::Op trans, int64_t n, int64_t kl, int64_t ku, int64_t nrhs,
    double const* AB, int64_t ldab,
    double const* AFB, int64_t ldafb,
    int64_t const* ipiv,
    double const* B, int64_t ldb,
    double* X, int64_t ldx,
    double* ferr,
    double* berr );

int64_t gbrfs(
    lapack::Op trans, int64_t n, int64_t kl, int64_t ku, int64_t nrhs,
    std::complex<float> const* AB, int64_t ldab,
    std::complex<float> const* AFB, int64_t ldafb,
    int64_t const* ipiv,
    std::complex<float> const* B, int64_t ldb,
    std::complex<float>* X, int64_t ldx,
    float* ferr,
    float* berr );

int64_t gbrfs(
    lapack::Op trans, int64_t n, int64_t kl, int64_t ku, int64_t nrhs,
    std::complex<double> const* AB, int64_t ldab,
    std::complex<double> const* AFB, int64_t ldafb,
    int64_t const* ipiv,
    std::complex<double> const* B, int64_t ldb,
    std::complex<double>* X, int64_t ldx,
    double* ferr,
    double* berr );

// -----------------------------------------------------------------------------
int64_t gbrfsx(
    lapack::Op trans, lapack::Equed equed, int64_t n, int64_t kl, int64_t ku, int64_t nrhs,
    float const* AB, int64_t ldab,
    float const* AFB, int64_t ldafb,
    int64_t const* ipiv,
    float* R,
    float* C,
    float const* B, int64_t ldb,
    float* X, int64_t ldx,
    float* rcond,
    float* berr, int64_t n_err_bnds,
    float* err_bnds_norm,
    float* err_bnds_comp, int64_t nparams,
    float* params );

int64_t gbrfsx(
    lapack::Op trans, lapack::Equed equed, int64_t n, int64_t kl, int64_t ku, int64_t nrhs,
    double const* AB, int64_t ldab,
    double const* AFB, int64_t ldafb,
    int64_t const* ipiv,
    double* R,
    double* C,
    double const* B, int64_t ldb,
    double* X, int64_t ldx,
    double* rcond,
    double* berr, int64_t n_err_bnds,
    double* err_bnds_norm,
    double* err_bnds_comp, int64_t nparams,
    double* params );

int64_t gbrfsx(
    lapack::Op trans, lapack::Equed equed, int64_t n, int64_t kl, int64_t ku, int64_t nrhs,
    std::complex<float> const* AB, int64_t ldab,
    std::complex<float> const* AFB, int64_t ldafb,
    int64_t const* ipiv,
    float* R,
    float* C,
    std::complex<float> const* B, int64_t ldb,
    std::complex<float>* X, int64_t ldx,
    float* rcond,
    float* berr, int64_t n_err_bnds,
    float* err_bnds_norm,
    float* err_bnds_comp, int64_t nparams,
    float* params );

int64_t gbrfsx(
    lapack::Op trans, lapack::Equed equed, int64_t n, int64_t kl, int64_t ku, int64_t nrhs,
    std::complex<double> const* AB, int64_t ldab,
    std::complex<double> const* AFB, int64_t ldafb,
    int64_t const* ipiv,
    double* R,
    double* C,
    std::complex<double> const* B, int64_t ldb,
    std::complex<double>* X, int64_t ldx,
    double* rcond,
    double* berr, int64_t n_err_bnds,
    double* err_bnds_norm,
    double* err_bnds_comp, int64_t nparams,
    double* params );

// -----------------------------------------------------------------------------
int64_t gbsv(
    int64_t n, int64_t kl, int64_t ku, int64_t nrhs,
    float* AB, int64_t ldab,
    int64_t* ipiv,
    float* B, int64_t ldb );

int64_t gbsv(
    int64_t n, int64_t kl, int64_t ku, int64_t nrhs,
    double* AB, int64_t ldab,
    int64_t* ipiv,
    double* B, int64_t ldb );

int64_t gbsv(
    int64_t n, int64_t kl, int64_t ku, int64_t nrhs,
    std::complex<float>* AB, int64_t ldab,
    int64_t* ipiv,
    std::complex<float>* B, int64_t ldb );

int64_t gbsv(
    int64_t n, int64_t kl, int64_t ku, int64_t nrhs,
    std::complex<double>* AB, int64_t ldab,
    int64_t* ipiv,
    std::complex<double>* B, int64_t ldb );

// -----------------------------------------------------------------------------
int64_t gbtrf(
    int64_t m, int64_t n, int64_t kl, int64_t ku,
    float* AB, int64_t ldab,
    int64_t* ipiv );

int64_t gbtrf(
    int64_t m, int64_t n, int64_t kl, int64_t ku,
    double* AB, int64_t ldab,
    int64_t* ipiv );

int64_t gbtrf(
    int64_t m, int64_t n, int64_t kl, int64_t ku,
    std::complex<float>* AB, int64_t ldab,
    int64_t* ipiv );

int64_t gbtrf(
    int64_t m, int64_t n, int64_t kl, int64_t ku,
    std::complex<double>* AB, int64_t ldab,
    int64_t* ipiv );

// -----------------------------------------------------------------------------
int64_t gbtrs(
    lapack::Op trans, int64_t n, int64_t kl, int64_t ku, int64_t nrhs,
    float const* AB, int64_t ldab,
    int64_t const* ipiv,
    float* B, int64_t ldb );

int64_t gbtrs(
    lapack::Op trans, int64_t n, int64_t kl, int64_t ku, int64_t nrhs,
    double const* AB, int64_t ldab,
    int64_t const* ipiv,
    double* B, int64_t ldb );

int64_t gbtrs(
    lapack::Op trans, int64_t n, int64_t kl, int64_t ku, int64_t nrhs,
    std::complex<float> const* AB, int64_t ldab,
    int64_t const* ipiv,
    std::complex<float>* B, int64_t ldb );

int64_t gbtrs(
    lapack::Op trans, int64_t n, int64_t kl, int64_t ku, int64_t nrhs,
    std::complex<double> const* AB, int64_t ldab,
    int64_t const* ipiv,
    std::complex<double>* B, int64_t ldb );

// -----------------------------------------------------------------------------
int64_t gebak(
    lapack::Job job, lapack::Side side, int64_t n, int64_t ilo, int64_t ihi,
    float const* scale, int64_t m,
    float* V, int64_t ldv );

int64_t gebak(
    lapack::Job job, lapack::Side side, int64_t n, int64_t ilo, int64_t ihi,
    double const* scale, int64_t m,
    double* V, int64_t ldv );

int64_t gebak(
    lapack::Job job, lapack::Side side, int64_t n, int64_t ilo, int64_t ihi,
    float const* scale, int64_t m,
    std::complex<float>* V, int64_t ldv );

int64_t gebak(
    lapack::Job job, lapack::Side side, int64_t n, int64_t ilo, int64_t ihi,
    double const* scale, int64_t m,
    std::complex<double>* V, int64_t ldv );

// -----------------------------------------------------------------------------
int64_t gebal(
    lapack::Balance balance, int64_t n,
    float* A, int64_t lda,
    int64_t* ilo,
    int64_t* ihi,
    float* scale );

int64_t gebal(
    lapack::Balance balance, int64_t n,
    double* A, int64_t lda,
    int64_t* ilo,
    int64_t* ihi,
    double* scale );

int64_t gebal(
    lapack::Balance balance, int64_t n,
    std::complex<float>* A, int64_t lda,
    int64_t* ilo,
    int64_t* ihi,
    float* scale );

int64_t gebal(
    lapack::Balance balance, int64_t n,
    std::complex<double>* A, int64_t lda,
    int64_t* ilo,
    int64_t* ihi,
    double* scale );

// -----------------------------------------------------------------------------
int64_t gebrd(
    int64_t m, int64_t n,
    float* A, int64_t lda,
    float* D,
    float* E,
    float* tauq,
    float* taup );

int64_t gebrd(
    int64_t m, int64_t n,
    double* A, int64_t lda,
    double* D,
    double* E,
    double* tauq,
    double* taup );

int64_t gebrd(
    int64_t m, int64_t n,
    std::complex<float>* A, int64_t lda,
    float* D,
    float* E,
    std::complex<float>* tauq,
    std::complex<float>* taup );

int64_t gebrd(
    int64_t m, int64_t n,
    std::complex<double>* A, int64_t lda,
    double* D,
    double* E,
    std::complex<double>* tauq,
    std::complex<double>* taup );

// -----------------------------------------------------------------------------
int64_t gecon(
    lapack::Norm norm, int64_t n,
    float const* A, int64_t lda, float anorm,
    float* rcond );

int64_t gecon(
    lapack::Norm norm, int64_t n,
    double const* A, int64_t lda, double anorm,
    double* rcond );

int64_t gecon(
    lapack::Norm norm, int64_t n,
    std::complex<float> const* A, int64_t lda, float anorm,
    float* rcond );

int64_t gecon(
    lapack::Norm norm, int64_t n,
    std::complex<double> const* A, int64_t lda, double anorm,
    double* rcond );

// -----------------------------------------------------------------------------
int64_t geequ(
    int64_t m, int64_t n,
    float const* A, int64_t lda,
    float* R,
    float* C,
    float* rowcnd,
    float* colcnd,
    float* amax );

int64_t geequ(
    int64_t m, int64_t n,
    double const* A, int64_t lda,
    double* R,
    double* C,
    double* rowcnd,
    double* colcnd,
    double* amax );

int64_t geequ(
    int64_t m, int64_t n,
    std::complex<float> const* A, int64_t lda,
    float* R,
    float* C,
    float* rowcnd,
    float* colcnd,
    float* amax );

int64_t geequ(
    int64_t m, int64_t n,
    std::complex<double> const* A, int64_t lda,
    double* R,
    double* C,
    double* rowcnd,
    double* colcnd,
    double* amax );

// -----------------------------------------------------------------------------
int64_t geequb(
    int64_t m, int64_t n,
    float const* A, int64_t lda,
    float* R,
    float* C,
    float* rowcnd,
    float* colcnd,
    float* amax );

int64_t geequb(
    int64_t m, int64_t n,
    double const* A, int64_t lda,
    double* R,
    double* C,
    double* rowcnd,
    double* colcnd,
    double* amax );

int64_t geequb(
    int64_t m, int64_t n,
    std::complex<float> const* A, int64_t lda,
    float* R,
    float* C,
    float* rowcnd,
    float* colcnd,
    float* amax );

int64_t geequb(
    int64_t m, int64_t n,
    std::complex<double> const* A, int64_t lda,
    double* R,
    double* C,
    double* rowcnd,
    double* colcnd,
    double* amax );

// -----------------------------------------------------------------------------
int64_t gees(
    lapack::Job jobvs, lapack::Sort sort, lapack_s_select2 select, int64_t n,
    float* A, int64_t lda,
    int64_t* sdim,
    float* WR,
    float* WI,
    float* VS, int64_t ldvs );

int64_t gees(
    lapack::Job jobvs, lapack::Sort sort, lapack_d_select2 select, int64_t n,
    double* A, int64_t lda,
    int64_t* sdim,
    double* WR,
    double* WI,
    double* VS, int64_t ldvs );

int64_t gees(
    lapack::Job jobvs, lapack::Sort sort, lapack_c_select1 select, int64_t n,
    std::complex<float>* A, int64_t lda,
    int64_t* sdim,
    std::complex<float>* W,
    std::complex<float>* VS, int64_t ldvs );

int64_t gees(
    lapack::Job jobvs, lapack::Sort sort, lapack_z_select1 select, int64_t n,
    std::complex<double>* A, int64_t lda,
    int64_t* sdim,
    std::complex<double>* W,
    std::complex<double>* VS, int64_t ldvs );

// -----------------------------------------------------------------------------
int64_t geesx(
    lapack::Job jobvs, lapack::Sort sort, lapack_s_select2 select, lapack::Sense sense, int64_t n,
    float* A, int64_t lda,
    int64_t* sdim,
    float* WR,
    float* WI,
    float* VS, int64_t ldvs,
    float* rconde,
    float* rcondv );

int64_t geesx(
    lapack::Job jobvs, lapack::Sort sort, lapack_d_select2 select, lapack::Sense sense, int64_t n,
    double* A, int64_t lda,
    int64_t* sdim,
    double* WR,
    double* WI,
    double* VS, int64_t ldvs,
    double* rconde,
    double* rcondv );

int64_t geesx(
    lapack::Job jobvs, lapack::Sort sort, lapack_c_select1 select, lapack::Sense sense, int64_t n,
    std::complex<float>* A, int64_t lda,
    int64_t* sdim,
    std::complex<float>* W,
    std::complex<float>* VS, int64_t ldvs,
    float* rconde,
    float* rcondv );

int64_t geesx(
    lapack::Job jobvs, lapack::Sort sort, lapack_z_select1 select, lapack::Sense sense, int64_t n,
    std::complex<double>* A, int64_t lda,
    int64_t* sdim,
    std::complex<double>* W,
    std::complex<double>* VS, int64_t ldvs,
    double* rconde,
    double* rcondv );

// -----------------------------------------------------------------------------
int64_t geev(
    lapack::Job jobvl, lapack::Job jobvr, int64_t n,
    float* A, int64_t lda,
    float* WR,
    float* WI,
    float* VL, int64_t ldvl,
    float* VR, int64_t ldvr );

int64_t geev(
    lapack::Job jobvl, lapack::Job jobvr, int64_t n,
    double* A, int64_t lda,
    double* WR,
    double* WI,
    double* VL, int64_t ldvl,
    double* VR, int64_t ldvr );

int64_t geev(
    lapack::Job jobvl, lapack::Job jobvr, int64_t n,
    std::complex<float>* A, int64_t lda,
    std::complex<float>* W,
    std::complex<float>* VL, int64_t ldvl,
    std::complex<float>* VR, int64_t ldvr );

int64_t geev(
    lapack::Job jobvl, lapack::Job jobvr, int64_t n,
    std::complex<double>* A, int64_t lda,
    std::complex<double>* W,
    std::complex<double>* VL, int64_t ldvl,
    std::complex<double>* VR, int64_t ldvr );

// -----------------------------------------------------------------------------
int64_t geevx(
    lapack::Balance balance, lapack::Job jobvl, lapack::Job jobvr, lapack::Sense sense, int64_t n,
    float* A, int64_t lda,
    float* WR,
    float* WI,
    float* VL, int64_t ldvl,
    float* VR, int64_t ldvr,
    int64_t* ilo,
    int64_t* ihi,
    float* scale,
    float* abnrm,
    float* rconde,
    float* rcondv );

int64_t geevx(
    lapack::Balance balance, lapack::Job jobvl, lapack::Job jobvr, lapack::Sense sense, int64_t n,
    double* A, int64_t lda,
    double* WR,
    double* WI,
    double* VL, int64_t ldvl,
    double* VR, int64_t ldvr,
    int64_t* ilo,
    int64_t* ihi,
    double* scale,
    double* abnrm,
    double* rconde,
    double* rcondv );

int64_t geevx(
    lapack::Balance balance, lapack::Job jobvl, lapack::Job jobvr, lapack::Sense sense, int64_t n,
    std::complex<float>* A, int64_t lda,
    std::complex<float>* W,
    std::complex<float>* VL, int64_t ldvl,
    std::complex<float>* VR, int64_t ldvr,
    int64_t* ilo,
    int64_t* ihi,
    float* scale,
    float* abnrm,
    float* rconde,
    float* rcondv );

int64_t geevx(
    lapack::Balance balance, lapack::Job jobvl, lapack::Job jobvr, lapack::Sense sense, int64_t n,
    std::complex<double>* A, int64_t lda,
    std::complex<double>* W,
    std::complex<double>* VL, int64_t ldvl,
    std::complex<double>* VR, int64_t ldvr,
    int64_t* ilo,
    int64_t* ihi,
    double* scale,
    double* abnrm,
    double* rconde,
    double* rcondv );

// -----------------------------------------------------------------------------
int64_t gehrd(
    int64_t n, int64_t ilo, int64_t ihi,
    float* A, int64_t lda,
    float* tau );

int64_t gehrd(
    int64_t n, int64_t ilo, int64_t ihi,
    double* A, int64_t lda,
    double* tau );

int64_t gehrd(
    int64_t n, int64_t ilo, int64_t ihi,
    std::complex<float>* A, int64_t lda,
    std::complex<float>* tau );

int64_t gehrd(
    int64_t n, int64_t ilo, int64_t ihi,
    std::complex<double>* A, int64_t lda,
    std::complex<double>* tau );

// -----------------------------------------------------------------------------
int64_t gelq(
    int64_t m, int64_t n,
    float* A, int64_t lda,
    float* T, int64_t tsize );

int64_t gelq(
    int64_t m, int64_t n,
    double* A, int64_t lda,
    double* T, int64_t tsize );

int64_t gelq(
    int64_t m, int64_t n,
    std::complex<float>* A, int64_t lda,
    std::complex<float>* T, int64_t tsize );

int64_t gelq(
    int64_t m, int64_t n,
    std::complex<double>* A, int64_t lda,
    std::complex<double>* T, int64_t tsize );

// -----------------------------------------------------------------------------
int64_t gelq2(
    int64_t m, int64_t n,
    float* A, int64_t lda,
    float* tau );

int64_t gelq2(
    int64_t m, int64_t n,
    double* A, int64_t lda,
    double* tau );

int64_t gelq2(
    int64_t m, int64_t n,
    std::complex<float>* A, int64_t lda,
    std::complex<float>* tau );

int64_t gelq2(
    int64_t m, int64_t n,
    std::complex<double>* A, int64_t lda,
    std::complex<double>* tau );

// -----------------------------------------------------------------------------
int64_t gelqf(
    int64_t m, int64_t n,
    float* A, int64_t lda,
    float* tau );

int64_t gelqf(
    int64_t m, int64_t n,
    double* A, int64_t lda,
    double* tau );

int64_t gelqf(
    int64_t m, int64_t n,
    std::complex<float>* A, int64_t lda,
    std::complex<float>* tau );

int64_t gelqf(
    int64_t m, int64_t n,
    std::complex<double>* A, int64_t lda,
    std::complex<double>* tau );

// -----------------------------------------------------------------------------
int64_t gels(
    lapack::Op trans, int64_t m, int64_t n, int64_t nrhs,
    float* A, int64_t lda,
    float* B, int64_t ldb );

int64_t gels(
    lapack::Op trans, int64_t m, int64_t n, int64_t nrhs,
    double* A, int64_t lda,
    double* B, int64_t ldb );

int64_t gels(
    lapack::Op trans, int64_t m, int64_t n, int64_t nrhs,
    std::complex<float>* A, int64_t lda,
    std::complex<float>* B, int64_t ldb );

int64_t gels(
    lapack::Op trans, int64_t m, int64_t n, int64_t nrhs,
    std::complex<double>* A, int64_t lda,
    std::complex<double>* B, int64_t ldb );

// -----------------------------------------------------------------------------
int64_t gelsd(
    int64_t m, int64_t n, int64_t nrhs,
    float* A, int64_t lda,
    float* B, int64_t ldb,
    float* S, float rcond,
    int64_t* rank );

int64_t gelsd(
    int64_t m, int64_t n, int64_t nrhs,
    double* A, int64_t lda,
    double* B, int64_t ldb,
    double* S, double rcond,
    int64_t* rank );

int64_t gelsd(
    int64_t m, int64_t n, int64_t nrhs,
    std::complex<float>* A, int64_t lda,
    std::complex<float>* B, int64_t ldb,
    float* S, float rcond,
    int64_t* rank );

int64_t gelsd(
    int64_t m, int64_t n, int64_t nrhs,
    std::complex<double>* A, int64_t lda,
    std::complex<double>* B, int64_t ldb,
    double* S, double rcond,
    int64_t* rank );

// -----------------------------------------------------------------------------
int64_t gelss(
    int64_t m, int64_t n, int64_t nrhs,
    float* A, int64_t lda,
    float* B, int64_t ldb,
    float* S, float rcond,
    int64_t* rank );

int64_t gelss(
    int64_t m, int64_t n, int64_t nrhs,
    double* A, int64_t lda,
    double* B, int64_t ldb,
    double* S, double rcond,
    int64_t* rank );

int64_t gelss(
    int64_t m, int64_t n, int64_t nrhs,
    std::complex<float>* A, int64_t lda,
    std::complex<float>* B, int64_t ldb,
    float* S, float rcond,
    int64_t* rank );

int64_t gelss(
    int64_t m, int64_t n, int64_t nrhs,
    std::complex<double>* A, int64_t lda,
    std::complex<double>* B, int64_t ldb,
    double* S, double rcond,
    int64_t* rank );

// -----------------------------------------------------------------------------
int64_t gelsy(
    int64_t m, int64_t n, int64_t nrhs,
    float* A, int64_t lda,
    float* B, int64_t ldb,
    int64_t* jpvt, float rcond,
    int64_t* rank );

int64_t gelsy(
    int64_t m, int64_t n, int64_t nrhs,
    double* A, int64_t lda,
    double* B, int64_t ldb,
    int64_t* jpvt, double rcond,
    int64_t* rank );

int64_t gelsy(
    int64_t m, int64_t n, int64_t nrhs,
    std::complex<float>* A, int64_t lda,
    std::complex<float>* B, int64_t ldb,
    int64_t* jpvt, float rcond,
    int64_t* rank );

int64_t gelsy(
    int64_t m, int64_t n, int64_t nrhs,
    std::complex<double>* A, int64_t lda,
    std::complex<double>* B, int64_t ldb,
    int64_t* jpvt, double rcond,
    int64_t* rank );

// -----------------------------------------------------------------------------
int64_t gemlq(
    lapack::Side side, lapack::Op trans, int64_t m, int64_t n, int64_t k,
    float const* A, int64_t lda,
    float const* T, int64_t tsize,
    float* C, int64_t ldc );

int64_t gemlq(
    lapack::Side side, lapack::Op trans, int64_t m, int64_t n, int64_t k,
    double const* A, int64_t lda,
    double const* T, int64_t tsize,
    double* C, int64_t ldc );

int64_t gemlq(
    lapack::Side side, lapack::Op trans, int64_t m, int64_t n, int64_t k,
    std::complex<float> const* A, int64_t lda,
    std::complex<float> const* T, int64_t tsize,
    std::complex<float>* C, int64_t ldc );

int64_t gemlq(
    lapack::Side side, lapack::Op trans, int64_t m, int64_t n, int64_t k,
    std::complex<double> const* A, int64_t lda,
    std::complex<double> const* T, int64_t tsize,
    std::complex<double>* C, int64_t ldc );

// -----------------------------------------------------------------------------
int64_t gemqr(
    lapack::Side side, lapack::Op trans, int64_t m, int64_t n, int64_t k,
    float const* A, int64_t lda,
    float const* T, int64_t tsize,
    float* C, int64_t ldc );

int64_t gemqr(
    lapack::Side side, lapack::Op trans, int64_t m, int64_t n, int64_t k,
    double const* A, int64_t lda,
    double const* T, int64_t tsize,
    double* C, int64_t ldc );

int64_t gemqr(
    lapack::Side side, lapack::Op trans, int64_t m, int64_t n, int64_t k,
    std::complex<float> const* A, int64_t lda,
    std::complex<float> const* T, int64_t tsize,
    std::complex<float>* C, int64_t ldc );

int64_t gemqr(
    lapack::Side side, lapack::Op trans, int64_t m, int64_t n, int64_t k,
    std::complex<double> const* A, int64_t lda,
    std::complex<double> const* T, int64_t tsize,
    std::complex<double>* C, int64_t ldc );

// -----------------------------------------------------------------------------
int64_t geql2(
    int64_t m, int64_t n,
    float* A, int64_t lda,
    float* tau );

int64_t geql2(
    int64_t m, int64_t n,
    double* A, int64_t lda,
    double* tau );

int64_t geql2(
    int64_t m, int64_t n,
    std::complex<float>* A, int64_t lda,
    std::complex<float>* tau );

int64_t geql2(
    int64_t m, int64_t n,
    std::complex<double>* A, int64_t lda,
    std::complex<double>* tau );

// -----------------------------------------------------------------------------
int64_t geqlf(
    int64_t m, int64_t n,
    float* A, int64_t lda,
    float* tau );

int64_t geqlf(
    int64_t m, int64_t n,
    double* A, int64_t lda,
    double* tau );

int64_t geqlf(
    int64_t m, int64_t n,
    std::complex<float>* A, int64_t lda,
    std::complex<float>* tau );

int64_t geqlf(
    int64_t m, int64_t n,
    std::complex<double>* A, int64_t lda,
    std::complex<double>* tau );

// -----------------------------------------------------------------------------
int64_t geqp3(
    int64_t m, int64_t n,
    float* A, int64_t lda,
    int64_t* jpvt,
    float* tau );

int64_t geqp3(
    int64_t m, int64_t n,
    double* A, int64_t lda,
    int64_t* jpvt,
    double* tau );

int64_t geqp3(
    int64_t m, int64_t n,
    std::complex<float>* A, int64_t lda,
    int64_t* jpvt,
    std::complex<float>* tau );

int64_t geqp3(
    int64_t m, int64_t n,
    std::complex<double>* A, int64_t lda,
    int64_t* jpvt,
    std::complex<double>* tau );

// -----------------------------------------------------------------------------
int64_t geqr(
    int64_t m, int64_t n,
    float* A, int64_t lda,
    float* T, int64_t tsize );

int64_t geqr(
    int64_t m, int64_t n,
    double* A, int64_t lda,
    double* T, int64_t tsize );

int64_t geqr(
    int64_t m, int64_t n,
    std::complex<float>* A, int64_t lda,
    std::complex<float>* T, int64_t tsize );

int64_t geqr(
    int64_t m, int64_t n,
    std::complex<double>* A, int64_t lda,
    std::complex<double>* T, int64_t tsize );

// -----------------------------------------------------------------------------
int64_t geqr2(
    int64_t m, int64_t n,
    float* A, int64_t lda,
    float* tau );

int64_t geqr2(
    int64_t m, int64_t n,
    double* A, int64_t lda,
    double* tau );

int64_t geqr2(
    int64_t m, int64_t n,
    std::complex<float>* A, int64_t lda,
    std::complex<float>* tau );

int64_t geqr2(
    int64_t m, int64_t n,
    std::complex<double>* A, int64_t lda,
    std::complex<double>* tau );

// -----------------------------------------------------------------------------
int64_t geqrf(
    int64_t m, int64_t n,
    float* A, int64_t lda,
    float* tau );

int64_t geqrf(
    int64_t m, int64_t n,
    double* A, int64_t lda,
    double* tau );

int64_t geqrf(
    int64_t m, int64_t n,
    std::complex<float>* A, int64_t lda,
    std::complex<float>* tau );

int64_t geqrf(
    int64_t m, int64_t n,
    std::complex<double>* A, int64_t lda,
    std::complex<double>* tau );

// -----------------------------------------------------------------------------
int64_t geqrfp(
    int64_t m, int64_t n,
    float* A, int64_t lda,
    float* tau );

int64_t geqrfp(
    int64_t m, int64_t n,
    double* A, int64_t lda,
    double* tau );

int64_t geqrfp(
    int64_t m, int64_t n,
    std::complex<float>* A, int64_t lda,
    std::complex<float>* tau );

int64_t geqrfp(
    int64_t m, int64_t n,
    std::complex<double>* A, int64_t lda,
    std::complex<double>* tau );

// -----------------------------------------------------------------------------
int64_t geqrt(
    int64_t m, int64_t n, int64_t nb,
    float* A, int64_t lda,
    float* T, int64_t ldt );

int64_t geqrt(
    int64_t m, int64_t n, int64_t nb,
    double* A, int64_t lda,
    double* T, int64_t ldt );

int64_t geqrt(
    int64_t m, int64_t n, int64_t nb,
    std::complex<float>* A, int64_t lda,
    std::complex<float>* T, int64_t ldt );

int64_t geqrt(
    int64_t m, int64_t n, int64_t nb,
    std::complex<double>* A, int64_t lda,
    std::complex<double>* T, int64_t ldt );

// -----------------------------------------------------------------------------
int64_t geqrt2(
    int64_t m, int64_t n,
    float* A, int64_t lda,
    float* T, int64_t ldt );

int64_t geqrt2(
    int64_t m, int64_t n,
    double* A, int64_t lda,
    double* T, int64_t ldt );

int64_t geqrt2(
    int64_t m, int64_t n,
    std::complex<float>* A, int64_t lda,
    std::complex<float>* T, int64_t ldt );

int64_t geqrt2(
    int64_t m, int64_t n,
    std::complex<double>* A, int64_t lda,
    std::complex<double>* T, int64_t ldt );

// -----------------------------------------------------------------------------
int64_t geqrt3(
    int64_t m, int64_t n,
    float* A, int64_t lda,
    float* T, int64_t ldt );

int64_t geqrt3(
    int64_t m, int64_t n,
    double* A, int64_t lda,
    double* T, int64_t ldt );

int64_t geqrt3(
    int64_t m, int64_t n,
    std::complex<float>* A, int64_t lda,
    std::complex<float>* T, int64_t ldt );

int64_t geqrt3(
    int64_t m, int64_t n,
    std::complex<double>* A, int64_t lda,
    std::complex<double>* T, int64_t ldt );

// -----------------------------------------------------------------------------
int64_t gerfs(
    lapack::Op trans, int64_t n, int64_t nrhs,
    float const* A, int64_t lda,
    float const* AF, int64_t ldaf,
    int64_t const* ipiv,
    float const* B, int64_t ldb,
    float* X, int64_t ldx,
    float* ferr,
    float* berr );

int64_t gerfs(
    lapack::Op trans, int64_t n, int64_t nrhs,
    double const* A, int64_t lda,
    double const* AF, int64_t ldaf,
    int64_t const* ipiv,
    double const* B, int64_t ldb,
    double* X, int64_t ldx,
    double* ferr,
    double* berr );

int64_t gerfs(
    lapack::Op trans, int64_t n, int64_t nrhs,
    std::complex<float> const* A, int64_t lda,
    std::complex<float> const* AF, int64_t ldaf,
    int64_t const* ipiv,
    std::complex<float> const* B, int64_t ldb,
    std::complex<float>* X, int64_t ldx,
    float* ferr,
    float* berr );

int64_t gerfs(
    lapack::Op trans, int64_t n, int64_t nrhs,
    std::complex<double> const* A, int64_t lda,
    std::complex<double> const* AF, int64_t ldaf,
    int64_t const* ipiv,
    std::complex<double> const* B, int64_t ldb,
    std::complex<double>* X, int64_t ldx,
    double* ferr,
    double* berr );

// -----------------------------------------------------------------------------
int64_t gerfsx(
    lapack::Op trans, lapack::Equed equed, int64_t n, int64_t nrhs,
    float const* A, int64_t lda,
    float const* AF, int64_t ldaf,
    int64_t const* ipiv,
    float const* R,
    float const* C,
    float const* B, int64_t ldb,
    float* X, int64_t ldx,
    float* rcond,
    float* berr, int64_t n_err_bnds,
    float* err_bnds_norm,
    float* err_bnds_comp, int64_t nparams,
    float* params );

int64_t gerfsx(
    lapack::Op trans, lapack::Equed equed, int64_t n, int64_t nrhs,
    double const* A, int64_t lda,
    double const* AF, int64_t ldaf,
    int64_t const* ipiv,
    double const* R,
    double const* C,
    double const* B, int64_t ldb,
    double* X, int64_t ldx,
    double* rcond,
    double* berr, int64_t n_err_bnds,
    double* err_bnds_norm,
    double* err_bnds_comp, int64_t nparams,
    double* params );

int64_t gerfsx(
    lapack::Op trans, lapack::Equed equed, int64_t n, int64_t nrhs,
    std::complex<float> const* A, int64_t lda,
    std::complex<float> const* AF, int64_t ldaf,
    int64_t const* ipiv,
    float const* R,
    float const* C,
    std::complex<float> const* B, int64_t ldb,
    std::complex<float>* X, int64_t ldx,
    float* rcond,
    float* berr, int64_t n_err_bnds,
    float* err_bnds_norm,
    float* err_bnds_comp, int64_t nparams,
    float* params );

int64_t gerfsx(
    lapack::Op trans, lapack::Equed equed, int64_t n, int64_t nrhs,
    std::complex<double> const* A, int64_t lda,
    std::complex<double> const* AF, int64_t ldaf,
    int64_t const* ipiv,
    double const* R,
    double const* C,
    std::complex<double> const* B, int64_t ldb,
    std::complex<double>* X, int64_t ldx,
    double* rcond,
    double* berr, int64_t n_err_bnds,
    double* err_bnds_norm,
    double* err_bnds_comp, int64_t nparams,
    double* params );

// -----------------------------------------------------------------------------
int64_t gerq2(
    int64_t m, int64_t n,
    float* A, int64_t lda,
    float* tau );

int64_t gerq2(
    int64_t m, int64_t n,
    double* A, int64_t lda,
    double* tau );

int64_t gerq2(
    int64_t m, int64_t n,
    std::complex<float>* A, int64_t lda,
    std::complex<float>* tau );

int64_t gerq2(
    int64_t m, int64_t n,
    std::complex<double>* A, int64_t lda,
    std::complex<double>* tau );

// -----------------------------------------------------------------------------
int64_t gerqf(
    int64_t m, int64_t n,
    float* A, int64_t lda,
    float* tau );

int64_t gerqf(
    int64_t m, int64_t n,
    double* A, int64_t lda,
    double* tau );

int64_t gerqf(
    int64_t m, int64_t n,
    std::complex<float>* A, int64_t lda,
    std::complex<float>* tau );

int64_t gerqf(
    int64_t m, int64_t n,
    std::complex<double>* A, int64_t lda,
    std::complex<double>* tau );

// -----------------------------------------------------------------------------
int64_t gesdd(
    lapack::Job jobz, int64_t m, int64_t n,
    float* A, int64_t lda,
    float* S,
    float* U, int64_t ldu,
    float* VT, int64_t ldvt );

int64_t gesdd(
    lapack::Job jobz, int64_t m, int64_t n,
    double* A, int64_t lda,
    double* S,
    double* U, int64_t ldu,
    double* VT, int64_t ldvt );

int64_t gesdd(
    lapack::Job jobz, int64_t m, int64_t n,
    std::complex<float>* A, int64_t lda,
    float* S,
    std::complex<float>* U, int64_t ldu,
    std::complex<float>* VT, int64_t ldvt );

int64_t gesdd(
    lapack::Job jobz, int64_t m, int64_t n,
    std::complex<double>* A, int64_t lda,
    double* S,
    std::complex<double>* U, int64_t ldu,
    std::complex<double>* VT, int64_t ldvt );

// -----------------------------------------------------------------------------
int64_t gesv(
    int64_t n, int64_t nrhs,
    float* A, int64_t lda,
    int64_t* ipiv,
    float* B, int64_t ldb );

int64_t gesv(
    int64_t n, int64_t nrhs,
    double* A, int64_t lda,
    int64_t* ipiv,
    double* B, int64_t ldb );

int64_t gesv(
    int64_t n, int64_t nrhs,
    std::complex<float>* A, int64_t lda,
    int64_t* ipiv,
    std::complex<float>* B, int64_t ldb );

int64_t gesv(
    int64_t n, int64_t nrhs,
    std::complex<double>* A, int64_t lda,
    int64_t* ipiv,
    std::complex<double>* B, int64_t ldb );

int64_t gesv(
    int64_t n, int64_t nrhs,
    double* A, int64_t lda,
    int64_t* ipiv,
    double const* B, int64_t ldb,
    double* X, int64_t ldx,
    int64_t* iter );

int64_t gesv(
    int64_t n, int64_t nrhs,
    std::complex<double>* A, int64_t lda,
    int64_t* ipiv,
    std::complex<double> const* B, int64_t ldb,
    std::complex<double>* X, int64_t ldx,
    int64_t* iter );

// -----------------------------------------------------------------------------
int64_t gesvd(
    lapack::Job jobu, lapack::Job jobvt, int64_t m, int64_t n,
    float* A, int64_t lda,
    float* S,
    float* U, int64_t ldu,
    float* VT, int64_t ldvt );

int64_t gesvd(
    lapack::Job jobu, lapack::Job jobvt, int64_t m, int64_t n,
    double* A, int64_t lda,
    double* S,
    double* U, int64_t ldu,
    double* VT, int64_t ldvt );

int64_t gesvd(
    lapack::Job jobu, lapack::Job jobvt, int64_t m, int64_t n,
    std::complex<float>* A, int64_t lda,
    float* S,
    std::complex<float>* U, int64_t ldu,
    std::complex<float>* VT, int64_t ldvt );

int64_t gesvd(
    lapack::Job jobu, lapack::Job jobvt, int64_t m, int64_t n,
    std::complex<double>* A, int64_t lda,
    double* S,
    std::complex<double>* U, int64_t ldu,
    std::complex<double>* VT, int64_t ldvt );

// -----------------------------------------------------------------------------
int64_t gesvdx(
    lapack::Job jobu, lapack::Job jobvt, lapack::Range range, int64_t m, int64_t n,
    float* A, int64_t lda, float vl, float vu, int64_t il, int64_t iu,
    int64_t* ns,
    float* S,
    float* U, int64_t ldu,
    float* VT, int64_t ldvt );

int64_t gesvdx(
    lapack::Job jobu, lapack::Job jobvt, lapack::Range range, int64_t m, int64_t n,
    double* A, int64_t lda, double vl, double vu, int64_t il, int64_t iu,
    int64_t* ns,
    double* S,
    double* U, int64_t ldu,
    double* VT, int64_t ldvt );

int64_t gesvdx(
    lapack::Job jobu, lapack::Job jobvt, lapack::Range range, int64_t m, int64_t n,
    std::complex<float>* A, int64_t lda, float vl, float vu, int64_t il, int64_t iu,
    int64_t* ns,
    float* S,
    std::complex<float>* U, int64_t ldu,
    std::complex<float>* VT, int64_t ldvt );

int64_t gesvdx(
    lapack::Job jobu, lapack::Job jobvt, lapack::Range range, int64_t m, int64_t n,
    std::complex<double>* A, int64_t lda, double vl, double vu, int64_t il, int64_t iu,
    int64_t* ns,
    double* S,
    std::complex<double>* U, int64_t ldu,
    std::complex<double>* VT, int64_t ldvt );

// -----------------------------------------------------------------------------
int64_t getf2(
    int64_t m, int64_t n,
    float* A, int64_t lda,
    int64_t* ipiv );

int64_t getf2(
    int64_t m, int64_t n,
    double* A, int64_t lda,
    int64_t* ipiv );

int64_t getf2(
    int64_t m, int64_t n,
    std::complex<float>* A, int64_t lda,
    int64_t* ipiv );

int64_t getf2(
    int64_t m, int64_t n,
    std::complex<double>* A, int64_t lda,
    int64_t* ipiv );

// -----------------------------------------------------------------------------
int64_t getrf(
    int64_t m, int64_t n,
    float* A, int64_t lda,
    int64_t* ipiv );

int64_t getrf(
    int64_t m, int64_t n,
    double* A, int64_t lda,
    int64_t* ipiv );

int64_t getrf(
    int64_t m, int64_t n,
    std::complex<float>* A, int64_t lda,
    int64_t* ipiv );

int64_t getrf(
    int64_t m, int64_t n,
    std::complex<double>* A, int64_t lda,
    int64_t* ipiv );

// -----------------------------------------------------------------------------
int64_t getrf2(
    int64_t m, int64_t n,
    float* A, int64_t lda,
    int64_t* ipiv );

int64_t getrf2(
    int64_t m, int64_t n,
    double* A, int64_t lda,
    int64_t* ipiv );

int64_t getrf2(
    int64_t m, int64_t n,
    std::complex<float>* A, int64_t lda,
    int64_t* ipiv );

int64_t getrf2(
    int64_t m, int64_t n,
    std::complex<double>* A, int64_t lda,
    int64_t* ipiv );

// -----------------------------------------------------------------------------
int64_t getri(
    int64_t n,
    float* A, int64_t lda,
    int64_t const* ipiv );

int64_t getri(
    int64_t n,
    double* A, int64_t lda,
    int64_t const* ipiv );

int64_t getri(
    int64_t n,
    std::complex<float>* A, int64_t lda,
    int64_t const* ipiv );

int64_t getri(
    int64_t n,
    std::complex<double>* A, int64_t lda,
    int64_t const* ipiv );

// -----------------------------------------------------------------------------
int64_t getrs(
    lapack::Op trans, int64_t n, int64_t nrhs,
    float const* A, int64_t lda,
    int64_t const* ipiv,
    float* B, int64_t ldb );

int64_t getrs(
    lapack::Op trans, int64_t n, int64_t nrhs,
    double const* A, int64_t lda,
    int64_t const* ipiv,
    double* B, int64_t ldb );

int64_t getrs(
    lapack::Op trans, int64_t n, int64_t nrhs,
    std::complex<float> const* A, int64_t lda,
    int64_t const* ipiv,
    std::complex<float>* B, int64_t ldb );

int64_t getrs(
    lapack::Op trans, int64_t n, int64_t nrhs,
    std::complex<double> const* A, int64_t lda,
    int64_t const* ipiv,
    std::complex<double>* B, int64_t ldb );

// -----------------------------------------------------------------------------
int64_t getsls(
    lapack::Op trans, int64_t m, int64_t n, int64_t nrhs,
    float* A, int64_t lda,
    float* B, int64_t ldb );

int64_t getsls(
    lapack::Op trans, int64_t m, int64_t n, int64_t nrhs,
    double* A, int64_t lda,
    double* B, int64_t ldb );

int64_t getsls(
    lapack::Op trans, int64_t m, int64_t n, int64_t nrhs,
    std::complex<float>* A, int64_t lda,
    std::complex<float>* B, int64_t ldb );

int64_t getsls(
    lapack::Op trans, int64_t m, int64_t n, int64_t nrhs,
    std::complex<double>* A, int64_t lda,
    std::complex<double>* B, int64_t ldb );

// -----------------------------------------------------------------------------
int64_t ggbak(
    lapack::Job job, lapack::Side side, int64_t n, int64_t ilo, int64_t ihi,
    float const* lscale,
    float const* rscale, int64_t m,
    float* V, int64_t ldv );

int64_t ggbak(
    lapack::Job job, lapack::Side side, int64_t n, int64_t ilo, int64_t ihi,
    double const* lscale,
    double const* rscale, int64_t m,
    double* V, int64_t ldv );

int64_t ggbak(
    lapack::Job job, lapack::Side side, int64_t n, int64_t ilo, int64_t ihi,
    float const* lscale,
    float const* rscale, int64_t m,
    std::complex<float>* V, int64_t ldv );

int64_t ggbak(
    lapack::Job job, lapack::Side side, int64_t n, int64_t ilo, int64_t ihi,
    double const* lscale,
    double const* rscale, int64_t m,
    std::complex<double>* V, int64_t ldv );

// -----------------------------------------------------------------------------
int64_t ggbal(
    lapack::Balance balance, int64_t n,
    float* A, int64_t lda,
    float* B, int64_t ldb,
    int64_t* ilo,
    int64_t* ihi,
    float* lscale,
    float* rscale );

int64_t ggbal(
    lapack::Balance balance, int64_t n,
    double* A, int64_t lda,
    double* B, int64_t ldb,
    int64_t* ilo,
    int64_t* ihi,
    double* lscale,
    double* rscale );

int64_t ggbal(
    lapack::Balance balance, int64_t n,
    std::complex<float>* A, int64_t lda,
    std::complex<float>* B, int64_t ldb,
    int64_t* ilo,
    int64_t* ihi,
    float* lscale,
    float* rscale );

int64_t ggbal(
    lapack::Balance balance, int64_t n,
    std::complex<double>* A, int64_t lda,
    std::complex<double>* B, int64_t ldb,
    int64_t* ilo,
    int64_t* ihi,
    double* lscale,
    double* rscale );

// -----------------------------------------------------------------------------
int64_t gges(
    lapack::Job jobvsl, lapack::Job jobvsr, lapack::Sort sort, lapack_s_select3 select, int64_t n,
    float* A, int64_t lda,
    float* B, int64_t ldb,
    int64_t* sdim,
    float* alphar,
    float* alphai,
    float* beta,
    float* VSL, int64_t ldvsl,
    float* VSR, int64_t ldvsr );

int64_t gges(
    lapack::Job jobvsl, lapack::Job jobvsr, lapack::Sort sort, lapack_d_select3 select, int64_t n,
    double* A, int64_t lda,
    double* B, int64_t ldb,
    int64_t* sdim,
    double* alphar,
    double* alphai,
    double* beta,
    double* VSL, int64_t ldvsl,
    double* VSR, int64_t ldvsr );

int64_t gges(
    lapack::Job jobvsl, lapack::Job jobvsr, lapack::Sort sort, lapack_c_select2 select, int64_t n,
    std::complex<float>* A, int64_t lda,
    std::complex<float>* B, int64_t ldb,
    int64_t* sdim,
    std::complex<float>* alpha,
    std::complex<float>* beta,
    std::complex<float>* VSL, int64_t ldvsl,
    std::complex<float>* VSR, int64_t ldvsr );

int64_t gges(
    lapack::Job jobvsl, lapack::Job jobvsr, lapack::Sort sort, lapack_z_select2 select, int64_t n,
    std::complex<double>* A, int64_t lda,
    std::complex<double>* B, int64_t ldb,
    int64_t* sdim,
    std::complex<double>* alpha,
    std::complex<double>* beta,
    std::complex<double>* VSL, int64_t ldvsl,
    std::complex<double>* VSR, int64_t ldvsr );

// -----------------------------------------------------------------------------
int64_t gges3(
    lapack::Job jobvsl, lapack::Job jobvsr, lapack::Sort sort, lapack_s_select3 select, int64_t n,
    float* A, int64_t lda,
    float* B, int64_t ldb,
    int64_t* sdim,
    float* alphar,
    float* alphai,
    float* beta,
    float* VSL, int64_t ldvsl,
    float* VSR, int64_t ldvsr );

int64_t gges3(
    lapack::Job jobvsl, lapack::Job jobvsr, lapack::Sort sort, lapack_d_select3 select, int64_t n,
    double* A, int64_t lda,
    double* B, int64_t ldb,
    int64_t* sdim,
    double* alphar,
    double* alphai,
    double* beta,
    double* VSL, int64_t ldvsl,
    double* VSR, int64_t ldvsr );

int64_t gges3(
    lapack::Job jobvsl, lapack::Job jobvsr, lapack::Sort sort, lapack_c_select2 select, int64_t n,
    std::complex<float>* A, int64_t lda,
    std::complex<float>* B, int64_t ldb,
    int64_t* sdim,
    std::complex<float>* alpha,
    std::complex<float>* beta,
    std::complex<float>* VSL, int64_t ldvsl,
    std::complex<float>* VSR, int64_t ldvsr );

int64_t gges3(
    lapack::Job jobvsl, lapack::Job jobvsr, lapack::Sort sort, lapack_z_select2 select, int64_t n,
    std::complex<double>* A, int64_t lda,
    std::complex<double>* B, int64_t ldb,
    int64_t* sdim,
    std::complex<double>* alpha,
    std::complex<double>* beta,
    std::complex<double>* VSL, int64_t ldvsl,
    std::complex<double>* VSR, int64_t ldvsr );

// -----------------------------------------------------------------------------
int64_t ggesx(
    lapack::Job jobvsl, lapack::Job jobvsr, lapack::Sort sort, lapack_s_select3 select, lapack::Sense sense, int64_t n,
    float* A, int64_t lda,
    float* B, int64_t ldb,
    int64_t* sdim,
    float* alphar,
    float* alphai,
    float* beta,
    float* VSL, int64_t ldvsl,
    float* VSR, int64_t ldvsr,
    float* rconde,
    float* rcondv );

int64_t ggesx(
    lapack::Job jobvsl, lapack::Job jobvsr, lapack::Sort sort, lapack_d_select3 select, lapack::Sense sense, int64_t n,
    double* A, int64_t lda,
    double* B, int64_t ldb,
    int64_t* sdim,
    double* alphar,
    double* alphai,
    double* beta,
    double* VSL, int64_t ldvsl,
    double* VSR, int64_t ldvsr,
    double* rconde,
    double* rcondv );

int64_t ggesx(
    lapack::Job jobvsl, lapack::Job jobvsr, lapack::Sort sort, lapack_c_select2 select, lapack::Sense sense, int64_t n,
    std::complex<float>* A, int64_t lda,
    std::complex<float>* B, int64_t ldb,
    int64_t* sdim,
    std::complex<float>* alpha,
    std::complex<float>* beta,
    std::complex<float>* VSL, int64_t ldvsl,
    std::complex<float>* VSR, int64_t ldvsr,
    float* rconde,
    float* rcondv );

int64_t ggesx(
    lapack::Job jobvsl, lapack::Job jobvsr, lapack::Sort sort, lapack_z_select2 select, lapack::Sense sense, int64_t n,
    std::complex<double>* A, int64_t lda,
    std::complex<double>* B, int64_t ldb,
    int64_t* sdim,
    std::complex<double>* alpha,
    std::complex<double>* beta,
    std::complex<double>* VSL, int64_t ldvsl,
    std::complex<double>* VSR, int64_t ldvsr,
    double* rconde,
    double* rcondv );

// -----------------------------------------------------------------------------
int64_t ggev(
    lapack::Job jobvl, lapack::Job jobvr, int64_t n,
    float* A, int64_t lda,
    float* B, int64_t ldb,
    float* alphar,
    float* alphai,
    float* beta,
    float* VL, int64_t ldvl,
    float* VR, int64_t ldvr );

int64_t ggev(
    lapack::Job jobvl, lapack::Job jobvr, int64_t n,
    double* A, int64_t lda,
    double* B, int64_t ldb,
    double* alphar,
    double* alphai,
    double* beta,
    double* VL, int64_t ldvl,
    double* VR, int64_t ldvr );

int64_t ggev(
    lapack::Job jobvl, lapack::Job jobvr, int64_t n,
    std::complex<float>* A, int64_t lda,
    std::complex<float>* B, int64_t ldb,
    std::complex<float>* alpha,
    std::complex<float>* beta,
    std::complex<float>* VL, int64_t ldvl,
    std::complex<float>* VR, int64_t ldvr );

int64_t ggev(
    lapack::Job jobvl, lapack::Job jobvr, int64_t n,
    std::complex<double>* A, int64_t lda,
    std::complex<double>* B, int64_t ldb,
    std::complex<double>* alpha,
    std::complex<double>* beta,
    std::complex<double>* VL, int64_t ldvl,
    std::complex<double>* VR, int64_t ldvr );

// -----------------------------------------------------------------------------
int64_t ggev3(
    lapack::Job jobvl, lapack::Job jobvr, int64_t n,
    float* A, int64_t lda,
    float* B, int64_t ldb,
    float* alphar,
    float* alphai,
    float* beta,
    float* VL, int64_t ldvl,
    float* VR, int64_t ldvr );

int64_t ggev3(
    lapack::Job jobvl, lapack::Job jobvr, int64_t n,
    double* A, int64_t lda,
    double* B, int64_t ldb,
    double* alphar,
    double* alphai,
    double* beta,
    double* VL, int64_t ldvl,
    double* VR, int64_t ldvr );

int64_t ggev3(
    lapack::Job jobvl, lapack::Job jobvr, int64_t n,
    std::complex<float>* A, int64_t lda,
    std::complex<float>* B, int64_t ldb,
    std::complex<float>* alpha,
    std::complex<float>* beta,
    std::complex<float>* VL, int64_t ldvl,
    std::complex<float>* VR, int64_t ldvr );

int64_t ggev3(
    lapack::Job jobvl, lapack::Job jobvr, int64_t n,
    std::complex<double>* A, int64_t lda,
    std::complex<double>* B, int64_t ldb,
    std::complex<double>* alpha,
    std::complex<double>* beta,
    std::complex<double>* VL, int64_t ldvl,
    std::complex<double>* VR, int64_t ldvr );

// -----------------------------------------------------------------------------
int64_t ggglm(
    int64_t n, int64_t m, int64_t p,
    float* A, int64_t lda,
    float* B, int64_t ldb,
    float* D,
    float* X,
    float* Y );

int64_t ggglm(
    int64_t n, int64_t m, int64_t p,
    double* A, int64_t lda,
    double* B, int64_t ldb,
    double* D,
    double* X,
    double* Y );

int64_t ggglm(
    int64_t n, int64_t m, int64_t p,
    std::complex<float>* A, int64_t lda,
    std::complex<float>* B, int64_t ldb,
    std::complex<float>* D,
    std::complex<float>* X,
    std::complex<float>* Y );

int64_t ggglm(
    int64_t n, int64_t m, int64_t p,
    std::complex<double>* A, int64_t lda,
    std::complex<double>* B, int64_t ldb,
    std::complex<double>* D,
    std::complex<double>* X,
    std::complex<double>* Y );

// -----------------------------------------------------------------------------
int64_t gghrd(
    lapack::CompQ compq, lapack::CompQ compz, int64_t n, int64_t ilo, int64_t ihi,
    float* A, int64_t lda,
    float* B, int64_t ldb,
    float* Q, int64_t ldq,
    float* Z, int64_t ldz );

int64_t gghrd(
    lapack::CompQ compq, lapack::CompQ compz, int64_t n, int64_t ilo, int64_t ihi,
    double* A, int64_t lda,
    double* B, int64_t ldb,
    double* Q, int64_t ldq,
    double* Z, int64_t ldz );

int64_t gghrd(
    lapack::CompQ compq, lapack::CompQ compz, int64_t n, int64_t ilo, int64_t ihi,
    std::complex<float>* A, int64_t lda,
    std::complex<float>* B, int64_t ldb,
    std::complex<float>* Q, int64_t ldq,
    std::complex<float>* Z, int64_t ldz );

int64_t gghrd(
    lapack::CompQ compq, lapack::CompQ compz, int64_t n, int64_t ilo, int64_t ihi,
    std::complex<double>* A, int64_t lda,
    std::complex<double>* B, int64_t ldb,
    std::complex<double>* Q, int64_t ldq,
    std::complex<double>* Z, int64_t ldz );

// -----------------------------------------------------------------------------
int64_t gglse(
    int64_t m, int64_t n, int64_t p,
    float* A, int64_t lda,
    float* B, int64_t ldb,
    float* C,
    float* D,
    float* X );

int64_t gglse(
    int64_t m, int64_t n, int64_t p,
    double* A, int64_t lda,
    double* B, int64_t ldb,
    double* C,
    double* D,
    double* X );

int64_t gglse(
    int64_t m, int64_t n, int64_t p,
    std::complex<float>* A, int64_t lda,
    std::complex<float>* B, int64_t ldb,
    std::complex<float>* C,
    std::complex<float>* D,
    std::complex<float>* X );

int64_t gglse(
    int64_t m, int64_t n, int64_t p,
    std::complex<double>* A, int64_t lda,
    std::complex<double>* B, int64_t ldb,
    std::complex<double>* C,
    std::complex<double>* D,
    std::complex<double>* X );

// -----------------------------------------------------------------------------
int64_t ggqrf(
    int64_t n, int64_t m, int64_t p,
    float* A, int64_t lda,
    float* taua,
    float* B, int64_t ldb,
    float* taub );

int64_t ggqrf(
    int64_t n, int64_t m, int64_t p,
    double* A, int64_t lda,
    double* taua,
    double* B, int64_t ldb,
    double* taub );

int64_t ggqrf(
    int64_t n, int64_t m, int64_t p,
    std::complex<float>* A, int64_t lda,
    std::complex<float>* taua,
    std::complex<float>* B, int64_t ldb,
    std::complex<float>* taub );

int64_t ggqrf(
    int64_t n, int64_t m, int64_t p,
    std::complex<double>* A, int64_t lda,
    std::complex<double>* taua,
    std::complex<double>* B, int64_t ldb,
    std::complex<double>* taub );

// -----------------------------------------------------------------------------
int64_t ggrqf(
    int64_t m, int64_t p, int64_t n,
    float* A, int64_t lda,
    float* taua,
    float* B, int64_t ldb,
    float* taub );

int64_t ggrqf(
    int64_t m, int64_t p, int64_t n,
    double* A, int64_t lda,
    double* taua,
    double* B, int64_t ldb,
    double* taub );

int64_t ggrqf(
    int64_t m, int64_t p, int64_t n,
    std::complex<float>* A, int64_t lda,
    std::complex<float>* taua,
    std::complex<float>* B, int64_t ldb,
    std::complex<float>* taub );

int64_t ggrqf(
    int64_t m, int64_t p, int64_t n,
    std::complex<double>* A, int64_t lda,
    std::complex<double>* taua,
    std::complex<double>* B, int64_t ldb,
    std::complex<double>* taub );

// -----------------------------------------------------------------------------
int64_t ggsvd3(
    lapack::Job jobu, lapack::Job jobv, lapack::JobQ jobq, int64_t m, int64_t n, int64_t p,
    int64_t* k,
    int64_t* l,
    float* A, int64_t lda,
    float* B, int64_t ldb,
    float* alpha,
    float* beta,
    float* U, int64_t ldu,
    float* V, int64_t ldv,
    float* Q, int64_t ldq );

int64_t ggsvd3(
    lapack::Job jobu, lapack::Job jobv, lapack::JobQ jobq, int64_t m, int64_t n, int64_t p,
    int64_t* k,
    int64_t* l,
    double* A, int64_t lda,
    double* B, int64_t ldb,
    double* alpha,
    double* beta,
    double* U, int64_t ldu,
    double* V, int64_t ldv,
    double* Q, int64_t ldq );

int64_t ggsvd3(
    lapack::Job jobu, lapack::Job jobv, lapack::JobQ jobq, int64_t m, int64_t n, int64_t p,
    int64_t* k,
    int64_t* l,
    std::complex<float>* A, int64_t lda,
    std::complex<float>* B, int64_t ldb,
    float* alpha,
    float* beta,
    std::complex<float>* U, int64_t ldu,
    std::complex<float>* V, int64_t ldv,
    std::complex<float>* Q, int64_t ldq );

int64_t ggsvd3(
    lapack::Job jobu, lapack::Job jobv, lapack::JobQ jobq, int64_t m, int64_t n, int64_t p,
    int64_t* k,
    int64_t* l,
    std::complex<double>* A, int64_t lda,
    std::complex<double>* B, int64_t ldb,
    double* alpha,
    double* beta,
    std::complex<double>* U, int64_t ldu,
    std::complex<double>* V, int64_t ldv,
    std::complex<double>* Q, int64_t ldq );

// -----------------------------------------------------------------------------
int64_t ggsvp3(
    lapack::Job jobu, lapack::Job jobv, lapack::JobQ jobq, int64_t m, int64_t p, int64_t n,
    float* A, int64_t lda,
    float* B, int64_t ldb, float tola, float tolb,
    int64_t* k,
    int64_t* l,
    float* U, int64_t ldu,
    float* V, int64_t ldv,
    float* Q, int64_t ldq,
    float* tau );

int64_t ggsvp3(
    lapack::Job jobu, lapack::Job jobv, lapack::JobQ jobq, int64_t m, int64_t p, int64_t n,
    double* A, int64_t lda,
    double* B, int64_t ldb, double tola, double tolb,
    int64_t* k,
    int64_t* l,
    double* U, int64_t ldu,
    double* V, int64_t ldv,
    double* Q, int64_t ldq,
    double* tau );

int64_t ggsvp3(
    lapack::Job jobu, lapack::Job jobv, lapack::JobQ jobq, int64_t m, int64_t p, int64_t n,
    std::complex<float>* A, int64_t lda,
    std::complex<float>* B, int64_t ldb, float tola, float tolb,
    int64_t* k,
    int64_t* l,
    std::complex<float>* U, int64_t ldu,
    std::complex<float>* V, int64_t ldv,
    std::complex<float>* Q, int64_t ldq,
    std::complex<float>* tau );

int64_t ggsvp3(
    lapack::Job jobu, lapack::Job jobv, lapack::JobQ jobq, int64_t m, int64_t p, int64_t n,
    std::complex<double>* A, int64_t lda,
    std::complex<double>* B, int64_t ldb, double tola, double tolb,
    int64_t* k,
    int64_t* l,
    std::complex<double>* U, int64_t ldu,
    std::complex<double>* V, int64_t ldv,
    std::complex<double>* Q, int64_t ldq,
    std::complex<double>* tau );

// -----------------------------------------------------------------------------
int64_t gtcon(
    lapack::Norm norm, int64_t n,
    float const* DL,
    float const* D,
    float const* DU,
    float const* DU2,
    int64_t const* ipiv, float anorm,
    float* rcond );

int64_t gtcon(
    lapack::Norm norm, int64_t n,
    double const* DL,
    double const* D,
    double const* DU,
    double const* DU2,
    int64_t const* ipiv, double anorm,
    double* rcond );

int64_t gtcon(
    lapack::Norm norm, int64_t n,
    std::complex<float> const* DL,
    std::complex<float> const* D,
    std::complex<float> const* DU,
    std::complex<float> const* DU2,
    int64_t const* ipiv, float anorm,
    float* rcond );

int64_t gtcon(
    lapack::Norm norm, int64_t n,
    std::complex<double> const* DL,
    std::complex<double> const* D,
    std::complex<double> const* DU,
    std::complex<double> const* DU2,
    int64_t const* ipiv, double anorm,
    double* rcond );

// -----------------------------------------------------------------------------
int64_t gtrfs(
    lapack::Op trans, int64_t n, int64_t nrhs,
    float const* DL,
    float const* D,
    float const* DU,
    float const* DLF,
    float const* DF,
    float const* DUF,
    float const* DU2,
    int64_t const* ipiv,
    float const* B, int64_t ldb,
    float* X, int64_t ldx,
    float* ferr,
    float* berr );

int64_t gtrfs(
    lapack::Op trans, int64_t n, int64_t nrhs,
    double const* DL,
    double const* D,
    double const* DU,
    double const* DLF,
    double const* DF,
    double const* DUF,
    double const* DU2,
    int64_t const* ipiv,
    double const* B, int64_t ldb,
    double* X, int64_t ldx,
    double* ferr,
    double* berr );

int64_t gtrfs(
    lapack::Op trans, int64_t n, int64_t nrhs,
    std::complex<float> const* DL,
    std::complex<float> const* D,
    std::complex<float> const* DU,
    std::complex<float> const* DLF,
    std::complex<float> const* DF,
    std::complex<float> const* DUF,
    std::complex<float> const* DU2,
    int64_t const* ipiv,
    std::complex<float> const* B, int64_t ldb,
    std::complex<float>* X, int64_t ldx,
    float* ferr,
    float* berr );

int64_t gtrfs(
    lapack::Op trans, int64_t n, int64_t nrhs,
    std::complex<double> const* DL,
    std::complex<double> const* D,
    std::complex<double> const* DU,
    std::complex<double> const* DLF,
    std::complex<double> const* DF,
    std::complex<double> const* DUF,
    std::complex<double> const* DU2,
    int64_t const* ipiv,
    std::complex<double> const* B, int64_t ldb,
    std::complex<double>* X, int64_t ldx,
    double* ferr,
    double* berr );

// -----------------------------------------------------------------------------
int64_t gtsv(
    int64_t n, int64_t nrhs,
    float* DL,
    float* D,
    float* DU,
    float* B, int64_t ldb );

int64_t gtsv(
    int64_t n, int64_t nrhs,
    double* DL,
    double* D,
    double* DU,
    double* B, int64_t ldb );

int64_t gtsv(
    int64_t n, int64_t nrhs,
    std::complex<float>* DL,
    std::complex<float>* D,
    std::complex<float>* DU,
    std::complex<float>* B, int64_t ldb );

int64_t gtsv(
    int64_t n, int64_t nrhs,
    std::complex<double>* DL,
    std::complex<double>* D,
    std::complex<double>* DU,
    std::complex<double>* B, int64_t ldb );

// -----------------------------------------------------------------------------
int64_t gtsvx(
    lapack::Factored fact, lapack::Op trans, int64_t n, int64_t nrhs,
    float const* DL,
    float const* D,
    float const* DU,
    float* DLF,
    float* DF,
    float* DUF,
    float* DU2,
    int64_t* ipiv,
    float const* B, int64_t ldb,
    float* X, int64_t ldx,
    float* rcond,
    float* ferr,
    float* berr );

int64_t gtsvx(
    lapack::Factored fact, lapack::Op trans, int64_t n, int64_t nrhs,
    double const* DL,
    double const* D,
    double const* DU,
    double* DLF,
    double* DF,
    double* DUF,
    double* DU2,
    int64_t* ipiv,
    double const* B, int64_t ldb,
    double* X, int64_t ldx,
    double* rcond,
    double* ferr,
    double* berr );

int64_t gtsvx(
    lapack::Factored fact, lapack::Op trans, int64_t n, int64_t nrhs,
    std::complex<float> const* DL,
    std::complex<float> const* D,
    std::complex<float> const* DU,
    std::complex<float>* DLF,
    std::complex<float>* DF,
    std::complex<float>* DUF,
    std::complex<float>* DU2,
    int64_t* ipiv,
    std::complex<float> const* B, int64_t ldb,
    std::complex<float>* X, int64_t ldx,
    float* rcond,
    float* ferr,
    float* berr );

int64_t gtsvx(
    lapack::Factored fact, lapack::Op trans, int64_t n, int64_t nrhs,
    std::complex<double> const* DL,
    std::complex<double> const* D,
    std::complex<double> const* DU,
    std::complex<double>* DLF,
    std::complex<double>* DF,
    std::complex<double>* DUF,
    std::complex<double>* DU2,
    int64_t* ipiv,
    std::complex<double> const* B, int64_t ldb,
    std::complex<double>* X, int64_t ldx,
    double* rcond,
    double* ferr,
    double* berr );

// -----------------------------------------------------------------------------
int64_t gttrf(
    int64_t n,
    float* DL,
    float* D,
    float* DU,
    float* DU2,
    int64_t* ipiv );

int64_t gttrf(
    int64_t n,
    double* DL,
    double* D,
    double* DU,
    double* DU2,
    int64_t* ipiv );

int64_t gttrf(
    int64_t n,
    std::complex<float>* DL,
    std::complex<float>* D,
    std::complex<float>* DU,
    std::complex<float>* DU2,
    int64_t* ipiv );

int64_t gttrf(
    int64_t n,
    std::complex<double>* DL,
    std::complex<double>* D,
    std::complex<double>* DU,
    std::complex<double>* DU2,
    int64_t* ipiv );

// -----------------------------------------------------------------------------
int64_t gttrs(
    lapack::Op trans, int64_t n, int64_t nrhs,
    float const* DL,
    float const* D,
    float const* DU,
    float const* DU2,
    int64_t const* ipiv,
    float* B, int64_t ldb );

int64_t gttrs(
    lapack::Op trans, int64_t n, int64_t nrhs,
    double const* DL,
    double const* D,
    double const* DU,
    double const* DU2,
    int64_t const* ipiv,
    double* B, int64_t ldb );

int64_t gttrs(
    lapack::Op trans, int64_t n, int64_t nrhs,
    std::complex<float> const* DL,
    std::complex<float> const* D,
    std::complex<float> const* DU,
    std::complex<float> const* DU2,
    int64_t const* ipiv,
    std::complex<float>* B, int64_t ldb );

int64_t gttrs(
    lapack::Op trans, int64_t n, int64_t nrhs,
    std::complex<double> const* DL,
    std::complex<double> const* D,
    std::complex<double> const* DU,
    std::complex<double> const* DU2,
    int64_t const* ipiv,
    std::complex<double>* B, int64_t ldb );

// -----------------------------------------------------------------------------
int64_t hbev(
    lapack::Job jobz, lapack::Uplo uplo, int64_t n, int64_t kd,
    std::complex<float>* AB, int64_t ldab,
    float* W,
    std::complex<float>* Z, int64_t ldz );

int64_t hbev(
    lapack::Job jobz, lapack::Uplo uplo, int64_t n, int64_t kd,
    std::complex<double>* AB, int64_t ldab,
    double* W,
    std::complex<double>* Z, int64_t ldz );

// -----------------------------------------------------------------------------
int64_t hbev_2stage(
    lapack::Job jobz, lapack::Uplo uplo, int64_t n, int64_t kd,
    std::complex<float>* AB, int64_t ldab,
    float* W,
    std::complex<float>* Z, int64_t ldz );

int64_t hbev_2stage(
    lapack::Job jobz, lapack::Uplo uplo, int64_t n, int64_t kd,
    std::complex<double>* AB, int64_t ldab,
    double* W,
    std::complex<double>* Z, int64_t ldz );

// -----------------------------------------------------------------------------
int64_t hbevd(
    lapack::Job jobz, lapack::Uplo uplo, int64_t n, int64_t kd,
    std::complex<float>* AB, int64_t ldab,
    float* W,
    std::complex<float>* Z, int64_t ldz );

int64_t hbevd(
    lapack::Job jobz, lapack::Uplo uplo, int64_t n, int64_t kd,
    std::complex<double>* AB, int64_t ldab,
    double* W,
    std::complex<double>* Z, int64_t ldz );

// -----------------------------------------------------------------------------
int64_t hbevd_2stage(
    lapack::Job jobz, lapack::Uplo uplo, int64_t n, int64_t kd,
    std::complex<float>* AB, int64_t ldab,
    float* W,
    std::complex<float>* Z, int64_t ldz );

int64_t hbevd_2stage(
    lapack::Job jobz, lapack::Uplo uplo, int64_t n, int64_t kd,
    std::complex<double>* AB, int64_t ldab,
    double* W,
    std::complex<double>* Z, int64_t ldz );

// -----------------------------------------------------------------------------
int64_t hbevx(
    lapack::Job jobz, lapack::Range range, lapack::Uplo uplo, int64_t n, int64_t kd,
    std::complex<float>* AB, int64_t ldab,
    std::complex<float>* Q, int64_t ldq, float vl, float vu, int64_t il, int64_t iu, float abstol,
    int64_t* m,
    float* W,
    std::complex<float>* Z, int64_t ldz,
    int64_t* ifail );

int64_t hbevx(
    lapack::Job jobz, lapack::Range range, lapack::Uplo uplo, int64_t n, int64_t kd,
    std::complex<double>* AB, int64_t ldab,
    std::complex<double>* Q, int64_t ldq, double vl, double vu, int64_t il, int64_t iu, double abstol,
    int64_t* m,
    double* W,
    std::complex<double>* Z, int64_t ldz,
    int64_t* ifail );

// -----------------------------------------------------------------------------
int64_t hbevx_2stage(
    lapack::Job jobz, lapack::Range range, lapack::Uplo uplo, int64_t n, int64_t kd,
    std::complex<float>* AB, int64_t ldab,
    std::complex<float>* Q, int64_t ldq, float vl, float vu, int64_t il, int64_t iu, float abstol,
    int64_t* m,
    float* W,
    std::complex<float>* Z, int64_t ldz,
    int64_t* ifail );

int64_t hbevx_2stage(
    lapack::Job jobz, lapack::Range range, lapack::Uplo uplo, int64_t n, int64_t kd,
    std::complex<double>* AB, int64_t ldab,
    std::complex<double>* Q, int64_t ldq, double vl, double vu, int64_t il, int64_t iu, double abstol,
    int64_t* m,
    double* W,
    std::complex<double>* Z, int64_t ldz,
    int64_t* ifail );

// -----------------------------------------------------------------------------
int64_t hbgst(
    lapack::Vect vect, lapack::Uplo uplo, int64_t n, int64_t ka, int64_t kb,
    std::complex<float>* AB, int64_t ldab,
    std::complex<float> const* BB, int64_t ldbb,
    std::complex<float>* X, int64_t ldx );

int64_t hbgst(
    lapack::Vect vect, lapack::Uplo uplo, int64_t n, int64_t ka, int64_t kb,
    std::complex<double>* AB, int64_t ldab,
    std::complex<double> const* BB, int64_t ldbb,
    std::complex<double>* X, int64_t ldx );

// -----------------------------------------------------------------------------
int64_t hbgv(
    lapack::Job jobz, lapack::Uplo uplo, int64_t n, int64_t ka, int64_t kb,
    std::complex<float>* AB, int64_t ldab,
    std::complex<float>* BB, int64_t ldbb,
    float* W,
    std::complex<float>* Z, int64_t ldz );

int64_t hbgv(
    lapack::Job jobz, lapack::Uplo uplo, int64_t n, int64_t ka, int64_t kb,
    std::complex<double>* AB, int64_t ldab,
    std::complex<double>* BB, int64_t ldbb,
    double* W,
    std::complex<double>* Z, int64_t ldz );

// -----------------------------------------------------------------------------
int64_t hbgvd(
    lapack::Job jobz, lapack::Uplo uplo, int64_t n, int64_t ka, int64_t kb,
    std::complex<float>* AB, int64_t ldab,
    std::complex<float>* BB, int64_t ldbb,
    float* W,
    std::complex<float>* Z, int64_t ldz );

int64_t hbgvd(
    lapack::Job jobz, lapack::Uplo uplo, int64_t n, int64_t ka, int64_t kb,
    std::complex<double>* AB, int64_t ldab,
    std::complex<double>* BB, int64_t ldbb,
    double* W,
    std::complex<double>* Z, int64_t ldz );

// -----------------------------------------------------------------------------
int64_t hbgvx(
    lapack::Job jobz, lapack::Range range, lapack::Uplo uplo, int64_t n, int64_t ka, int64_t kb,
    std::complex<float>* AB, int64_t ldab,
    std::complex<float>* BB, int64_t ldbb,
    std::complex<float>* Q, int64_t ldq, float vl, float vu, int64_t il, int64_t iu, float abstol,
    int64_t* m,
    float* W,
    std::complex<float>* Z, int64_t ldz,
    int64_t* ifail );

int64_t hbgvx(
    lapack::Job jobz, lapack::Range range, lapack::Uplo uplo, int64_t n, int64_t ka, int64_t kb,
    std::complex<double>* AB, int64_t ldab,
    std::complex<double>* BB, int64_t ldbb,
    std::complex<double>* Q, int64_t ldq, double vl, double vu, int64_t il, int64_t iu, double abstol,
    int64_t* m,
    double* W,
    std::complex<double>* Z, int64_t ldz,
    int64_t* ifail );

// -----------------------------------------------------------------------------
int64_t hbtrd(
    lapack::Vect vect, lapack::Uplo uplo, int64_t n, int64_t kd,
    std::complex<float>* AB, int64_t ldab,
    float* D,
    float* E,
    std::complex<float>* Q, int64_t ldq );

int64_t hbtrd(
    lapack::Vect vect, lapack::Uplo uplo, int64_t n, int64_t kd,
    std::complex<double>* AB, int64_t ldab,
    double* D,
    double* E,
    std::complex<double>* Q, int64_t ldq );

// -----------------------------------------------------------------------------
int64_t hecon(
    lapack::Uplo uplo, int64_t n,
    std::complex<float> const* A, int64_t lda,
    int64_t const* ipiv, float anorm,
    float* rcond );

int64_t hecon(
    lapack::Uplo uplo, int64_t n,
    std::complex<double> const* A, int64_t lda,
    int64_t const* ipiv, double anorm,
    double* rcond );

// -----------------------------------------------------------------------------
int64_t hecon_3(
    lapack::Uplo uplo, int64_t n,
    std::complex<float> const* A, int64_t lda,
    std::complex<float> const* E,
    int64_t const* ipiv, float anorm,
    float* rcond );

int64_t hecon_3(
    lapack::Uplo uplo, int64_t n,
    std::complex<double> const* A, int64_t lda,
    std::complex<double> const* E,
    int64_t const* ipiv, double anorm,
    double* rcond );

// -----------------------------------------------------------------------------
int64_t heequb(
    lapack::Uplo uplo, int64_t n,
    std::complex<float> const* A, int64_t lda,
    float* S,
    float* scond,
    float* amax );

int64_t heequb(
    lapack::Uplo uplo, int64_t n,
    std::complex<double> const* A, int64_t lda,
    double* S,
    double* scond,
    double* amax );

// -----------------------------------------------------------------------------
int64_t heev(
    lapack::Job jobz, lapack::Uplo uplo, int64_t n,
    std::complex<float>* A, int64_t lda,
    float* W );

int64_t heev(
    lapack::Job jobz, lapack::Uplo uplo, int64_t n,
    std::complex<double>* A, int64_t lda,
    double* W );

// -----------------------------------------------------------------------------
int64_t heev_2stage(
    lapack::Job jobz, lapack::Uplo uplo, int64_t n,
    std::complex<float>* A, int64_t lda,
    float* W );

int64_t heev_2stage(
    lapack::Job jobz, lapack::Uplo uplo, int64_t n,
    std::complex<double>* A, int64_t lda,
    double* W );

// -----------------------------------------------------------------------------
int64_t heevd(
    lapack::Job jobz, lapack::Uplo uplo, int64_t n,
    std::complex<float>* A, int64_t lda,
    float* W );

int64_t heevd(
    lapack::Job jobz, lapack::Uplo uplo, int64_t n,
    std::complex<double>* A, int64_t lda,
    double* W );

// -----------------------------------------------------------------------------
int64_t heevd_2stage(
    lapack::Job jobz, lapack::Uplo uplo, int64_t n,
    std::complex<float>* A, int64_t lda,
    float* W );

int64_t heevd_2stage(
    lapack::Job jobz, lapack::Uplo uplo, int64_t n,
    std::complex<double>* A, int64_t lda,
    double* W );

// -----------------------------------------------------------------------------
int64_t heevr(
    lapack::Job jobz, lapack::Range range, lapack::Uplo uplo, int64_t n,
    std::complex<float>* A, int64_t lda, float vl, float vu, int64_t il, int64_t iu, float abstol,
    int64_t* m,
    float* W,
    std::complex<float>* Z, int64_t ldz,
    int64_t* isuppz );

int64_t heevr(
    lapack::Job jobz, lapack::Range range, lapack::Uplo uplo, int64_t n,
    std::complex<double>* A, int64_t lda, double vl, double vu, int64_t il, int64_t iu, double abstol,
    int64_t* m,
    double* W,
    std::complex<double>* Z, int64_t ldz,
    int64_t* isuppz );

// -----------------------------------------------------------------------------
int64_t heevr_2stage(
    lapack::Job jobz, lapack::Range range, lapack::Uplo uplo, int64_t n,
    std::complex<float>* A, int64_t lda, float vl, float vu, int64_t il, int64_t iu, float abstol,
    int64_t* m,
    float* W,
    std::complex<float>* Z, int64_t ldz,
    int64_t* isuppz );

int64_t heevr_2stage(
    lapack::Job jobz, lapack::Range range, lapack::Uplo uplo, int64_t n,
    std::complex<double>* A, int64_t lda, double vl, double vu, int64_t il, int64_t iu, double abstol,
    int64_t* m,
    double* W,
    std::complex<double>* Z, int64_t ldz,
    int64_t* isuppz );

// -----------------------------------------------------------------------------
int64_t heevx(
    lapack::Job jobz, lapack::Range range, lapack::Uplo uplo, int64_t n,
    std::complex<float>* A, int64_t lda, float vl, float vu, int64_t il, int64_t iu, float abstol,
    int64_t* m,
    float* W,
    std::complex<float>* Z, int64_t ldz,
    int64_t* ifail );

int64_t heevx(
    lapack::Job jobz, lapack::Range range, lapack::Uplo uplo, int64_t n,
    std::complex<double>* A, int64_t lda, double vl, double vu, int64_t il, int64_t iu, double abstol,
    int64_t* m,
    double* W,
    std::complex<double>* Z, int64_t ldz,
    int64_t* ifail );

// -----------------------------------------------------------------------------
int64_t heevx_2stage(
    lapack::Job jobz, lapack::Range range, lapack::Uplo uplo, int64_t n,
    std::complex<float>* A, int64_t lda, float vl, float vu, int64_t il, int64_t iu, float abstol,
    int64_t* m,
    float* W,
    std::complex<float>* Z, int64_t ldz,
    int64_t* ifail );

int64_t heevx_2stage(
    lapack::Job jobz, lapack::Range range, lapack::Uplo uplo, int64_t n,
    std::complex<double>* A, int64_t lda, double vl, double vu, int64_t il, int64_t iu, double abstol,
    int64_t* m,
    double* W,
    std::complex<double>* Z, int64_t ldz,
    int64_t* ifail );

// -----------------------------------------------------------------------------
int64_t hegst(
    int64_t itype, lapack::Uplo uplo, int64_t n,
    std::complex<float>* A, int64_t lda,
    std::complex<float>* B, int64_t ldb );

int64_t hegst(
    int64_t itype, lapack::Uplo uplo, int64_t n,
    std::complex<double>* A, int64_t lda,
    std::complex<double>* B, int64_t ldb );

// -----------------------------------------------------------------------------
int64_t hegv(
    int64_t itype, lapack::Job jobz, lapack::Uplo uplo, int64_t n,
    std::complex<float>* A, int64_t lda,
    std::complex<float>* B, int64_t ldb,
    float* W );

int64_t hegv(
    int64_t itype, lapack::Job jobz, lapack::Uplo uplo, int64_t n,
    std::complex<double>* A, int64_t lda,
    std::complex<double>* B, int64_t ldb,
    double* W );

// -----------------------------------------------------------------------------
int64_t hegv_2stage(
    int64_t itype, lapack::Job jobz, lapack::Uplo uplo, int64_t n,
    std::complex<float>* A, int64_t lda,
    std::complex<float>* B, int64_t ldb,
    float* W );

int64_t hegv_2stage(
    int64_t itype, lapack::Job jobz, lapack::Uplo uplo, int64_t n,
    std::complex<double>* A, int64_t lda,
    std::complex<double>* B, int64_t ldb,
    double* W );

// -----------------------------------------------------------------------------
int64_t hegvd(
    int64_t itype, lapack::Job jobz, lapack::Uplo uplo, int64_t n,
    std::complex<float>* A, int64_t lda,
    std::complex<float>* B, int64_t ldb,
    float* W );

int64_t hegvd(
    int64_t itype, lapack::Job jobz, lapack::Uplo uplo, int64_t n,
    std::complex<double>* A, int64_t lda,
    std::complex<double>* B, int64_t ldb,
    double* W );

// -----------------------------------------------------------------------------
int64_t hegvx(
    int64_t itype, lapack::Job jobz, lapack::Range range, lapack::Uplo uplo, int64_t n,
    std::complex<float>* A, int64_t lda,
    std::complex<float>* B, int64_t ldb, float vl, float vu, int64_t il, int64_t iu, float abstol,
    int64_t* m,
    float* W,
    std::complex<float>* Z, int64_t ldz,
    int64_t* ifail );

int64_t hegvx(
    int64_t itype, lapack::Job jobz, lapack::Range range, lapack::Uplo uplo, int64_t n,
    std::complex<double>* A, int64_t lda,
    std::complex<double>* B, int64_t ldb, double vl, double vu, int64_t il, int64_t iu, double abstol,
    int64_t* m,
    double* W,
    std::complex<double>* Z, int64_t ldz,
    int64_t* ifail );

// -----------------------------------------------------------------------------
int64_t herfs(
    lapack::Uplo uplo, int64_t n, int64_t nrhs,
    std::complex<float> const* A, int64_t lda,
    std::complex<float> const* AF, int64_t ldaf,
    int64_t const* ipiv,
    std::complex<float> const* B, int64_t ldb,
    std::complex<float>* X, int64_t ldx,
    float* ferr,
    float* berr );

int64_t herfs(
    lapack::Uplo uplo, int64_t n, int64_t nrhs,
    std::complex<double> const* A, int64_t lda,
    std::complex<double> const* AF, int64_t ldaf,
    int64_t const* ipiv,
    std::complex<double> const* B, int64_t ldb,
    std::complex<double>* X, int64_t ldx,
    double* ferr,
    double* berr );

// -----------------------------------------------------------------------------
int64_t herfsx(
    lapack::Uplo uplo, lapack::Equed equed, int64_t n, int64_t nrhs,
    std::complex<float> const* A, int64_t lda,
    std::complex<float> const* AF, int64_t ldaf,
    int64_t const* ipiv,
    float* S,
    std::complex<float> const* B, int64_t ldb,
    std::complex<float>* X, int64_t ldx,
    float* rcond,
    float* berr, int64_t n_err_bnds,
    float* err_bnds_norm,
    float* err_bnds_comp, int64_t nparams,
    float* params );

int64_t herfsx(
    lapack::Uplo uplo, lapack::Equed equed, int64_t n, int64_t nrhs,
    std::complex<double> const* A, int64_t lda,
    std::complex<double> const* AF, int64_t ldaf,
    int64_t const* ipiv,
    double* S,
    std::complex<double> const* B, int64_t ldb,
    std::complex<double>* X, int64_t ldx,
    double* rcond,
    double* berr, int64_t n_err_bnds,
    double* err_bnds_norm,
    double* err_bnds_comp, int64_t nparams,
    double* params );

// -----------------------------------------------------------------------------
int64_t hesv(
    lapack::Uplo uplo, int64_t n, int64_t nrhs,
    std::complex<float>* A, int64_t lda,
    int64_t* ipiv,
    std::complex<float>* B, int64_t ldb );

int64_t hesv(
    lapack::Uplo uplo, int64_t n, int64_t nrhs,
    std::complex<double>* A, int64_t lda,
    int64_t* ipiv,
    std::complex<double>* B, int64_t ldb );

// -----------------------------------------------------------------------------
int64_t hesv_aa(
    lapack::Uplo uplo, int64_t n, int64_t nrhs,
    std::complex<float>* A, int64_t lda,
    int64_t* ipiv,
    std::complex<float>* B, int64_t ldb );

int64_t hesv_aa(
    lapack::Uplo uplo, int64_t n, int64_t nrhs,
    std::complex<double>* A, int64_t lda,
    int64_t* ipiv,
    std::complex<double>* B, int64_t ldb );

// -----------------------------------------------------------------------------
int64_t hesv_rk(
    lapack::Uplo uplo, int64_t n, int64_t nrhs,
    std::complex<float>* A, int64_t lda,
    std::complex<float>* E,
    int64_t* ipiv,
    std::complex<float>* B, int64_t ldb );

int64_t hesv_rk(
    lapack::Uplo uplo, int64_t n, int64_t nrhs,
    std::complex<double>* A, int64_t lda,
    std::complex<double>* E,
    int64_t* ipiv,
    std::complex<double>* B, int64_t ldb );

// -----------------------------------------------------------------------------
void heswapr(
    lapack::Uplo uplo, int64_t n,
    std::complex<float>* A, int64_t lda, int64_t i1, int64_t i2 );

void heswapr(
    lapack::Uplo uplo, int64_t n,
    std::complex<double>* A, int64_t lda, int64_t i1, int64_t i2 );

// -----------------------------------------------------------------------------
int64_t hetrd(
    lapack::Uplo uplo, int64_t n,
    std::complex<float>* A, int64_t lda,
    float* D,
    float* E,
    std::complex<float>* tau );

int64_t hetrd(
    lapack::Uplo uplo, int64_t n,
    std::complex<double>* A, int64_t lda,
    double* D,
    double* E,
    std::complex<double>* tau );

// -----------------------------------------------------------------------------
int64_t hetrd_2stage(
    lapack::Job jobz, lapack::Uplo uplo, int64_t n,
    std::complex<float>* A, int64_t lda,
    float* D,
    float* E,
    std::complex<float>* tau,
    std::complex<float>* hous2, int64_t lhous2 );

int64_t hetrd_2stage(
    lapack::Job jobz, lapack::Uplo uplo, int64_t n,
    std::complex<double>* A, int64_t lda,
    double* D,
    double* E,
    std::complex<double>* tau,
    std::complex<double>* hous2, int64_t lhous2 );

// -----------------------------------------------------------------------------
int64_t hetrf(
    lapack::Uplo uplo, int64_t n,
    std::complex<float>* A, int64_t lda,
    int64_t* ipiv );

int64_t hetrf(
    lapack::Uplo uplo, int64_t n,
    std::complex<double>* A, int64_t lda,
    int64_t* ipiv );

// -----------------------------------------------------------------------------
int64_t hetrf_aa(
    lapack::Uplo uplo, int64_t n,
    std::complex<float>* A, int64_t lda,
    int64_t* ipiv );

int64_t hetrf_aa(
    lapack::Uplo uplo, int64_t n,
    std::complex<double>* A, int64_t lda,
    int64_t* ipiv );

// -----------------------------------------------------------------------------
int64_t hetrf_rk(
    lapack::Uplo uplo, int64_t n,
    std::complex<float>* A, int64_t lda,
    std::complex<float>* E,
    int64_t* ipiv );

int64_t hetrf_rk(
    lapack::Uplo uplo, int64_t n,
    std::complex<double>* A, int64_t lda,
    std::complex<double>* E,
    int64_t* ipiv );

// -----------------------------------------------------------------------------
int64_t hetrf_rook(
    lapack::Uplo uplo, int64_t n,
    std::complex<float>* A, int64_t lda,
    int64_t* ipiv );

int64_t hetrf_rook(
    lapack::Uplo uplo, int64_t n,
    std::complex<double>* A, int64_t lda,
    int64_t* ipiv );

// -----------------------------------------------------------------------------
int64_t hetri(
    lapack::Uplo uplo, int64_t n,
    std::complex<float>* A, int64_t lda,
    int64_t const* ipiv );

int64_t hetri(
    lapack::Uplo uplo, int64_t n,
    std::complex<double>* A, int64_t lda,
    int64_t const* ipiv );

// -----------------------------------------------------------------------------
int64_t hetri2(
    lapack::Uplo uplo, int64_t n,
    std::complex<float>* A, int64_t lda,
    int64_t const* ipiv );

int64_t hetri2(
    lapack::Uplo uplo, int64_t n,
    std::complex<double>* A, int64_t lda,
    int64_t const* ipiv );

// -----------------------------------------------------------------------------
int64_t hetri2x(
    lapack::Uplo uplo, int64_t n,
    std::complex<float>* A, int64_t lda,
    int64_t const* ipiv, int64_t nb );

int64_t hetri2x(
    lapack::Uplo uplo, int64_t n,
    std::complex<double>* A, int64_t lda,
    int64_t const* ipiv, int64_t nb );

// -----------------------------------------------------------------------------
int64_t hetri_3(
    lapack::Uplo uplo, int64_t n,
    std::complex<float>* A, int64_t lda,
    std::complex<float> const* E,
    int64_t const* ipiv );

int64_t hetri_3(
    lapack::Uplo uplo, int64_t n,
    std::complex<double>* A, int64_t lda,
    std::complex<double> const* E,
    int64_t const* ipiv );

// -----------------------------------------------------------------------------
int64_t hetrs(
    lapack::Uplo uplo, int64_t n, int64_t nrhs,
    std::complex<float> const* A, int64_t lda,
    int64_t const* ipiv,
    std::complex<float>* B, int64_t ldb );

int64_t hetrs(
    lapack::Uplo uplo, int64_t n, int64_t nrhs,
    std::complex<double> const* A, int64_t lda,
    int64_t const* ipiv,
    std::complex<double>* B, int64_t ldb );

// -----------------------------------------------------------------------------
int64_t hetrs2(
    lapack::Uplo uplo, int64_t n, int64_t nrhs,
    std::complex<float> const* A, int64_t lda,
    int64_t const* ipiv,
    std::complex<float>* B, int64_t ldb );

int64_t hetrs2(
    lapack::Uplo uplo, int64_t n, int64_t nrhs,
    std::complex<double> const* A, int64_t lda,
    int64_t const* ipiv,
    std::complex<double>* B, int64_t ldb );

// -----------------------------------------------------------------------------
int64_t hetrs_3(
    lapack::Uplo uplo, int64_t n, int64_t nrhs,
    std::complex<float> const* A, int64_t lda,
    std::complex<float> const* E,
    int64_t const* ipiv,
    std::complex<float>* B, int64_t ldb );

int64_t hetrs_3(
    lapack::Uplo uplo, int64_t n, int64_t nrhs,
    std::complex<double> const* A, int64_t lda,
    std::complex<double> const* E,
    int64_t const* ipiv,
    std::complex<double>* B, int64_t ldb );

// -----------------------------------------------------------------------------
int64_t hetrs_aa(
    lapack::Uplo uplo, int64_t n, int64_t nrhs,
    std::complex<float> const* A, int64_t lda,
    int64_t const* ipiv,
    std::complex<float>* B, int64_t ldb, int64_t lwork );

int64_t hetrs_aa(
    lapack::Uplo uplo, int64_t n, int64_t nrhs,
    std::complex<double> const* A, int64_t lda,
    int64_t const* ipiv,
    std::complex<double>* B, int64_t ldb, int64_t lwork );

// -----------------------------------------------------------------------------
int64_t hetrs_rook(
    lapack::Uplo uplo, int64_t n, int64_t nrhs,
    std::complex<float> const* A, int64_t lda,
    int64_t const* ipiv,
    std::complex<float>* B, int64_t ldb );

int64_t hetrs_rook(
    lapack::Uplo uplo, int64_t n, int64_t nrhs,
    std::complex<double> const* A, int64_t lda,
    int64_t const* ipiv,
    std::complex<double>* B, int64_t ldb );

// -----------------------------------------------------------------------------
void hfrk(
    lapack::Op transr, lapack::Uplo uplo, lapack::Op trans, int64_t n, int64_t k, float alpha,
    std::complex<float> const* A, int64_t lda, float beta,
    std::complex<float>* C );

void hfrk(
    lapack::Op transr, lapack::Uplo uplo, lapack::Op trans, int64_t n, int64_t k, double alpha,
    std::complex<double> const* A, int64_t lda, double beta,
    std::complex<double>* C );

// -----------------------------------------------------------------------------
int64_t hgeqz(
    lapack::Job job, lapack::CompQ compq, lapack::CompQ compz, int64_t n, int64_t ilo, int64_t ihi,
    float* H, int64_t ldh,
    float* T, int64_t ldt,
    float* alphar,
    float* alphai,
    float* beta,
    float* Q, int64_t ldq,
    float* Z, int64_t ldz );

int64_t hgeqz(
    lapack::Job job, lapack::CompQ compq, lapack::CompQ compz, int64_t n, int64_t ilo, int64_t ihi,
    double* H, int64_t ldh,
    double* T, int64_t ldt,
    double* alphar,
    double* alphai,
    double* beta,
    double* Q, int64_t ldq,
    double* Z, int64_t ldz );

int64_t hgeqz(
    lapack::Job job, lapack::CompQ compq, lapack::CompQ compz, int64_t n, int64_t ilo, int64_t ihi,
    std::complex<float>* H, int64_t ldh,
    std::complex<float>* T, int64_t ldt,
    std::complex<float>* alpha,
    std::complex<float>* beta,
    std::complex<float>* Q, int64_t ldq,
    std::complex<float>* Z, int64_t ldz );

int64_t hgeqz(
    lapack::Job job, lapack::CompQ compq, lapack::CompQ compz, int64_t n, int64_t ilo, int64_t ihi,
    std::complex<double>* H, int64_t ldh,
    std::complex<double>* T, int64_t ldt,
    std::complex<double>* alpha,
    std::complex<double>* beta,
    std::complex<double>* Q, int64_t ldq,
    std::complex<double>* Z, int64_t ldz );

// -----------------------------------------------------------------------------
int64_t hpcon(
    lapack::Uplo uplo, int64_t n,
    std::complex<float> const* AP,
    int64_t const* ipiv, float anorm,
    float* rcond );

int64_t hpcon(
    lapack::Uplo uplo, int64_t n,
    std::complex<double> const* AP,
    int64_t const* ipiv, double anorm,
    double* rcond );

// -----------------------------------------------------------------------------
int64_t hpev(
    lapack::Job jobz, lapack::Uplo uplo, int64_t n,
    std::complex<float>* AP,
    float* W,
    std::complex<float>* Z, int64_t ldz );

int64_t hpev(
    lapack::Job jobz, lapack::Uplo uplo, int64_t n,
    std::complex<double>* AP,
    double* W,
    std::complex<double>* Z, int64_t ldz );

// -----------------------------------------------------------------------------
int64_t hpevd(
    lapack::Job jobz, lapack::Uplo uplo, int64_t n,
    std::complex<float>* AP,
    float* W,
    std::complex<float>* Z, int64_t ldz );

int64_t hpevd(
    lapack::Job jobz, lapack::Uplo uplo, int64_t n,
    std::complex<double>* AP,
    double* W,
    std::complex<double>* Z, int64_t ldz );

// -----------------------------------------------------------------------------
int64_t hpevx(
    lapack::Job jobz, lapack::Range range, lapack::Uplo uplo, int64_t n,
    std::complex<float>* AP, float vl, float vu, int64_t il, int64_t iu, float abstol,
    int64_t* m,
    float* W,
    std::complex<float>* Z, int64_t ldz,
    int64_t* ifail );

int64_t hpevx(
    lapack::Job jobz, lapack::Range range, lapack::Uplo uplo, int64_t n,
    std::complex<double>* AP, double vl, double vu, int64_t il, int64_t iu, double abstol,
    int64_t* m,
    double* W,
    std::complex<double>* Z, int64_t ldz,
    int64_t* ifail );

// -----------------------------------------------------------------------------
int64_t hpgst(
    int64_t itype, lapack::Uplo uplo, int64_t n,
    std::complex<float>* AP,
    std::complex<float> const* BP );

int64_t hpgst(
    int64_t itype, lapack::Uplo uplo, int64_t n,
    std::complex<double>* AP,
    std::complex<double> const* BP );

// -----------------------------------------------------------------------------
int64_t hpgv(
    int64_t itype, lapack::Job jobz, lapack::Uplo uplo, int64_t n,
    std::complex<float>* AP,
    std::complex<float>* BP,
    float* W,
    std::complex<float>* Z, int64_t ldz );

int64_t hpgv(
    int64_t itype, lapack::Job jobz, lapack::Uplo uplo, int64_t n,
    std::complex<double>* AP,
    std::complex<double>* BP,
    double* W,
    std::complex<double>* Z, int64_t ldz );

// -----------------------------------------------------------------------------
int64_t hpgvd(
    int64_t itype, lapack::Job jobz, lapack::Uplo uplo, int64_t n,
    std::complex<float>* AP,
    std::complex<float>* BP,
    float* W,
    std::complex<float>* Z, int64_t ldz );

int64_t hpgvd(
    int64_t itype, lapack::Job jobz, lapack::Uplo uplo, int64_t n,
    std::complex<double>* AP,
    std::complex<double>* BP,
    double* W,
    std::complex<double>* Z, int64_t ldz );

// -----------------------------------------------------------------------------
int64_t hpgvx(
    int64_t itype, lapack::Job jobz, lapack::Range range, lapack::Uplo uplo, int64_t n,
    std::complex<float>* AP,
    std::complex<float>* BP, float vl, float vu, int64_t il, int64_t iu, float abstol,
    int64_t* m,
    float* W,
    std::complex<float>* Z, int64_t ldz,
    int64_t* ifail );

int64_t hpgvx(
    int64_t itype, lapack::Job jobz, lapack::Range range, lapack::Uplo uplo, int64_t n,
    std::complex<double>* AP,
    std::complex<double>* BP, double vl, double vu, int64_t il, int64_t iu, double abstol,
    int64_t* m,
    double* W,
    std::complex<double>* Z, int64_t ldz,
    int64_t* ifail );

// -----------------------------------------------------------------------------
int64_t hprfs(
    lapack::Uplo uplo, int64_t n, int64_t nrhs,
    std::complex<float> const* AP,
    std::complex<float> const* AFP,
    int64_t const* ipiv,
    std::complex<float> const* B, int64_t ldb,
    std::complex<float>* X, int64_t ldx,
    float* ferr,
    float* berr );

int64_t hprfs(
    lapack::Uplo uplo, int64_t n, int64_t nrhs,
    std::complex<double> const* AP,
    std::complex<double> const* AFP,
    int64_t const* ipiv,
    std::complex<double> const* B, int64_t ldb,
    std::complex<double>* X, int64_t ldx,
    double* ferr,
    double* berr );

// -----------------------------------------------------------------------------
int64_t hpsv(
    lapack::Uplo uplo, int64_t n, int64_t nrhs,
    std::complex<float>* AP,
    int64_t* ipiv,
    std::complex<float>* B, int64_t ldb );

int64_t hpsv(
    lapack::Uplo uplo, int64_t n, int64_t nrhs,
    std::complex<double>* AP,
    int64_t* ipiv,
    std::complex<double>* B, int64_t ldb );

// -----------------------------------------------------------------------------
int64_t hpsvx(
    lapack::Factored fact, lapack::Uplo uplo, int64_t n, int64_t nrhs,
    std::complex<float> const* AP,
    std::complex<float>* AFP,
    int64_t* ipiv,
    std::complex<float> const* B, int64_t ldb,
    std::complex<float>* X, int64_t ldx,
    float* rcond,
    float* ferr,
    float* berr );

int64_t hpsvx(
    lapack::Factored fact, lapack::Uplo uplo, int64_t n, int64_t nrhs,
    std::complex<double> const* AP,
    std::complex<double>* AFP,
    int64_t* ipiv,
    std::complex<double> const* B, int64_t ldb,
    std::complex<double>* X, int64_t ldx,
    double* rcond,
    double* ferr,
    double* berr );

// -----------------------------------------------------------------------------
int64_t hptrd(
    lapack::Uplo uplo, int64_t n,
    std::complex<float>* AP,
    float* D,
    float* E,
    std::complex<float>* tau );

int64_t hptrd(
    lapack::Uplo uplo, int64_t n,
    std::complex<double>* AP,
    double* D,
    double* E,
    std::complex<double>* tau );

// -----------------------------------------------------------------------------
int64_t hptrf(
    lapack::Uplo uplo, int64_t n,
    std::complex<float>* AP,
    int64_t* ipiv );

int64_t hptrf(
    lapack::Uplo uplo, int64_t n,
    std::complex<double>* AP,
    int64_t* ipiv );

// -----------------------------------------------------------------------------
int64_t hptri(
    lapack::Uplo uplo, int64_t n,
    std::complex<float>* AP,
    int64_t const* ipiv );

int64_t hptri(
    lapack::Uplo uplo, int64_t n,
    std::complex<double>* AP,
    int64_t const* ipiv );

// -----------------------------------------------------------------------------
int64_t hptrs(
    lapack::Uplo uplo, int64_t n, int64_t nrhs,
    std::complex<float> const* AP,
    int64_t const* ipiv,
    std::complex<float>* B, int64_t ldb );

int64_t hptrs(
    lapack::Uplo uplo, int64_t n, int64_t nrhs,
    std::complex<double> const* AP,
    int64_t const* ipiv,
    std::complex<double>* B, int64_t ldb );

// -----------------------------------------------------------------------------
int64_t hseqr(
    lapack::Job job, lapack::CompQ compz, int64_t n, int64_t ilo, int64_t ihi,
    float* H, int64_t ldh,
    float* WR,
    float* WI,
    float* Z, int64_t ldz );

int64_t hseqr(
    lapack::Job job, lapack::CompQ compz, int64_t n, int64_t ilo, int64_t ihi,
    double* H, int64_t ldh,
    double* WR,
    double* WI,
    double* Z, int64_t ldz );

int64_t hseqr(
    lapack::Job job, lapack::CompQ compz, int64_t n, int64_t ilo, int64_t ihi,
    std::complex<float>* H, int64_t ldh,
    std::complex<float>* W,
    std::complex<float>* Z, int64_t ldz );

int64_t hseqr(
    lapack::Job job, lapack::CompQ compz, int64_t n, int64_t ilo, int64_t ihi,
    std::complex<double>* H, int64_t ldh,
    std::complex<double>* W,
    std::complex<double>* Z, int64_t ldz );

// -----------------------------------------------------------------------------
void lacgv(
    int64_t n,
    std::complex<float>* X, int64_t incx );

void lacgv(
    int64_t n,
    std::complex<double>* X, int64_t incx );

// -----------------------------------------------------------------------------
void lacp2(
    lapack::Uplo uplo, int64_t m, int64_t n,
    float const* A, int64_t lda,
    std::complex<float>* B, int64_t ldb );

void lacp2(
    lapack::Uplo uplo, int64_t m, int64_t n,
    double const* A, int64_t lda,
    std::complex<double>* B, int64_t ldb );

// -----------------------------------------------------------------------------
void lacpy(
    lapack::Uplo uplo, int64_t m, int64_t n,
    float const* A, int64_t lda,
    float* B, int64_t ldb );

void lacpy(
    lapack::Uplo uplo, int64_t m, int64_t n,
    double const* A, int64_t lda,
    double* B, int64_t ldb );

void lacpy(
    lapack::Uplo uplo, int64_t m, int64_t n,
    std::complex<float> const* A, int64_t lda,
    std::complex<float>* B, int64_t ldb );

void lacpy(
    lapack::Uplo uplo, int64_t m, int64_t n,
    std::complex<double> const* A, int64_t lda,
    std::complex<double>* B, int64_t ldb );

// -----------------------------------------------------------------------------
int64_t lag2c(
    int64_t m, int64_t n,
    std::complex<double> const* A, int64_t lda,
    std::complex<float>* SA, int64_t ldsa );

// -----------------------------------------------------------------------------
int64_t lag2d(
    int64_t m, int64_t n,
    float const* SA, int64_t ldsa,
    double* A, int64_t lda );

// -----------------------------------------------------------------------------
int64_t lag2s(
    int64_t m, int64_t n,
    double const* A, int64_t lda,
    float* SA, int64_t ldsa );

// -----------------------------------------------------------------------------
int64_t lag2z(
    int64_t m, int64_t n,
    std::complex<float> const* SA, int64_t ldsa,
    std::complex<double>* A, int64_t lda );

// -----------------------------------------------------------------------------
int64_t lagge(
    int64_t m, int64_t n, int64_t kl, int64_t ku,
    float const* D,
    float* A, int64_t lda,
    int64_t* iseed );

int64_t lagge(
    int64_t m, int64_t n, int64_t kl, int64_t ku,
    double const* D,
    double* A, int64_t lda,
    int64_t* iseed );

int64_t lagge(
    int64_t m, int64_t n, int64_t kl, int64_t ku,
    float const* D,
    std::complex<float>* A, int64_t lda,
    int64_t* iseed );

int64_t lagge(
    int64_t m, int64_t n, int64_t kl, int64_t ku,
    double const* D,
    std::complex<double>* A, int64_t lda,
    int64_t* iseed );

// -----------------------------------------------------------------------------
int64_t laghe(
    int64_t n, int64_t k,
    float const* D,
    std::complex<float>* A, int64_t lda,
    int64_t* iseed );

int64_t laghe(
    int64_t n, int64_t k,
    double const* D,
    std::complex<double>* A, int64_t lda,
    int64_t* iseed );

// -----------------------------------------------------------------------------
int64_t lagsy(
    int64_t n, int64_t k,
    float const* D,
    float* A, int64_t lda,
    int64_t* iseed );

int64_t lagsy(
    int64_t n, int64_t k,
    double const* D,
    double* A, int64_t lda,
    int64_t* iseed );

int64_t lagsy(
    int64_t n, int64_t k,
    float const* D,
    std::complex<float>* A, int64_t lda,
    int64_t* iseed );

int64_t lagsy(
    int64_t n, int64_t k,
    double const* D,
    std::complex<double>* A, int64_t lda,
    int64_t* iseed );

// -----------------------------------------------------------------------------
float lange(
    lapack::Norm norm, int64_t m, int64_t n,
    float const* A, int64_t lda );

double lange(
    lapack::Norm norm, int64_t m, int64_t n,
    double const* A, int64_t lda );

float lange(
    lapack::Norm norm, int64_t m, int64_t n,
    std::complex<float> const* A, int64_t lda );

double lange(
    lapack::Norm norm, int64_t m, int64_t n,
    std::complex<double> const* A, int64_t lda );

// -----------------------------------------------------------------------------
float lanhe(
    lapack::Norm norm, lapack::Uplo uplo, int64_t n,
    std::complex<float> const* A, int64_t lda );

double lanhe(
    lapack::Norm norm, lapack::Uplo uplo, int64_t n,
    std::complex<double> const* A, int64_t lda );

// -----------------------------------------------------------------------------
float lansy(
    lapack::Norm norm, lapack::Uplo uplo, int64_t n,
    float const* A, int64_t lda );

double lansy(
    lapack::Norm norm, lapack::Uplo uplo, int64_t n,
    double const* A, int64_t lda );

float lansy(
    lapack::Norm norm, lapack::Uplo uplo, int64_t n,
    std::complex<float> const* A, int64_t lda );

double lansy(
    lapack::Norm norm, lapack::Uplo uplo, int64_t n,
    std::complex<double> const* A, int64_t lda );

// -----------------------------------------------------------------------------
float lantr(
    lapack::Norm norm, lapack::Uplo uplo, lapack::Diag diag, int64_t m, int64_t n,
    float const* A, int64_t lda );

double lantr(
    lapack::Norm norm, lapack::Uplo uplo, lapack::Diag diag, int64_t m, int64_t n,
    double const* A, int64_t lda );

float lantr(
    lapack::Norm norm, lapack::Uplo uplo, lapack::Diag diag, int64_t m, int64_t n,
    std::complex<float> const* A, int64_t lda );

double lantr(
    lapack::Norm norm, lapack::Uplo uplo, lapack::Diag diag, int64_t m, int64_t n,
    std::complex<double> const* A, int64_t lda );

// -----------------------------------------------------------------------------
void lapmr(
    bool forwrd, int64_t m, int64_t n,
    float* X, int64_t ldx,
    int64_t* K );

void lapmr(
    bool forwrd, int64_t m, int64_t n,
    double* X, int64_t ldx,
    int64_t* K );

void lapmr(
    bool forwrd, int64_t m, int64_t n,
    std::complex<float>* X, int64_t ldx,
    int64_t* K );

void lapmr(
    bool forwrd, int64_t m, int64_t n,
    std::complex<double>* X, int64_t ldx,
    int64_t* K );

// -----------------------------------------------------------------------------
void lapmt(
    bool forwrd, int64_t m, int64_t n,
    float* X, int64_t ldx,
    int64_t* K );

void lapmt(
    bool forwrd, int64_t m, int64_t n,
    double* X, int64_t ldx,
    int64_t* K );

void lapmt(
    bool forwrd, int64_t m, int64_t n,
    std::complex<float>* X, int64_t ldx,
    int64_t* K );

void lapmt(
    bool forwrd, int64_t m, int64_t n,
    std::complex<double>* X, int64_t ldx,
    int64_t* K );

// -----------------------------------------------------------------------------
float lapy2(
    float x, float y );

double lapy2(
    double x, double y );

// -----------------------------------------------------------------------------
float lapy3(
    float x, float y, float z );

double lapy3(
    double x, double y, double z );

// -----------------------------------------------------------------------------
void larf(
    lapack::Side side, int64_t m, int64_t n,
    float const* V, int64_t incv, float tau,
    float* C, int64_t ldc );

void larf(
    lapack::Side side, int64_t m, int64_t n,
    double const* V, int64_t incv, double tau,
    double* C, int64_t ldc );

void larf(
    lapack::Side side, int64_t m, int64_t n,
    std::complex<float> const* V, int64_t incv, std::complex<float> tau,
    std::complex<float>* C, int64_t ldc );

void larf(
    lapack::Side side, int64_t m, int64_t n,
    std::complex<double> const* V, int64_t incv, std::complex<double> tau,
    std::complex<double>* C, int64_t ldc );

// -----------------------------------------------------------------------------
void larfb(
    lapack::Side side, lapack::Op trans, lapack::Direct direct, lapack::StoreV storev, int64_t m, int64_t n, int64_t k,
    float const* V, int64_t ldv,
    float const* T, int64_t ldt,
    float* C, int64_t ldc );

void larfb(
    lapack::Side side, lapack::Op trans, lapack::Direct direct, lapack::StoreV storev, int64_t m, int64_t n, int64_t k,
    double const* V, int64_t ldv,
    double const* T, int64_t ldt,
    double* C, int64_t ldc );

void larfb(
    lapack::Side side, lapack::Op trans, lapack::Direct direct, lapack::StoreV storev, int64_t m, int64_t n, int64_t k,
    std::complex<float> const* V, int64_t ldv,
    std::complex<float> const* T, int64_t ldt,
    std::complex<float>* C, int64_t ldc );

void larfb(
    lapack::Side side, lapack::Op trans, lapack::Direct direct, lapack::StoreV storev, int64_t m, int64_t n, int64_t k,
    std::complex<double> const* V, int64_t ldv,
    std::complex<double> const* T, int64_t ldt,
    std::complex<double>* C, int64_t ldc );

// -----------------------------------------------------------------------------
void larfg(
    int64_t n,
    float* alpha,
    float* X, int64_t incx,
    float* tau );

void larfg(
    int64_t n,
    double* alpha,
    double* X, int64_t incx,
    double* tau );

void larfg(
    int64_t n,
    std::complex<float>* alpha,
    std::complex<float>* X, int64_t incx,
    std::complex<float>* tau );

void larfg(
    int64_t n,
    std::complex<double>* alpha,
    std::complex<double>* X, int64_t incx,
    std::complex<double>* tau );

// -----------------------------------------------------------------------------
void larft(
    lapack::Direct direct, lapack::StoreV storev, int64_t n, int64_t k,
    float const* V, int64_t ldv,
    float const* tau,
    float* T, int64_t ldt );

void larft(
    lapack::Direct direct, lapack::StoreV storev, int64_t n, int64_t k,
    double const* V, int64_t ldv,
    double const* tau,
    double* T, int64_t ldt );

void larft(
    lapack::Direct direct, lapack::StoreV storev, int64_t n, int64_t k,
    std::complex<float> const* V, int64_t ldv,
    std::complex<float> const* tau,
    std::complex<float>* T, int64_t ldt );

void larft(
    lapack::Direct direct, lapack::StoreV storev, int64_t n, int64_t k,
    std::complex<double> const* V, int64_t ldv,
    std::complex<double> const* tau,
    std::complex<double>* T, int64_t ldt );

// -----------------------------------------------------------------------------
void larfx(
    lapack::Side side, int64_t m, int64_t n,
    float const* V, float tau,
    float* C, int64_t ldc );

void larfx(
    lapack::Side side, int64_t m, int64_t n,
    double const* V, double tau,
    double* C, int64_t ldc );

void larfx(
    lapack::Side side, int64_t m, int64_t n,
    std::complex<float> const* V, std::complex<float> tau,
    std::complex<float>* C, int64_t ldc );

void larfx(
    lapack::Side side, int64_t m, int64_t n,
    std::complex<double> const* V, std::complex<double> tau,
    std::complex<double>* C, int64_t ldc );

// -----------------------------------------------------------------------------
void larnv(
    int64_t idist,
    int64_t* iseed, int64_t n,
    float* X );

void larnv(
    int64_t idist,
    int64_t* iseed, int64_t n,
    double* X );

void larnv(
    int64_t idist,
    int64_t* iseed, int64_t n,
    std::complex<float>* X );

void larnv(
    int64_t idist,
    int64_t* iseed, int64_t n,
    std::complex<double>* X );

// -----------------------------------------------------------------------------
void lartgp(
    float f, float g,
    float* cs,
    float* sn,
    float* r );

void lartgp(
    double f, double g,
    double* cs,
    double* sn,
    double* r );

// -----------------------------------------------------------------------------
void lartgs(
    float x, float y, float sigma,
    float* cs,
    float* sn );

void lartgs(
    double x, double y, double sigma,
    double* cs,
    double* sn );

// -----------------------------------------------------------------------------
int64_t lascl(
    lapack::MatrixType type, int64_t kl, int64_t ku, float cfrom, float cto, int64_t m, int64_t n,
    float* A, int64_t lda );

int64_t lascl(
    lapack::MatrixType type, int64_t kl, int64_t ku, double cfrom, double cto, int64_t m, int64_t n,
    double* A, int64_t lda );

int64_t lascl(
    lapack::MatrixType type, int64_t kl, int64_t ku, float cfrom, float cto, int64_t m, int64_t n,
    std::complex<float>* A, int64_t lda );

int64_t lascl(
    lapack::MatrixType type, int64_t kl, int64_t ku, double cfrom, double cto, int64_t m, int64_t n,
    std::complex<double>* A, int64_t lda );

// -----------------------------------------------------------------------------
void laset(
    lapack::Uplo uplo, int64_t m, int64_t n, float alpha, float beta,
    float* A, int64_t lda );

void laset(
    lapack::Uplo uplo, int64_t m, int64_t n, double alpha, double beta,
    double* A, int64_t lda );

void laset(
    lapack::Uplo uplo, int64_t m, int64_t n, std::complex<float> alpha, std::complex<float> beta,
    std::complex<float>* A, int64_t lda );

void laset(
    lapack::Uplo uplo, int64_t m, int64_t n, std::complex<double> alpha, std::complex<double> beta,
    std::complex<double>* A, int64_t lda );

// -----------------------------------------------------------------------------
void lassq(
    int64_t n,
    float const* X, int64_t incx,
    float* scale,
    float* sumsq );

void lassq(
    int64_t n,
    double const* X, int64_t incx,
    double* scale,
    double* sumsq );

void lassq(
    int64_t n,
    std::complex<float> const* X, int64_t incx,
    float* scale,
    float* sumsq );

void lassq(
    int64_t n,
    std::complex<double> const* X, int64_t incx,
    double* scale,
    double* sumsq );

// -----------------------------------------------------------------------------
void laswp(
    int64_t n,
    float* A, int64_t lda, int64_t k1, int64_t k2,
    int64_t const* ipiv, int64_t incx );

void laswp(
    int64_t n,
    double* A, int64_t lda, int64_t k1, int64_t k2,
    int64_t const* ipiv, int64_t incx );

void laswp(
    int64_t n,
    std::complex<float>* A, int64_t lda, int64_t k1, int64_t k2,
    int64_t const* ipiv, int64_t incx );

void laswp(
    int64_t n,
    std::complex<double>* A, int64_t lda, int64_t k1, int64_t k2,
    int64_t const* ipiv, int64_t incx );

// -----------------------------------------------------------------------------
int64_t lauum(
    lapack::Uplo uplo, int64_t n,
    float* A, int64_t lda );

int64_t lauum(
    lapack::Uplo uplo, int64_t n,
    double* A, int64_t lda );

int64_t lauum(
    lapack::Uplo uplo, int64_t n,
    std::complex<float>* A, int64_t lda );

int64_t lauum(
    lapack::Uplo uplo, int64_t n,
    std::complex<double>* A, int64_t lda );

// -----------------------------------------------------------------------------
int64_t opgtr(
    lapack::Uplo uplo, int64_t n,
    float const* AP,
    float const* tau,
    float* Q, int64_t ldq );

int64_t opgtr(
    lapack::Uplo uplo, int64_t n,
    double const* AP,
    double const* tau,
    double* Q, int64_t ldq );

// -----------------------------------------------------------------------------
int64_t opmtr(
    lapack::Side side, lapack::Uplo uplo, lapack::Op trans, int64_t m, int64_t n,
    float const* AP,
    float const* tau,
    float* C, int64_t ldc );

int64_t opmtr(
    lapack::Side side, lapack::Uplo uplo, lapack::Op trans, int64_t m, int64_t n,
    double const* AP,
    double const* tau,
    double* C, int64_t ldc );

// -----------------------------------------------------------------------------
int64_t orcsd2by1(
    lapack::JobCS jobu1, lapack::JobCS jobu2, lapack::JobCS jobv1t, int64_t m, int64_t p, int64_t q,
    float* X11, int64_t ldx11,
    float* X21, int64_t ldx21,
    float* theta,
    float* U1, int64_t ldu1,
    float* U2, int64_t ldu2,
    float* V1T, int64_t ldv1t );

int64_t orcsd2by1(
    lapack::JobCS jobu1, lapack::JobCS jobu2, lapack::JobCS jobv1t, int64_t m, int64_t p, int64_t q,
    double* X11, int64_t ldx11,
    double* X21, int64_t ldx21,
    double* theta,
    double* U1, int64_t ldu1,
    double* U2, int64_t ldu2,
    double* V1T, int64_t ldv1t );

// -----------------------------------------------------------------------------
int64_t orgbr(
    lapack::Vect vect, int64_t m, int64_t n, int64_t k,
    float* A, int64_t lda,
    float const* tau );

int64_t orgbr(
    lapack::Vect vect, int64_t m, int64_t n, int64_t k,
    double* A, int64_t lda,
    double const* tau );

// -----------------------------------------------------------------------------
int64_t orghr(
    int64_t n, int64_t ilo, int64_t ihi,
    float* A, int64_t lda,
    float const* tau );

int64_t orghr(
    int64_t n, int64_t ilo, int64_t ihi,
    double* A, int64_t lda,
    double const* tau );

// -----------------------------------------------------------------------------
int64_t orglq(
    int64_t m, int64_t n, int64_t k,
    float* A, int64_t lda,
    float const* tau );

int64_t orglq(
    int64_t m, int64_t n, int64_t k,
    double* A, int64_t lda,
    double const* tau );

// -----------------------------------------------------------------------------
int64_t orgql(
    int64_t m, int64_t n, int64_t k,
    float* A, int64_t lda,
    float const* tau );

int64_t orgql(
    int64_t m, int64_t n, int64_t k,
    double* A, int64_t lda,
    double const* tau );

// -----------------------------------------------------------------------------
int64_t orgqr(
    int64_t m, int64_t n, int64_t k,
    float* A, int64_t lda,
    float const* tau );

int64_t orgqr(
    int64_t m, int64_t n, int64_t k,
    double* A, int64_t lda,
    double const* tau );

// -----------------------------------------------------------------------------
int64_t orgrq(
    int64_t m, int64_t n, int64_t k,
    float* A, int64_t lda,
    float const* tau );

int64_t orgrq(
    int64_t m, int64_t n, int64_t k,
    double* A, int64_t lda,
    double const* tau );

// -----------------------------------------------------------------------------
int64_t orgtr(
    lapack::Uplo uplo, int64_t n,
    float* A, int64_t lda,
    float const* tau );

int64_t orgtr(
    lapack::Uplo uplo, int64_t n,
    double* A, int64_t lda,
    double const* tau );

// -----------------------------------------------------------------------------
int64_t ormbr(
    lapack::Vect vect, lapack::Side side, lapack::Op trans, int64_t m, int64_t n, int64_t k,
    float const* A, int64_t lda,
    float const* tau,
    float* C, int64_t ldc );

int64_t ormbr(
    lapack::Vect vect, lapack::Side side, lapack::Op trans, int64_t m, int64_t n, int64_t k,
    double const* A, int64_t lda,
    double const* tau,
    double* C, int64_t ldc );

// -----------------------------------------------------------------------------
int64_t ormhr(
    lapack::Side side, lapack::Op trans, int64_t m, int64_t n, int64_t ilo, int64_t ihi,
    float const* A, int64_t lda,
    float const* tau,
    float* C, int64_t ldc );

int64_t ormhr(
    lapack::Side side, lapack::Op trans, int64_t m, int64_t n, int64_t ilo, int64_t ihi,
    double const* A, int64_t lda,
    double const* tau,
    double* C, int64_t ldc );

// -----------------------------------------------------------------------------
int64_t ormlq(
    lapack::Side side, lapack::Op trans, int64_t m, int64_t n, int64_t k,
    float const* A, int64_t lda,
    float const* tau,
    float* C, int64_t ldc );

int64_t ormlq(
    lapack::Side side, lapack::Op trans, int64_t m, int64_t n, int64_t k,
    double const* A, int64_t lda,
    double const* tau,
    double* C, int64_t ldc );

// -----------------------------------------------------------------------------
int64_t ormql(
    lapack::Side side, lapack::Op trans, int64_t m, int64_t n, int64_t k,
    float const* A, int64_t lda,
    float const* tau,
    float* C, int64_t ldc );

int64_t ormql(
    lapack::Side side, lapack::Op trans, int64_t m, int64_t n, int64_t k,
    double const* A, int64_t lda,
    double const* tau,
    double* C, int64_t ldc );

// -----------------------------------------------------------------------------
int64_t ormqr(
    lapack::Side side, lapack::Op trans, int64_t m, int64_t n, int64_t k,
    float const* A, int64_t lda,
    float const* tau,
    float* C, int64_t ldc );

int64_t ormqr(
    lapack::Side side, lapack::Op trans, int64_t m, int64_t n, int64_t k,
    double const* A, int64_t lda,
    double const* tau,
    double* C, int64_t ldc );

// -----------------------------------------------------------------------------
int64_t ormrq(
    lapack::Side side, lapack::Op trans, int64_t m, int64_t n, int64_t k,
    float const* A, int64_t lda,
    float const* tau,
    float* C, int64_t ldc );

int64_t ormrq(
    lapack::Side side, lapack::Op trans, int64_t m, int64_t n, int64_t k,
    double const* A, int64_t lda,
    double const* tau,
    double* C, int64_t ldc );

// -----------------------------------------------------------------------------
int64_t ormrz(
    lapack::Side side, lapack::Op trans, int64_t m, int64_t n, int64_t k, int64_t l,
    float const* A, int64_t lda,
    float const* tau,
    float* C, int64_t ldc );

int64_t ormrz(
    lapack::Side side, lapack::Op trans, int64_t m, int64_t n, int64_t k, int64_t l,
    double const* A, int64_t lda,
    double const* tau,
    double* C, int64_t ldc );

// -----------------------------------------------------------------------------
int64_t ormtr(
    lapack::Side side, lapack::Uplo uplo, lapack::Op trans, int64_t m, int64_t n,
    float const* A, int64_t lda,
    float const* tau,
    float* C, int64_t ldc );

int64_t ormtr(
    lapack::Side side, lapack::Uplo uplo, lapack::Op trans, int64_t m, int64_t n,
    double const* A, int64_t lda,
    double const* tau,
    double* C, int64_t ldc );

// -----------------------------------------------------------------------------
int64_t pbcon(
    lapack::Uplo uplo, int64_t n, int64_t kd,
    float const* AB, int64_t ldab, float anorm,
    float* rcond );

int64_t pbcon(
    lapack::Uplo uplo, int64_t n, int64_t kd,
    double const* AB, int64_t ldab, double anorm,
    double* rcond );

int64_t pbcon(
    lapack::Uplo uplo, int64_t n, int64_t kd,
    std::complex<float> const* AB, int64_t ldab, float anorm,
    float* rcond );

int64_t pbcon(
    lapack::Uplo uplo, int64_t n, int64_t kd,
    std::complex<double> const* AB, int64_t ldab, double anorm,
    double* rcond );

// -----------------------------------------------------------------------------
int64_t pbequ(
    lapack::Uplo uplo, int64_t n, int64_t kd,
    float const* AB, int64_t ldab,
    float* S,
    float* scond,
    float* amax );

int64_t pbequ(
    lapack::Uplo uplo, int64_t n, int64_t kd,
    double const* AB, int64_t ldab,
    double* S,
    double* scond,
    double* amax );

int64_t pbequ(
    lapack::Uplo uplo, int64_t n, int64_t kd,
    std::complex<float> const* AB, int64_t ldab,
    float* S,
    float* scond,
    float* amax );

int64_t pbequ(
    lapack::Uplo uplo, int64_t n, int64_t kd,
    std::complex<double> const* AB, int64_t ldab,
    double* S,
    double* scond,
    double* amax );

// -----------------------------------------------------------------------------
int64_t pbrfs(
    lapack::Uplo uplo, int64_t n, int64_t kd, int64_t nrhs,
    float const* AB, int64_t ldab,
    float const* AFB, int64_t ldafb,
    float const* B, int64_t ldb,
    float* X, int64_t ldx,
    float* ferr,
    float* berr );

int64_t pbrfs(
    lapack::Uplo uplo, int64_t n, int64_t kd, int64_t nrhs,
    double const* AB, int64_t ldab,
    double const* AFB, int64_t ldafb,
    double const* B, int64_t ldb,
    double* X, int64_t ldx,
    double* ferr,
    double* berr );

int64_t pbrfs(
    lapack::Uplo uplo, int64_t n, int64_t kd, int64_t nrhs,
    std::complex<float> const* AB, int64_t ldab,
    std::complex<float> const* AFB, int64_t ldafb,
    std::complex<float> const* B, int64_t ldb,
    std::complex<float>* X, int64_t ldx,
    float* ferr,
    float* berr );

int64_t pbrfs(
    lapack::Uplo uplo, int64_t n, int64_t kd, int64_t nrhs,
    std::complex<double> const* AB, int64_t ldab,
    std::complex<double> const* AFB, int64_t ldafb,
    std::complex<double> const* B, int64_t ldb,
    std::complex<double>* X, int64_t ldx,
    double* ferr,
    double* berr );

// -----------------------------------------------------------------------------
int64_t pbstf(
    lapack::Uplo uplo, int64_t n, int64_t kd,
    float* AB, int64_t ldab );

int64_t pbstf(
    lapack::Uplo uplo, int64_t n, int64_t kd,
    double* AB, int64_t ldab );

int64_t pbstf(
    lapack::Uplo uplo, int64_t n, int64_t kd,
    std::complex<float>* AB, int64_t ldab );

int64_t pbstf(
    lapack::Uplo uplo, int64_t n, int64_t kd,
    std::complex<double>* AB, int64_t ldab );

// -----------------------------------------------------------------------------
int64_t pbsv(
    lapack::Uplo uplo, int64_t n, int64_t kd, int64_t nrhs,
    float* AB, int64_t ldab,
    float* B, int64_t ldb );

int64_t pbsv(
    lapack::Uplo uplo, int64_t n, int64_t kd, int64_t nrhs,
    double* AB, int64_t ldab,
    double* B, int64_t ldb );

int64_t pbsv(
    lapack::Uplo uplo, int64_t n, int64_t kd, int64_t nrhs,
    std::complex<float>* AB, int64_t ldab,
    std::complex<float>* B, int64_t ldb );

int64_t pbsv(
    lapack::Uplo uplo, int64_t n, int64_t kd, int64_t nrhs,
    std::complex<double>* AB, int64_t ldab,
    std::complex<double>* B, int64_t ldb );

// -----------------------------------------------------------------------------
int64_t pbtrf(
    lapack::Uplo uplo, int64_t n, int64_t kd,
    float* AB, int64_t ldab );

int64_t pbtrf(
    lapack::Uplo uplo, int64_t n, int64_t kd,
    double* AB, int64_t ldab );

int64_t pbtrf(
    lapack::Uplo uplo, int64_t n, int64_t kd,
    std::complex<float>* AB, int64_t ldab );

int64_t pbtrf(
    lapack::Uplo uplo, int64_t n, int64_t kd,
    std::complex<double>* AB, int64_t ldab );

// -----------------------------------------------------------------------------
int64_t pbtrs(
    lapack::Uplo uplo, int64_t n, int64_t kd, int64_t nrhs,
    float const* AB, int64_t ldab,
    float* B, int64_t ldb );

int64_t pbtrs(
    lapack::Uplo uplo, int64_t n, int64_t kd, int64_t nrhs,
    double const* AB, int64_t ldab,
    double* B, int64_t ldb );

int64_t pbtrs(
    lapack::Uplo uplo, int64_t n, int64_t kd, int64_t nrhs,
    std::complex<float> const* AB, int64_t ldab,
    std::complex<float>* B, int64_t ldb );

int64_t pbtrs(
    lapack::Uplo uplo, int64_t n, int64_t kd, int64_t nrhs,
    std::complex<double> const* AB, int64_t ldab,
    std::complex<double>* B, int64_t ldb );

// -----------------------------------------------------------------------------
int64_t pftrf(
    lapack::Op transr, lapack::Uplo uplo, int64_t n,
    float* A );

int64_t pftrf(
    lapack::Op transr, lapack::Uplo uplo, int64_t n,
    double* A );

int64_t pftrf(
    lapack::Op transr, lapack::Uplo uplo, int64_t n,
    std::complex<float>* A );

int64_t pftrf(
    lapack::Op transr, lapack::Uplo uplo, int64_t n,
    std::complex<double>* A );

// -----------------------------------------------------------------------------
int64_t pftri(
    lapack::Op transr, lapack::Uplo uplo, int64_t n,
    float* A );

int64_t pftri(
    lapack::Op transr, lapack::Uplo uplo, int64_t n,
    double* A );

int64_t pftri(
    lapack::Op transr, lapack::Uplo uplo, int64_t n,
    std::complex<float>* A );

int64_t pftri(
    lapack::Op transr, lapack::Uplo uplo, int64_t n,
    std::complex<double>* A );

// -----------------------------------------------------------------------------
int64_t pftrs(
    lapack::Op transr, lapack::Uplo uplo, int64_t n, int64_t nrhs,
    float const* A,
    float* B, int64_t ldb );

int64_t pftrs(
    lapack::Op transr, lapack::Uplo uplo, int64_t n, int64_t nrhs,
    double const* A,
    double* B, int64_t ldb );

int64_t pftrs(
    lapack::Op transr, lapack::Uplo uplo, int64_t n, int64_t nrhs,
    std::complex<float> const* A,
    std::complex<float>* B, int64_t ldb );

int64_t pftrs(
    lapack::Op transr, lapack::Uplo uplo, int64_t n, int64_t nrhs,
    std::complex<double> const* A,
    std::complex<double>* B, int64_t ldb );

// -----------------------------------------------------------------------------
int64_t pocon(
    lapack::Uplo uplo, int64_t n,
    float const* A, int64_t lda, float anorm,
    float* rcond );

int64_t pocon(
    lapack::Uplo uplo, int64_t n,
    double const* A, int64_t lda, double anorm,
    double* rcond );

int64_t pocon(
    lapack::Uplo uplo, int64_t n,
    std::complex<float> const* A, int64_t lda, float anorm,
    float* rcond );

int64_t pocon(
    lapack::Uplo uplo, int64_t n,
    std::complex<double> const* A, int64_t lda, double anorm,
    double* rcond );

// -----------------------------------------------------------------------------
int64_t poequ(
    int64_t n,
    float const* A, int64_t lda,
    float* S,
    float* scond,
    float* amax );

int64_t poequ(
    int64_t n,
    double const* A, int64_t lda,
    double* S,
    double* scond,
    double* amax );

int64_t poequ(
    int64_t n,
    std::complex<float> const* A, int64_t lda,
    float* S,
    float* scond,
    float* amax );

int64_t poequ(
    int64_t n,
    std::complex<double> const* A, int64_t lda,
    double* S,
    double* scond,
    double* amax );

// -----------------------------------------------------------------------------
int64_t poequb(
    int64_t n,
    float const* A, int64_t lda,
    float* S,
    float* scond,
    float* amax );

int64_t poequb(
    int64_t n,
    double const* A, int64_t lda,
    double* S,
    double* scond,
    double* amax );

int64_t poequb(
    int64_t n,
    std::complex<float> const* A, int64_t lda,
    float* S,
    float* scond,
    float* amax );

int64_t poequb(
    int64_t n,
    std::complex<double> const* A, int64_t lda,
    double* S,
    double* scond,
    double* amax );

// -----------------------------------------------------------------------------
int64_t porfs(
    lapack::Uplo uplo, int64_t n, int64_t nrhs,
    float const* A, int64_t lda,
    float const* AF, int64_t ldaf,
    float const* B, int64_t ldb,
    float* X, int64_t ldx,
    float* ferr,
    float* berr );

int64_t porfs(
    lapack::Uplo uplo, int64_t n, int64_t nrhs,
    double const* A, int64_t lda,
    double const* AF, int64_t ldaf,
    double const* B, int64_t ldb,
    double* X, int64_t ldx,
    double* ferr,
    double* berr );

int64_t porfs(
    lapack::Uplo uplo, int64_t n, int64_t nrhs,
    std::complex<float> const* A, int64_t lda,
    std::complex<float> const* AF, int64_t ldaf,
    std::complex<float> const* B, int64_t ldb,
    std::complex<float>* X, int64_t ldx,
    float* ferr,
    float* berr );

int64_t porfs(
    lapack::Uplo uplo, int64_t n, int64_t nrhs,
    std::complex<double> const* A, int64_t lda,
    std::complex<double> const* AF, int64_t ldaf,
    std::complex<double> const* B, int64_t ldb,
    std::complex<double>* X, int64_t ldx,
    double* ferr,
    double* berr );

// -----------------------------------------------------------------------------
int64_t porfsx(
    lapack::Uplo uplo, lapack::Equed equed, int64_t n, int64_t nrhs,
    float const* A, int64_t lda,
    float const* AF, int64_t ldaf,
    float* S,
    float const* B, int64_t ldb,
    float* X, int64_t ldx,
    float* rcond,
    float* berr, int64_t n_err_bnds,
    float* err_bnds_norm,
    float* err_bnds_comp, int64_t nparams,
    float* params );

int64_t porfsx(
    lapack::Uplo uplo, lapack::Equed equed, int64_t n, int64_t nrhs,
    double const* A, int64_t lda,
    double const* AF, int64_t ldaf,
    double* S,
    double const* B, int64_t ldb,
    double* X, int64_t ldx,
    double* rcond,
    double* berr, int64_t n_err_bnds,
    double* err_bnds_norm,
    double* err_bnds_comp, int64_t nparams,
    double* params );

int64_t porfsx(
    lapack::Uplo uplo, lapack::Equed equed, int64_t n, int64_t nrhs,
    std::complex<float> const* A, int64_t lda,
    std::complex<float> const* AF, int64_t ldaf,
    float* S,
    std::complex<float> const* B, int64_t ldb,
    std::complex<float>* X, int64_t ldx,
    float* rcond,
    float* berr, int64_t n_err_bnds,
    float* err_bnds_norm,
    float* err_bnds_comp, int64_t nparams,
    float* params );

int64_t porfsx(
    lapack::Uplo uplo, lapack::Equed equed, int64_t n, int64_t nrhs,
    std::complex<double> const* A, int64_t lda,
    std::complex<double> const* AF, int64_t ldaf,
    double* S,
    std::complex<double> const* B, int64_t ldb,
    std::complex<double>* X, int64_t ldx,
    double* rcond,
    double* berr, int64_t n_err_bnds,
    double* err_bnds_norm,
    double* err_bnds_comp, int64_t nparams,
    double* params );

// -----------------------------------------------------------------------------
int64_t posv(
    lapack::Uplo uplo, int64_t n, int64_t nrhs,
    float* A, int64_t lda,
    float* B, int64_t ldb );

int64_t posv(
    lapack::Uplo uplo, int64_t n, int64_t nrhs,
    double* A, int64_t lda,
    double* B, int64_t ldb );

int64_t posv(
    lapack::Uplo uplo, int64_t n, int64_t nrhs,
    std::complex<float>* A, int64_t lda,
    std::complex<float>* B, int64_t ldb );

int64_t posv(
    lapack::Uplo uplo, int64_t n, int64_t nrhs,
    std::complex<double>* A, int64_t lda,
    std::complex<double>* B, int64_t ldb );

int64_t posv(
    lapack::Uplo uplo, int64_t n, int64_t nrhs,
    double* A, int64_t lda,
    double const* B, int64_t ldb,
    double* X, int64_t ldx,
    int64_t* iter );

int64_t posv(
    lapack::Uplo uplo, int64_t n, int64_t nrhs,
    std::complex<double>* A, int64_t lda,
    std::complex<double> const* B, int64_t ldb,
    std::complex<double>* X, int64_t ldx,
    int64_t* iter );

// -----------------------------------------------------------------------------
int64_t potf2(
    lapack::Uplo uplo, int64_t n,
    float* A, int64_t lda );

int64_t potf2(
    lapack::Uplo uplo, int64_t n,
    double* A, int64_t lda );

int64_t potf2(
    lapack::Uplo uplo, int64_t n,
    std::complex<float>* A, int64_t lda );

int64_t potf2(
    lapack::Uplo uplo, int64_t n,
    std::complex<double>* A, int64_t lda );

// -----------------------------------------------------------------------------
int64_t potrf(
    lapack::Uplo uplo, int64_t n,
    float* A, int64_t lda );

int64_t potrf(
    lapack::Uplo uplo, int64_t n,
    double* A, int64_t lda );

int64_t potrf(
    lapack::Uplo uplo, int64_t n,
    std::complex<float>* A, int64_t lda );

int64_t potrf(
    lapack::Uplo uplo, int64_t n,
    std::complex<double>* A, int64_t lda );

// -----------------------------------------------------------------------------
int64_t potrf2(
    lapack::Uplo uplo, int64_t n,
    float* A, int64_t lda );

int64_t potrf2(
    lapack::Uplo uplo, int64_t n,
    double* A, int64_t lda );

int64_t potrf2(
    lapack::Uplo uplo, int64_t n,
    std::complex<float>* A, int64_t lda );

int64_t potrf2(
    lapack::Uplo uplo, int64_t n,
    std::complex<double>* A, int64_t lda );

// -----------------------------------------------------------------------------
int64_t potri(
    lapack::Uplo uplo, int64_t n,
    float* A, int64_t lda );

int64_t potri(
    lapack::Uplo uplo, int64_t n,
    double* A, int64_t lda );

int64_t potri(
    lapack::Uplo uplo, int64_t n,
    std::complex<float>* A, int64_t lda );

int64_t potri(
    lapack::Uplo uplo, int64_t n,
    std::complex<double>* A, int64_t lda );

// -----------------------------------------------------------------------------
int64_t potrs(
    lapack::Uplo uplo, int64_t n, int64_t nrhs,
    float const* A, int64_t lda,
    float* B, int64_t ldb );

int64_t potrs(
    lapack::Uplo uplo, int64_t n, int64_t nrhs,
    double const* A, int64_t lda,
    double* B, int64_t ldb );

int64_t potrs(
    lapack::Uplo uplo, int64_t n, int64_t nrhs,
    std::complex<float> const* A, int64_t lda,
    std::complex<float>* B, int64_t ldb );

int64_t potrs(
    lapack::Uplo uplo, int64_t n, int64_t nrhs,
    std::complex<double> const* A, int64_t lda,
    std::complex<double>* B, int64_t ldb );

// -----------------------------------------------------------------------------
int64_t ppcon(
    lapack::Uplo uplo, int64_t n,
    float const* AP, float anorm,
    float* rcond );

int64_t ppcon(
    lapack::Uplo uplo, int64_t n,
    double const* AP, double anorm,
    double* rcond );

int64_t ppcon(
    lapack::Uplo uplo, int64_t n,
    std::complex<float> const* AP, float anorm,
    float* rcond );

int64_t ppcon(
    lapack::Uplo uplo, int64_t n,
    std::complex<double> const* AP, double anorm,
    double* rcond );

// -----------------------------------------------------------------------------
int64_t ppequ(
    lapack::Uplo uplo, int64_t n,
    float const* AP,
    float* S,
    float* scond,
    float* amax );

int64_t ppequ(
    lapack::Uplo uplo, int64_t n,
    double const* AP,
    double* S,
    double* scond,
    double* amax );

int64_t ppequ(
    lapack::Uplo uplo, int64_t n,
    std::complex<float> const* AP,
    float* S,
    float* scond,
    float* amax );

int64_t ppequ(
    lapack::Uplo uplo, int64_t n,
    std::complex<double> const* AP,
    double* S,
    double* scond,
    double* amax );

// -----------------------------------------------------------------------------
int64_t pprfs(
    lapack::Uplo uplo, int64_t n, int64_t nrhs,
    float const* AP,
    float const* AFP,
    float const* B, int64_t ldb,
    float* X, int64_t ldx,
    float* ferr,
    float* berr );

int64_t pprfs(
    lapack::Uplo uplo, int64_t n, int64_t nrhs,
    double const* AP,
    double const* AFP,
    double const* B, int64_t ldb,
    double* X, int64_t ldx,
    double* ferr,
    double* berr );

int64_t pprfs(
    lapack::Uplo uplo, int64_t n, int64_t nrhs,
    std::complex<float> const* AP,
    std::complex<float> const* AFP,
    std::complex<float> const* B, int64_t ldb,
    std::complex<float>* X, int64_t ldx,
    float* ferr,
    float* berr );

int64_t pprfs(
    lapack::Uplo uplo, int64_t n, int64_t nrhs,
    std::complex<double> const* AP,
    std::complex<double> const* AFP,
    std::complex<double> const* B, int64_t ldb,
    std::complex<double>* X, int64_t ldx,
    double* ferr,
    double* berr );

// -----------------------------------------------------------------------------
int64_t ppsv(
    lapack::Uplo uplo, int64_t n, int64_t nrhs,
    float* AP,
    float* B, int64_t ldb );

int64_t ppsv(
    lapack::Uplo uplo, int64_t n, int64_t nrhs,
    double* AP,
    double* B, int64_t ldb );

int64_t ppsv(
    lapack::Uplo uplo, int64_t n, int64_t nrhs,
    std::complex<float>* AP,
    std::complex<float>* B, int64_t ldb );

int64_t ppsv(
    lapack::Uplo uplo, int64_t n, int64_t nrhs,
    std::complex<double>* AP,
    std::complex<double>* B, int64_t ldb );

// -----------------------------------------------------------------------------
int64_t pptrf(
    lapack::Uplo uplo, int64_t n,
    float* AP );

int64_t pptrf(
    lapack::Uplo uplo, int64_t n,
    double* AP );

int64_t pptrf(
    lapack::Uplo uplo, int64_t n,
    std::complex<float>* AP );

int64_t pptrf(
    lapack::Uplo uplo, int64_t n,
    std::complex<double>* AP );

// -----------------------------------------------------------------------------
int64_t pptri(
    lapack::Uplo uplo, int64_t n,
    float* AP );

int64_t pptri(
    lapack::Uplo uplo, int64_t n,
    double* AP );

int64_t pptri(
    lapack::Uplo uplo, int64_t n,
    std::complex<float>* AP );

int64_t pptri(
    lapack::Uplo uplo, int64_t n,
    std::complex<double>* AP );

// -----------------------------------------------------------------------------
int64_t pptrs(
    lapack::Uplo uplo, int64_t n, int64_t nrhs,
    float const* AP,
    float* B, int64_t ldb );

int64_t pptrs(
    lapack::Uplo uplo, int64_t n, int64_t nrhs,
    double const* AP,
    double* B, int64_t ldb );

int64_t pptrs(
    lapack::Uplo uplo, int64_t n, int64_t nrhs,
    std::complex<float> const* AP,
    std::complex<float>* B, int64_t ldb );

int64_t pptrs(
    lapack::Uplo uplo, int64_t n, int64_t nrhs,
    std::complex<double> const* AP,
    std::complex<double>* B, int64_t ldb );

// -----------------------------------------------------------------------------
int64_t pstrf(
    lapack::Uplo uplo, int64_t n,
    float* A, int64_t lda,
    int64_t* piv,
    int64_t* rank, float tol );

int64_t pstrf(
    lapack::Uplo uplo, int64_t n,
    double* A, int64_t lda,
    int64_t* piv,
    int64_t* rank, double tol );

int64_t pstrf(
    lapack::Uplo uplo, int64_t n,
    std::complex<float>* A, int64_t lda,
    int64_t* piv,
    int64_t* rank, float tol );

int64_t pstrf(
    lapack::Uplo uplo, int64_t n,
    std::complex<double>* A, int64_t lda,
    int64_t* piv,
    int64_t* rank, double tol );

// -----------------------------------------------------------------------------
int64_t ptcon(
    int64_t n,
    float const* D,
    float const* E, float anorm,
    float* rcond );

int64_t ptcon(
    int64_t n,
    double const* D,
    double const* E, double anorm,
    double* rcond );

int64_t ptcon(
    int64_t n,
    float const* D,
    std::complex<float> const* E, float anorm,
    float* rcond );

int64_t ptcon(
    int64_t n,
    double const* D,
    std::complex<double> const* E, double anorm,
    double* rcond );

// -----------------------------------------------------------------------------
int64_t pteqr(
    lapack::CompQ compz, int64_t n,
    float* D,
    float* E,
    float* Z, int64_t ldz );

int64_t pteqr(
    lapack::CompQ compz, int64_t n,
    double* D,
    double* E,
    double* Z, int64_t ldz );

int64_t pteqr(
    lapack::CompQ compz, int64_t n,
    float* D,
    float* E,
    std::complex<float>* Z, int64_t ldz );

int64_t pteqr(
    lapack::CompQ compz, int64_t n,
    double* D,
    double* E,
    std::complex<double>* Z, int64_t ldz );

// -----------------------------------------------------------------------------
int64_t ptrfs(
    int64_t n, int64_t nrhs,
    float const* D,
    float const* E,
    float const* DF,
    float const* EF,
    float const* B, int64_t ldb,
    float* X, int64_t ldx,
    float* ferr,
    float* berr );

int64_t ptrfs(
    int64_t n, int64_t nrhs,
    double const* D,
    double const* E,
    double const* DF,
    double const* EF,
    double const* B, int64_t ldb,
    double* X, int64_t ldx,
    double* ferr,
    double* berr );

int64_t ptrfs(
    lapack::Uplo uplo, int64_t n, int64_t nrhs,
    float const* D,
    std::complex<float> const* E,
    float const* DF,
    std::complex<float> const* EF,
    std::complex<float> const* B, int64_t ldb,
    std::complex<float>* X, int64_t ldx,
    float* ferr,
    float* berr );

int64_t ptrfs(
    lapack::Uplo uplo, int64_t n, int64_t nrhs,
    double const* D,
    std::complex<double> const* E,
    double const* DF,
    std::complex<double> const* EF,
    std::complex<double> const* B, int64_t ldb,
    std::complex<double>* X, int64_t ldx,
    double* ferr,
    double* berr );

// -----------------------------------------------------------------------------
int64_t ptsv(
    int64_t n, int64_t nrhs,
    float* D,
    float* E,
    float* B, int64_t ldb );

int64_t ptsv(
    int64_t n, int64_t nrhs,
    double* D,
    double* E,
    double* B, int64_t ldb );

int64_t ptsv(
    int64_t n, int64_t nrhs,
    float* D,
    std::complex<float>* E,
    std::complex<float>* B, int64_t ldb );

int64_t ptsv(
    int64_t n, int64_t nrhs,
    double* D,
    std::complex<double>* E,
    std::complex<double>* B, int64_t ldb );

// -----------------------------------------------------------------------------
int64_t ptsvx(
    lapack::Factored fact, int64_t n, int64_t nrhs,
    float const* D,
    float const* E,
    float* DF,
    float* EF,
    float const* B, int64_t ldb,
    float* X, int64_t ldx,
    float* rcond,
    float* ferr,
    float* berr );

int64_t ptsvx(
    lapack::Factored fact, int64_t n, int64_t nrhs,
    double const* D,
    double const* E,
    double* DF,
    double* EF,
    double const* B, int64_t ldb,
    double* X, int64_t ldx,
    double* rcond,
    double* ferr,
    double* berr );

int64_t ptsvx(
    lapack::Factored fact, int64_t n, int64_t nrhs,
    float const* D,
    std::complex<float> const* E,
    float* DF,
    std::complex<float>* EF,
    std::complex<float> const* B, int64_t ldb,
    std::complex<float>* X, int64_t ldx,
    float* rcond,
    float* ferr,
    float* berr );

int64_t ptsvx(
    lapack::Factored fact, int64_t n, int64_t nrhs,
    double const* D,
    std::complex<double> const* E,
    double* DF,
    std::complex<double>* EF,
    std::complex<double> const* B, int64_t ldb,
    std::complex<double>* X, int64_t ldx,
    double* rcond,
    double* ferr,
    double* berr );

// -----------------------------------------------------------------------------
int64_t pttrf(
    int64_t n,
    float* D,
    float* E );

int64_t pttrf(
    int64_t n,
    double* D,
    double* E );

int64_t pttrf(
    int64_t n,
    float* D,
    std::complex<float>* E );

int64_t pttrf(
    int64_t n,
    double* D,
    std::complex<double>* E );

// -----------------------------------------------------------------------------
int64_t pttrs(
    int64_t n, int64_t nrhs,
    float const* D,
    float const* E,
    float* B, int64_t ldb );

int64_t pttrs(
    int64_t n, int64_t nrhs,
    double const* D,
    double const* E,
    double* B, int64_t ldb );

int64_t pttrs(
    lapack::Uplo uplo, int64_t n, int64_t nrhs,
    float const* D,
    std::complex<float> const* E,
    std::complex<float>* B, int64_t ldb );

int64_t pttrs(
    lapack::Uplo uplo, int64_t n, int64_t nrhs,
    double const* D,
    std::complex<double> const* E,
    std::complex<double>* B, int64_t ldb );

// -----------------------------------------------------------------------------
int64_t sbev(
    lapack::Job jobz, lapack::Uplo uplo, int64_t n, int64_t kd,
    float* AB, int64_t ldab,
    float* W,
    float* Z, int64_t ldz );

int64_t sbev(
    lapack::Job jobz, lapack::Uplo uplo, int64_t n, int64_t kd,
    double* AB, int64_t ldab,
    double* W,
    double* Z, int64_t ldz );

// -----------------------------------------------------------------------------
int64_t sbev_2stage(
    lapack::Job jobz, lapack::Uplo uplo, int64_t n, int64_t kd,
    float* AB, int64_t ldab,
    float* W,
    float* Z, int64_t ldz );

int64_t sbev_2stage(
    lapack::Job jobz, lapack::Uplo uplo, int64_t n, int64_t kd,
    double* AB, int64_t ldab,
    double* W,
    double* Z, int64_t ldz );

// -----------------------------------------------------------------------------
int64_t sbevd(
    lapack::Job jobz, lapack::Uplo uplo, int64_t n, int64_t kd,
    float* AB, int64_t ldab,
    float* W,
    float* Z, int64_t ldz );

int64_t sbevd(
    lapack::Job jobz, lapack::Uplo uplo, int64_t n, int64_t kd,
    double* AB, int64_t ldab,
    double* W,
    double* Z, int64_t ldz );

// -----------------------------------------------------------------------------
int64_t sbevd_2stage(
    lapack::Job jobz, lapack::Uplo uplo, int64_t n, int64_t kd,
    float* AB, int64_t ldab,
    float* W,
    float* Z, int64_t ldz );

int64_t sbevd_2stage(
    lapack::Job jobz, lapack::Uplo uplo, int64_t n, int64_t kd,
    double* AB, int64_t ldab,
    double* W,
    double* Z, int64_t ldz );

// -----------------------------------------------------------------------------
int64_t sbevx(
    lapack::Job jobz, lapack::Range range, lapack::Uplo uplo, int64_t n, int64_t kd,
    float* AB, int64_t ldab,
    float* Q, int64_t ldq, float vl, float vu, int64_t il, int64_t iu, float abstol,
    int64_t* m,
    float* W,
    float* Z, int64_t ldz,
    int64_t* ifail );

int64_t sbevx(
    lapack::Job jobz, lapack::Range range, lapack::Uplo uplo, int64_t n, int64_t kd,
    double* AB, int64_t ldab,
    double* Q, int64_t ldq, double vl, double vu, int64_t il, int64_t iu, double abstol,
    int64_t* m,
    double* W,
    double* Z, int64_t ldz,
    int64_t* ifail );

// -----------------------------------------------------------------------------
int64_t sbevx_2stage(
    lapack::Job jobz, lapack::Range range, lapack::Uplo uplo, int64_t n, int64_t kd,
    float* AB, int64_t ldab,
    float* Q, int64_t ldq, float vl, float vu, int64_t il, int64_t iu, float abstol,
    int64_t* m,
    float* W,
    float* Z, int64_t ldz,
    int64_t* ifail );

int64_t sbevx_2stage(
    lapack::Job jobz, lapack::Range range, lapack::Uplo uplo, int64_t n, int64_t kd,
    double* AB, int64_t ldab,
    double* Q, int64_t ldq, double vl, double vu, int64_t il, int64_t iu, double abstol,
    int64_t* m,
    double* W,
    double* Z, int64_t ldz,
    int64_t* ifail );

// -----------------------------------------------------------------------------
int64_t sbgst(
    lapack::Vect vect, lapack::Uplo uplo, int64_t n, int64_t ka, int64_t kb,
    float* AB, int64_t ldab,
    float const* BB, int64_t ldbb,
    float* X, int64_t ldx );

int64_t sbgst(
    lapack::Vect vect, lapack::Uplo uplo, int64_t n, int64_t ka, int64_t kb,
    double* AB, int64_t ldab,
    double const* BB, int64_t ldbb,
    double* X, int64_t ldx );

// -----------------------------------------------------------------------------
int64_t sbgv(
    lapack::Job jobz, lapack::Uplo uplo, int64_t n, int64_t ka, int64_t kb,
    float* AB, int64_t ldab,
    float* BB, int64_t ldbb,
    float* W,
    float* Z, int64_t ldz );

int64_t sbgv(
    lapack::Job jobz, lapack::Uplo uplo, int64_t n, int64_t ka, int64_t kb,
    double* AB, int64_t ldab,
    double* BB, int64_t ldbb,
    double* W,
    double* Z, int64_t ldz );

// -----------------------------------------------------------------------------
int64_t sbgvd(
    lapack::Job jobz, lapack::Uplo uplo, int64_t n, int64_t ka, int64_t kb,
    float* AB, int64_t ldab,
    float* BB, int64_t ldbb,
    float* W,
    float* Z, int64_t ldz );

int64_t sbgvd(
    lapack::Job jobz, lapack::Uplo uplo, int64_t n, int64_t ka, int64_t kb,
    double* AB, int64_t ldab,
    double* BB, int64_t ldbb,
    double* W,
    double* Z, int64_t ldz );

// -----------------------------------------------------------------------------
int64_t sbgvx(
    lapack::Job jobz, lapack::Range range, lapack::Uplo uplo, int64_t n, int64_t ka, int64_t kb,
    float* AB, int64_t ldab,
    float* BB, int64_t ldbb,
    float* Q, int64_t ldq, float vl, float vu, int64_t il, int64_t iu, float abstol,
    int64_t* m,
    float* W,
    float* Z, int64_t ldz,
    int64_t* ifail );

int64_t sbgvx(
    lapack::Job jobz, lapack::Range range, lapack::Uplo uplo, int64_t n, int64_t ka, int64_t kb,
    double* AB, int64_t ldab,
    double* BB, int64_t ldbb,
    double* Q, int64_t ldq, double vl, double vu, int64_t il, int64_t iu, double abstol,
    int64_t* m,
    double* W,
    double* Z, int64_t ldz,
    int64_t* ifail );

// -----------------------------------------------------------------------------
int64_t sbtrd(
    lapack::Vect vect, lapack::Uplo uplo, int64_t n, int64_t kd,
    float* AB, int64_t ldab,
    float* D,
    float* E,
    float* Q, int64_t ldq );

int64_t sbtrd(
    lapack::Vect vect, lapack::Uplo uplo, int64_t n, int64_t kd,
    double* AB, int64_t ldab,
    double* D,
    double* E,
    double* Q, int64_t ldq );

// -----------------------------------------------------------------------------
void sfrk(
    lapack::Op transr, lapack::Uplo uplo, lapack::Op trans, int64_t n, int64_t k, float alpha,
    float const* A, int64_t lda, float beta,
    float* C );

void sfrk(
    lapack::Op transr, lapack::Uplo uplo, lapack::Op trans, int64_t n, int64_t k, double alpha,
    double const* A, int64_t lda, double beta,
    double* C );

// -----------------------------------------------------------------------------
int64_t spcon(
    lapack::Uplo uplo, int64_t n,
    float const* AP,
    int64_t const* ipiv, float anorm,
    float* rcond );

int64_t spcon(
    lapack::Uplo uplo, int64_t n,
    double const* AP,
    int64_t const* ipiv, double anorm,
    double* rcond );

int64_t spcon(
    lapack::Uplo uplo, int64_t n,
    std::complex<float> const* AP,
    int64_t const* ipiv, float anorm,
    float* rcond );

int64_t spcon(
    lapack::Uplo uplo, int64_t n,
    std::complex<double> const* AP,
    int64_t const* ipiv, double anorm,
    double* rcond );

// -----------------------------------------------------------------------------
int64_t spev(
    lapack::Job jobz, lapack::Uplo uplo, int64_t n,
    float* AP,
    float* W,
    float* Z, int64_t ldz );

int64_t spev(
    lapack::Job jobz, lapack::Uplo uplo, int64_t n,
    double* AP,
    double* W,
    double* Z, int64_t ldz );

// -----------------------------------------------------------------------------
int64_t spevd(
    lapack::Job jobz, lapack::Uplo uplo, int64_t n,
    float* AP,
    float* W,
    float* Z, int64_t ldz );

int64_t spevd(
    lapack::Job jobz, lapack::Uplo uplo, int64_t n,
    double* AP,
    double* W,
    double* Z, int64_t ldz );

// -----------------------------------------------------------------------------
int64_t spevx(
    lapack::Job jobz, lapack::Range range, lapack::Uplo uplo, int64_t n,
    float* AP, float vl, float vu, int64_t il, int64_t iu, float abstol,
    int64_t* m,
    float* W,
    float* Z, int64_t ldz,
    int64_t* ifail );

int64_t spevx(
    lapack::Job jobz, lapack::Range range, lapack::Uplo uplo, int64_t n,
    double* AP, double vl, double vu, int64_t il, int64_t iu, double abstol,
    int64_t* m,
    double* W,
    double* Z, int64_t ldz,
    int64_t* ifail );

// -----------------------------------------------------------------------------
int64_t spgst(
    int64_t itype, lapack::Uplo uplo, int64_t n,
    float* AP,
    float const* BP );

int64_t spgst(
    int64_t itype, lapack::Uplo uplo, int64_t n,
    double* AP,
    double const* BP );

// -----------------------------------------------------------------------------
int64_t spgv(
    int64_t itype, lapack::Job jobz, lapack::Uplo uplo, int64_t n,
    float* AP,
    float* BP,
    float* W,
    float* Z, int64_t ldz );

int64_t spgv(
    int64_t itype, lapack::Job jobz, lapack::Uplo uplo, int64_t n,
    double* AP,
    double* BP,
    double* W,
    double* Z, int64_t ldz );

// -----------------------------------------------------------------------------
int64_t spgvd(
    int64_t itype, lapack::Job jobz, lapack::Uplo uplo, int64_t n,
    float* AP,
    float* BP,
    float* W,
    float* Z, int64_t ldz );

int64_t spgvd(
    int64_t itype, lapack::Job jobz, lapack::Uplo uplo, int64_t n,
    double* AP,
    double* BP,
    double* W,
    double* Z, int64_t ldz );

// -----------------------------------------------------------------------------
int64_t spgvx(
    int64_t itype, lapack::Job jobz, lapack::Range range, lapack::Uplo uplo, int64_t n,
    float* AP,
    float* BP, float vl, float vu, int64_t il, int64_t iu, float abstol,
    int64_t* m,
    float* W,
    float* Z, int64_t ldz,
    int64_t* ifail );

int64_t spgvx(
    int64_t itype, lapack::Job jobz, lapack::Range range, lapack::Uplo uplo, int64_t n,
    double* AP,
    double* BP, double vl, double vu, int64_t il, int64_t iu, double abstol,
    int64_t* m,
    double* W,
    double* Z, int64_t ldz,
    int64_t* ifail );

// -----------------------------------------------------------------------------
int64_t sprfs(
    lapack::Uplo uplo, int64_t n, int64_t nrhs,
    float const* AP,
    float const* AFP,
    int64_t const* ipiv,
    float const* B, int64_t ldb,
    float* X, int64_t ldx,
    float* ferr,
    float* berr );

int64_t sprfs(
    lapack::Uplo uplo, int64_t n, int64_t nrhs,
    double const* AP,
    double const* AFP,
    int64_t const* ipiv,
    double const* B, int64_t ldb,
    double* X, int64_t ldx,
    double* ferr,
    double* berr );

int64_t sprfs(
    lapack::Uplo uplo, int64_t n, int64_t nrhs,
    std::complex<float> const* AP,
    std::complex<float> const* AFP,
    int64_t const* ipiv,
    std::complex<float> const* B, int64_t ldb,
    std::complex<float>* X, int64_t ldx,
    float* ferr,
    float* berr );

int64_t sprfs(
    lapack::Uplo uplo, int64_t n, int64_t nrhs,
    std::complex<double> const* AP,
    std::complex<double> const* AFP,
    int64_t const* ipiv,
    std::complex<double> const* B, int64_t ldb,
    std::complex<double>* X, int64_t ldx,
    double* ferr,
    double* berr );

// -----------------------------------------------------------------------------
int64_t spsv(
    lapack::Uplo uplo, int64_t n, int64_t nrhs,
    float* AP,
    int64_t* ipiv,
    float* B, int64_t ldb );

int64_t spsv(
    lapack::Uplo uplo, int64_t n, int64_t nrhs,
    double* AP,
    int64_t* ipiv,
    double* B, int64_t ldb );

int64_t spsv(
    lapack::Uplo uplo, int64_t n, int64_t nrhs,
    std::complex<float>* AP,
    int64_t* ipiv,
    std::complex<float>* B, int64_t ldb );

int64_t spsv(
    lapack::Uplo uplo, int64_t n, int64_t nrhs,
    std::complex<double>* AP,
    int64_t* ipiv,
    std::complex<double>* B, int64_t ldb );

// -----------------------------------------------------------------------------
int64_t spsvx(
    lapack::Factored fact, lapack::Uplo uplo, int64_t n, int64_t nrhs,
    float const* AP,
    float* AFP,
    int64_t* ipiv,
    float const* B, int64_t ldb,
    float* X, int64_t ldx,
    float* rcond,
    float* ferr,
    float* berr );

int64_t spsvx(
    lapack::Factored fact, lapack::Uplo uplo, int64_t n, int64_t nrhs,
    double const* AP,
    double* AFP,
    int64_t* ipiv,
    double const* B, int64_t ldb,
    double* X, int64_t ldx,
    double* rcond,
    double* ferr,
    double* berr );

int64_t spsvx(
    lapack::Factored fact, lapack::Uplo uplo, int64_t n, int64_t nrhs,
    std::complex<float> const* AP,
    std::complex<float>* AFP,
    int64_t* ipiv,
    std::complex<float> const* B, int64_t ldb,
    std::complex<float>* X, int64_t ldx,
    float* rcond,
    float* ferr,
    float* berr );

int64_t spsvx(
    lapack::Factored fact, lapack::Uplo uplo, int64_t n, int64_t nrhs,
    std::complex<double> const* AP,
    std::complex<double>* AFP,
    int64_t* ipiv,
    std::complex<double> const* B, int64_t ldb,
    std::complex<double>* X, int64_t ldx,
    double* rcond,
    double* ferr,
    double* berr );

// -----------------------------------------------------------------------------
int64_t sptrd(
    lapack::Uplo uplo, int64_t n,
    float* AP,
    float* D,
    float* E,
    float* tau );

int64_t sptrd(
    lapack::Uplo uplo, int64_t n,
    double* AP,
    double* D,
    double* E,
    double* tau );

// -----------------------------------------------------------------------------
int64_t sptrf(
    lapack::Uplo uplo, int64_t n,
    float* AP,
    int64_t* ipiv );

int64_t sptrf(
    lapack::Uplo uplo, int64_t n,
    double* AP,
    int64_t* ipiv );

int64_t sptrf(
    lapack::Uplo uplo, int64_t n,
    std::complex<float>* AP,
    int64_t* ipiv );

int64_t sptrf(
    lapack::Uplo uplo, int64_t n,
    std::complex<double>* AP,
    int64_t* ipiv );

// -----------------------------------------------------------------------------
int64_t sptri(
    lapack::Uplo uplo, int64_t n,
    float* AP,
    int64_t const* ipiv );

int64_t sptri(
    lapack::Uplo uplo, int64_t n,
    double* AP,
    int64_t const* ipiv );

int64_t sptri(
    lapack::Uplo uplo, int64_t n,
    std::complex<float>* AP,
    int64_t const* ipiv );

int64_t sptri(
    lapack::Uplo uplo, int64_t n,
    std::complex<double>* AP,
    int64_t const* ipiv );

// -----------------------------------------------------------------------------
int64_t sptrs(
    lapack::Uplo uplo, int64_t n, int64_t nrhs,
    float const* AP,
    int64_t const* ipiv,
    float* B, int64_t ldb );

int64_t sptrs(
    lapack::Uplo uplo, int64_t n, int64_t nrhs,
    double const* AP,
    int64_t const* ipiv,
    double* B, int64_t ldb );

int64_t sptrs(
    lapack::Uplo uplo, int64_t n, int64_t nrhs,
    std::complex<float> const* AP,
    int64_t const* ipiv,
    std::complex<float>* B, int64_t ldb );

int64_t sptrs(
    lapack::Uplo uplo, int64_t n, int64_t nrhs,
    std::complex<double> const* AP,
    int64_t const* ipiv,
    std::complex<double>* B, int64_t ldb );

// -----------------------------------------------------------------------------
int64_t stedc(
    lapack::CompQ compz, int64_t n,
    float* D,
    float* E,
    float* Z, int64_t ldz );

int64_t stedc(
    lapack::CompQ compz, int64_t n,
    double* D,
    double* E,
    double* Z, int64_t ldz );

int64_t stedc(
    lapack::CompQ compz, int64_t n,
    float* D,
    float* E,
    std::complex<float>* Z, int64_t ldz );

int64_t stedc(
    lapack::CompQ compz, int64_t n,
    double* D,
    double* E,
    std::complex<double>* Z, int64_t ldz );

// -----------------------------------------------------------------------------
int64_t stegr(
    lapack::Job jobz, lapack::Range range, int64_t n,
    float* D,
    float* E, float vl, float vu, int64_t il, int64_t iu, float abstol,
    int64_t* m,
    float* W,
    float* Z, int64_t ldz,
    int64_t* isuppz );

int64_t stegr(
    lapack::Job jobz, lapack::Range range, int64_t n,
    double* D,
    double* E, double vl, double vu, int64_t il, int64_t iu, double abstol,
    int64_t* m,
    double* W,
    double* Z, int64_t ldz,
    int64_t* isuppz );

int64_t stegr(
    lapack::Job jobz, lapack::Range range, int64_t n,
    float* D,
    float* E, float vl, float vu, int64_t il, int64_t iu, float abstol,
    int64_t* m,
    float* W,
    std::complex<float>* Z, int64_t ldz,
    int64_t* isuppz );

int64_t stegr(
    lapack::Job jobz, lapack::Range range, int64_t n,
    double* D,
    double* E, double vl, double vu, int64_t il, int64_t iu, double abstol,
    int64_t* m,
    double* W,
    std::complex<double>* Z, int64_t ldz,
    int64_t* isuppz );

// -----------------------------------------------------------------------------
int64_t stein(
    int64_t n,
    float const* D,
    float const* E, int64_t m,
    float const* W,
    int64_t const* iblock,
    int64_t const* isplit,
    float* Z, int64_t ldz,
    int64_t* ifail );

int64_t stein(
    int64_t n,
    double const* D,
    double const* E, int64_t m,
    double const* W,
    int64_t const* iblock,
    int64_t const* isplit,
    double* Z, int64_t ldz,
    int64_t* ifail );

int64_t stein(
    int64_t n,
    float const* D,
    float const* E, int64_t m,
    float const* W,
    int64_t const* iblock,
    int64_t const* isplit,
    std::complex<float>* Z, int64_t ldz,
    int64_t* ifail );

int64_t stein(
    int64_t n,
    double const* D,
    double const* E, int64_t m,
    double const* W,
    int64_t const* iblock,
    int64_t const* isplit,
    std::complex<double>* Z, int64_t ldz,
    int64_t* ifail );

// -----------------------------------------------------------------------------
int64_t stemr(
    lapack::Job jobz, lapack::Range range, int64_t n,
    float* D,
    float* E, float vl, float vu, int64_t il, int64_t iu,
    int64_t* m,
    float* W,
    float* Z, int64_t ldz, int64_t nzc,
    int64_t* isuppz,
    bool* tryrac );

int64_t stemr(
    lapack::Job jobz, lapack::Range range, int64_t n,
    double* D,
    double* E, double vl, double vu, int64_t il, int64_t iu,
    int64_t* m,
    double* W,
    double* Z, int64_t ldz, int64_t nzc,
    int64_t* isuppz,
    bool* tryrac );

int64_t stemr(
    lapack::Job jobz, lapack::Range range, int64_t n,
    float* D,
    float* E, float vl, float vu, int64_t il, int64_t iu,
    int64_t* m,
    float* W,
    std::complex<float>* Z, int64_t ldz, int64_t nzc,
    int64_t* isuppz,
    bool* tryrac );

int64_t stemr(
    lapack::Job jobz, lapack::Range range, int64_t n,
    double* D,
    double* E, double vl, double vu, int64_t il, int64_t iu,
    int64_t* m,
    double* W,
    std::complex<double>* Z, int64_t ldz, int64_t nzc,
    int64_t* isuppz,
    bool* tryrac );

// -----------------------------------------------------------------------------
int64_t steqr(
    lapack::CompQ compz, int64_t n,
    float* D,
    float* E,
    float* Z, int64_t ldz );

int64_t steqr(
    lapack::CompQ compz, int64_t n,
    double* D,
    double* E,
    double* Z, int64_t ldz );

int64_t steqr(
    lapack::CompQ compz, int64_t n,
    float* D,
    float* E,
    std::complex<float>* Z, int64_t ldz );

int64_t steqr(
    lapack::CompQ compz, int64_t n,
    double* D,
    double* E,
    std::complex<double>* Z, int64_t ldz );

// -----------------------------------------------------------------------------
int64_t sterf(
    int64_t n,
    float* D,
    float* E );

int64_t sterf(
    int64_t n,
    double* D,
    double* E );

// -----------------------------------------------------------------------------
int64_t stev(
    lapack::Job jobz, int64_t n,
    float* D,
    float* E,
    float* Z, int64_t ldz );

int64_t stev(
    lapack::Job jobz, int64_t n,
    double* D,
    double* E,
    double* Z, int64_t ldz );

// -----------------------------------------------------------------------------
int64_t stevd(
    lapack::Job jobz, int64_t n,
    float* D,
    float* E,
    float* Z, int64_t ldz );

int64_t stevd(
    lapack::Job jobz, int64_t n,
    double* D,
    double* E,
    double* Z, int64_t ldz );

// -----------------------------------------------------------------------------
int64_t stevr(
    lapack::Job jobz, lapack::Range range, int64_t n,
    float* D,
    float* E, float vl, float vu, int64_t il, int64_t iu, float abstol,
    int64_t* m,
    float* W,
    float* Z, int64_t ldz,
    int64_t* isuppz );

int64_t stevr(
    lapack::Job jobz, lapack::Range range, int64_t n,
    double* D,
    double* E, double vl, double vu, int64_t il, int64_t iu, double abstol,
    int64_t* m,
    double* W,
    double* Z, int64_t ldz,
    int64_t* isuppz );

// -----------------------------------------------------------------------------
int64_t stevx(
    lapack::Job jobz, lapack::Range range, int64_t n,
    float* D,
    float* E, float vl, float vu, int64_t il, int64_t iu, float abstol,
    int64_t* m,
    float* W,
    float* Z, int64_t ldz,
    int64_t* ifail );

int64_t stevx(
    lapack::Job jobz, lapack::Range range, int64_t n,
    double* D,
    double* E, double vl, double vu, int64_t il, int64_t iu, double abstol,
    int64_t* m,
    double* W,
    double* Z, int64_t ldz,
    int64_t* ifail );

// -----------------------------------------------------------------------------
int64_t sycon(
    lapack::Uplo uplo, int64_t n,
    float const* A, int64_t lda,
    int64_t const* ipiv, float anorm,
    float* rcond );

int64_t sycon(
    lapack::Uplo uplo, int64_t n,
    double const* A, int64_t lda,
    int64_t const* ipiv, double anorm,
    double* rcond );

int64_t sycon(
    lapack::Uplo uplo, int64_t n,
    std::complex<float> const* A, int64_t lda,
    int64_t const* ipiv, float anorm,
    float* rcond );

int64_t sycon(
    lapack::Uplo uplo, int64_t n,
    std::complex<double> const* A, int64_t lda,
    int64_t const* ipiv, double anorm,
    double* rcond );

// -----------------------------------------------------------------------------
int64_t sycon_3(
    lapack::Uplo uplo, int64_t n,
    float const* A, int64_t lda,
    float const* E,
    int64_t const* ipiv, float anorm,
    float* rcond );

int64_t sycon_3(
    lapack::Uplo uplo, int64_t n,
    double const* A, int64_t lda,
    double const* E,
    int64_t const* ipiv, double anorm,
    double* rcond );

int64_t sycon_3(
    lapack::Uplo uplo, int64_t n,
    std::complex<float> const* A, int64_t lda,
    std::complex<float> const* E,
    int64_t const* ipiv, float anorm,
    float* rcond );

int64_t sycon_3(
    lapack::Uplo uplo, int64_t n,
    std::complex<double> const* A, int64_t lda,
    std::complex<double> const* E,
    int64_t const* ipiv, double anorm,
    double* rcond );

// -----------------------------------------------------------------------------
int64_t syequb(
    lapack::Uplo uplo, int64_t n,
    float const* A, int64_t lda,
    float* S,
    float* scond,
    float* amax );

int64_t syequb(
    lapack::Uplo uplo, int64_t n,
    double const* A, int64_t lda,
    double* S,
    double* scond,
    double* amax );

int64_t syequb(
    lapack::Uplo uplo, int64_t n,
    std::complex<float> const* A, int64_t lda,
    float* S,
    float* scond,
    float* amax );

int64_t syequb(
    lapack::Uplo uplo, int64_t n,
    std::complex<double> const* A, int64_t lda,
    double* S,
    double* scond,
    double* amax );

// -----------------------------------------------------------------------------
int64_t syev(
    lapack::Job jobz, lapack::Uplo uplo, int64_t n,
    float* A, int64_t lda,
    float* W );

int64_t syev(
    lapack::Job jobz, lapack::Uplo uplo, int64_t n,
    double* A, int64_t lda,
    double* W );

// -----------------------------------------------------------------------------
int64_t syev_2stage(
    lapack::Job jobz, lapack::Uplo uplo, int64_t n,
    float* A, int64_t lda,
    float* W );

int64_t syev_2stage(
    lapack::Job jobz, lapack::Uplo uplo, int64_t n,
    double* A, int64_t lda,
    double* W );

// -----------------------------------------------------------------------------
int64_t syevd(
    lapack::Job jobz, lapack::Uplo uplo, int64_t n,
    float* A, int64_t lda,
    float* W );

int64_t syevd(
    lapack::Job jobz, lapack::Uplo uplo, int64_t n,
    double* A, int64_t lda,
    double* W );

// -----------------------------------------------------------------------------
int64_t syevd_2stage(
    lapack::Job jobz, lapack::Uplo uplo, int64_t n,
    float* A, int64_t lda,
    float* W );

int64_t syevd_2stage(
    lapack::Job jobz, lapack::Uplo uplo, int64_t n,
    double* A, int64_t lda,
    double* W );

// -----------------------------------------------------------------------------
int64_t syevr(
    lapack::Job jobz, lapack::Range range, lapack::Uplo uplo, int64_t n,
    float* A, int64_t lda, float vl, float vu, int64_t il, int64_t iu, float abstol,
    int64_t* m,
    float* W,
    float* Z, int64_t ldz,
    int64_t* isuppz );

int64_t syevr(
    lapack::Job jobz, lapack::Range range, lapack::Uplo uplo, int64_t n,
    double* A, int64_t lda, double vl, double vu, int64_t il, int64_t iu, double abstol,
    int64_t* m,
    double* W,
    double* Z, int64_t ldz,
    int64_t* isuppz );

// -----------------------------------------------------------------------------
int64_t syevr_2stage(
    lapack::Job jobz, lapack::Range range, lapack::Uplo uplo, int64_t n,
    float* A, int64_t lda, float vl, float vu, int64_t il, int64_t iu, float abstol,
    int64_t* m,
    float* W,
    float* Z, int64_t ldz,
    int64_t* isuppz );

int64_t syevr_2stage(
    lapack::Job jobz, lapack::Range range, lapack::Uplo uplo, int64_t n,
    double* A, int64_t lda, double vl, double vu, int64_t il, int64_t iu, double abstol,
    int64_t* m,
    double* W,
    double* Z, int64_t ldz,
    int64_t* isuppz );

// -----------------------------------------------------------------------------
int64_t syevx(
    lapack::Job jobz, lapack::Range range, lapack::Uplo uplo, int64_t n,
    float* A, int64_t lda, float vl, float vu, int64_t il, int64_t iu, float abstol,
    int64_t* m,
    float* W,
    float* Z, int64_t ldz,
    int64_t* ifail );

int64_t syevx(
    lapack::Job jobz, lapack::Range range, lapack::Uplo uplo, int64_t n,
    double* A, int64_t lda, double vl, double vu, int64_t il, int64_t iu, double abstol,
    int64_t* m,
    double* W,
    double* Z, int64_t ldz,
    int64_t* ifail );

// -----------------------------------------------------------------------------
int64_t syevx_2stage(
    lapack::Job jobz, lapack::Range range, lapack::Uplo uplo, int64_t n,
    float* A, int64_t lda, float vl, float vu, int64_t il, int64_t iu, float abstol,
    int64_t* m,
    float* W,
    float* Z, int64_t ldz,
    int64_t* ifail );

int64_t syevx_2stage(
    lapack::Job jobz, lapack::Range range, lapack::Uplo uplo, int64_t n,
    double* A, int64_t lda, double vl, double vu, int64_t il, int64_t iu, double abstol,
    int64_t* m,
    double* W,
    double* Z, int64_t ldz,
    int64_t* ifail );

// -----------------------------------------------------------------------------
int64_t sygst(
    int64_t itype, lapack::Uplo uplo, int64_t n,
    float* A, int64_t lda,
    float const* B, int64_t ldb );

int64_t sygst(
    int64_t itype, lapack::Uplo uplo, int64_t n,
    double* A, int64_t lda,
    double const* B, int64_t ldb );

// -----------------------------------------------------------------------------
int64_t sygv(
    int64_t itype, lapack::Job jobz, lapack::Uplo uplo, int64_t n,
    float* A, int64_t lda,
    float* B, int64_t ldb,
    float* W );

int64_t sygv(
    int64_t itype, lapack::Job jobz, lapack::Uplo uplo, int64_t n,
    double* A, int64_t lda,
    double* B, int64_t ldb,
    double* W );

// -----------------------------------------------------------------------------
int64_t sygv_2stage(
    int64_t itype, lapack::Job jobz, lapack::Uplo uplo, int64_t n,
    float* A, int64_t lda,
    float* B, int64_t ldb,
    float* W );

int64_t sygv_2stage(
    int64_t itype, lapack::Job jobz, lapack::Uplo uplo, int64_t n,
    double* A, int64_t lda,
    double* B, int64_t ldb,
    double* W );

// -----------------------------------------------------------------------------
int64_t sygvd(
    int64_t itype, lapack::Job jobz, lapack::Uplo uplo, int64_t n,
    float* A, int64_t lda,
    float* B, int64_t ldb,
    float* W );

int64_t sygvd(
    int64_t itype, lapack::Job jobz, lapack::Uplo uplo, int64_t n,
    double* A, int64_t lda,
    double* B, int64_t ldb,
    double* W );

// -----------------------------------------------------------------------------
int64_t sygvx(
    int64_t itype, lapack::Job jobz, lapack::Range range, lapack::Uplo uplo, int64_t n,
    float* A, int64_t lda,
    float* B, int64_t ldb, float vl, float vu, int64_t il, int64_t iu, float abstol,
    int64_t* m,
    float* W,
    float* Z, int64_t ldz,
    int64_t* ifail );

int64_t sygvx(
    int64_t itype, lapack::Job jobz, lapack::Range range, lapack::Uplo uplo, int64_t n,
    double* A, int64_t lda,
    double* B, int64_t ldb, double vl, double vu, int64_t il, int64_t iu, double abstol,
    int64_t* m,
    double* W,
    double* Z, int64_t ldz,
    int64_t* ifail );

// -----------------------------------------------------------------------------
void syr(
    lapack::Uplo uplo, int64_t n, std::complex<float> alpha,
    std::complex<float> const* X, int64_t incx,
    std::complex<float>* A, int64_t lda );

void syr(
    lapack::Uplo uplo, int64_t n, std::complex<double> alpha,
    std::complex<double> const* X, int64_t incx,
    std::complex<double>* A, int64_t lda );

// -----------------------------------------------------------------------------
int64_t syrfs(
    lapack::Uplo uplo, int64_t n, int64_t nrhs,
    float const* A, int64_t lda,
    float const* AF, int64_t ldaf,
    int64_t const* ipiv,
    float const* B, int64_t ldb,
    float* X, int64_t ldx,
    float* ferr,
    float* berr );

int64_t syrfs(
    lapack::Uplo uplo, int64_t n, int64_t nrhs,
    double const* A, int64_t lda,
    double const* AF, int64_t ldaf,
    int64_t const* ipiv,
    double const* B, int64_t ldb,
    double* X, int64_t ldx,
    double* ferr,
    double* berr );

int64_t syrfs(
    lapack::Uplo uplo, int64_t n, int64_t nrhs,
    std::complex<float> const* A, int64_t lda,
    std::complex<float> const* AF, int64_t ldaf,
    int64_t const* ipiv,
    std::complex<float> const* B, int64_t ldb,
    std::complex<float>* X, int64_t ldx,
    float* ferr,
    float* berr );

int64_t syrfs(
    lapack::Uplo uplo, int64_t n, int64_t nrhs,
    std::complex<double> const* A, int64_t lda,
    std::complex<double> const* AF, int64_t ldaf,
    int64_t const* ipiv,
    std::complex<double> const* B, int64_t ldb,
    std::complex<double>* X, int64_t ldx,
    double* ferr,
    double* berr );

// -----------------------------------------------------------------------------
int64_t syrfsx(
    lapack::Uplo uplo, lapack::Equed equed, int64_t n, int64_t nrhs,
    float const* A, int64_t lda,
    float const* AF, int64_t ldaf,
    int64_t const* ipiv,
    float* S,
    float const* B, int64_t ldb,
    float* X, int64_t ldx,
    float* rcond,
    float* berr, int64_t n_err_bnds,
    float* err_bnds_norm,
    float* err_bnds_comp, int64_t nparams,
    float* params );

int64_t syrfsx(
    lapack::Uplo uplo, lapack::Equed equed, int64_t n, int64_t nrhs,
    double const* A, int64_t lda,
    double const* AF, int64_t ldaf,
    int64_t const* ipiv,
    double* S,
    double const* B, int64_t ldb,
    double* X, int64_t ldx,
    double* rcond,
    double* berr, int64_t n_err_bnds,
    double* err_bnds_norm,
    double* err_bnds_comp, int64_t nparams,
    double* params );

int64_t syrfsx(
    lapack::Uplo uplo, lapack::Equed equed, int64_t n, int64_t nrhs,
    std::complex<float> const* A, int64_t lda,
    std::complex<float> const* AF, int64_t ldaf,
    int64_t const* ipiv,
    float* S,
    std::complex<float> const* B, int64_t ldb,
    std::complex<float>* X, int64_t ldx,
    float* rcond,
    float* berr, int64_t n_err_bnds,
    float* err_bnds_norm,
    float* err_bnds_comp, int64_t nparams,
    float* params );

int64_t syrfsx(
    lapack::Uplo uplo, lapack::Equed equed, int64_t n, int64_t nrhs,
    std::complex<double> const* A, int64_t lda,
    std::complex<double> const* AF, int64_t ldaf,
    int64_t const* ipiv,
    double* S,
    std::complex<double> const* B, int64_t ldb,
    std::complex<double>* X, int64_t ldx,
    double* rcond,
    double* berr, int64_t n_err_bnds,
    double* err_bnds_norm,
    double* err_bnds_comp, int64_t nparams,
    double* params );

// -----------------------------------------------------------------------------
int64_t sysv(
    lapack::Uplo uplo, int64_t n, int64_t nrhs,
    float* A, int64_t lda,
    int64_t* ipiv,
    float* B, int64_t ldb );

int64_t sysv(
    lapack::Uplo uplo, int64_t n, int64_t nrhs,
    double* A, int64_t lda,
    int64_t* ipiv,
    double* B, int64_t ldb );

int64_t sysv(
    lapack::Uplo uplo, int64_t n, int64_t nrhs,
    std::complex<float>* A, int64_t lda,
    int64_t* ipiv,
    std::complex<float>* B, int64_t ldb );

int64_t sysv(
    lapack::Uplo uplo, int64_t n, int64_t nrhs,
    std::complex<double>* A, int64_t lda,
    int64_t* ipiv,
    std::complex<double>* B, int64_t ldb );

// -----------------------------------------------------------------------------
int64_t sysv_aa(
    lapack::Uplo uplo, int64_t n, int64_t nrhs,
    float* A, int64_t lda,
    int64_t* ipiv,
    float* B, int64_t ldb );

int64_t sysv_aa(
    lapack::Uplo uplo, int64_t n, int64_t nrhs,
    double* A, int64_t lda,
    int64_t* ipiv,
    double* B, int64_t ldb );

int64_t sysv_aa(
    lapack::Uplo uplo, int64_t n, int64_t nrhs,
    std::complex<float>* A, int64_t lda,
    int64_t* ipiv,
    std::complex<float>* B, int64_t ldb );

int64_t sysv_aa(
    lapack::Uplo uplo, int64_t n, int64_t nrhs,
    std::complex<double>* A, int64_t lda,
    int64_t* ipiv,
    std::complex<double>* B, int64_t ldb );

// -----------------------------------------------------------------------------
int64_t sysv_rk(
    lapack::Uplo uplo, int64_t n, int64_t nrhs,
    float* A, int64_t lda,
    float* E,
    int64_t* ipiv,
    float* B, int64_t ldb );

int64_t sysv_rk(
    lapack::Uplo uplo, int64_t n, int64_t nrhs,
    double* A, int64_t lda,
    double* E,
    int64_t* ipiv,
    double* B, int64_t ldb );

int64_t sysv_rk(
    lapack::Uplo uplo, int64_t n, int64_t nrhs,
    std::complex<float>* A, int64_t lda,
    std::complex<float>* E,
    int64_t* ipiv,
    std::complex<float>* B, int64_t ldb );

int64_t sysv_rk(
    lapack::Uplo uplo, int64_t n, int64_t nrhs,
    std::complex<double>* A, int64_t lda,
    std::complex<double>* E,
    int64_t* ipiv,
    std::complex<double>* B, int64_t ldb );

// -----------------------------------------------------------------------------
int64_t sysv_rook(
    lapack::Uplo uplo, int64_t n, int64_t nrhs,
    float* A, int64_t lda,
    int64_t* ipiv,
    float* B, int64_t ldb );

int64_t sysv_rook(
    lapack::Uplo uplo, int64_t n, int64_t nrhs,
    double* A, int64_t lda,
    int64_t* ipiv,
    double* B, int64_t ldb );

int64_t sysv_rook(
    lapack::Uplo uplo, int64_t n, int64_t nrhs,
    std::complex<float>* A, int64_t lda,
    int64_t* ipiv,
    std::complex<float>* B, int64_t ldb );

int64_t sysv_rook(
    lapack::Uplo uplo, int64_t n, int64_t nrhs,
    std::complex<double>* A, int64_t lda,
    int64_t* ipiv,
    std::complex<double>* B, int64_t ldb );

// -----------------------------------------------------------------------------
int64_t sysvx(
    lapack::Factored fact, lapack::Uplo uplo, int64_t n, int64_t nrhs,
    float const* A, int64_t lda,
    float* AF, int64_t ldaf,
    int64_t* ipiv,
    float const* B, int64_t ldb,
    float* X, int64_t ldx,
    float* rcond,
    float* ferr,
    float* berr );

int64_t sysvx(
    lapack::Factored fact, lapack::Uplo uplo, int64_t n, int64_t nrhs,
    double const* A, int64_t lda,
    double* AF, int64_t ldaf,
    int64_t* ipiv,
    double const* B, int64_t ldb,
    double* X, int64_t ldx,
    double* rcond,
    double* ferr,
    double* berr );

int64_t sysvx(
    lapack::Factored fact, lapack::Uplo uplo, int64_t n, int64_t nrhs,
    std::complex<float> const* A, int64_t lda,
    std::complex<float>* AF, int64_t ldaf,
    int64_t* ipiv,
    std::complex<float> const* B, int64_t ldb,
    std::complex<float>* X, int64_t ldx,
    float* rcond,
    float* ferr,
    float* berr );

int64_t sysvx(
    lapack::Factored fact, lapack::Uplo uplo, int64_t n, int64_t nrhs,
    std::complex<double> const* A, int64_t lda,
    std::complex<double>* AF, int64_t ldaf,
    int64_t* ipiv,
    std::complex<double> const* B, int64_t ldb,
    std::complex<double>* X, int64_t ldx,
    double* rcond,
    double* ferr,
    double* berr );

// -----------------------------------------------------------------------------
void syswapr(
    lapack::Uplo uplo, int64_t n,
    float* A, int64_t lda, int64_t i1, int64_t i2 );

void syswapr(
    lapack::Uplo uplo, int64_t n,
    double* A, int64_t lda, int64_t i1, int64_t i2 );

void syswapr(
    lapack::Uplo uplo, int64_t n,
    std::complex<float>* A, int64_t lda, int64_t i1, int64_t i2 );

void syswapr(
    lapack::Uplo uplo, int64_t n,
    std::complex<double>* A, int64_t lda, int64_t i1, int64_t i2 );

// -----------------------------------------------------------------------------
int64_t sytrd(
    lapack::Uplo uplo, int64_t n,
    float* A, int64_t lda,
    float* D,
    float* E,
    float* tau );

int64_t sytrd(
    lapack::Uplo uplo, int64_t n,
    double* A, int64_t lda,
    double* D,
    double* E,
    double* tau );

// -----------------------------------------------------------------------------
int64_t sytrd_2stage(
    lapack::Job jobz, lapack::Uplo uplo, int64_t n,
    float* A, int64_t lda,
    float* D,
    float* E,
    float* tau,
    float* hous2, int64_t lhous2 );

int64_t sytrd_2stage(
    lapack::Job jobz, lapack::Uplo uplo, int64_t n,
    double* A, int64_t lda,
    double* D,
    double* E,
    double* tau,
    double* hous2, int64_t lhous2 );

// -----------------------------------------------------------------------------
int64_t sytrf(
    lapack::Uplo uplo, int64_t n,
    float* A, int64_t lda,
    int64_t* ipiv );

int64_t sytrf(
    lapack::Uplo uplo, int64_t n,
    double* A, int64_t lda,
    int64_t* ipiv );

int64_t sytrf(
    lapack::Uplo uplo, int64_t n,
    std::complex<float>* A, int64_t lda,
    int64_t* ipiv );

int64_t sytrf(
    lapack::Uplo uplo, int64_t n,
    std::complex<double>* A, int64_t lda,
    int64_t* ipiv );

// -----------------------------------------------------------------------------
int64_t sytrf_aa(
    lapack::Uplo uplo, int64_t n,
    float* A, int64_t lda,
    int64_t* ipiv );

int64_t sytrf_aa(
    lapack::Uplo uplo, int64_t n,
    double* A, int64_t lda,
    int64_t* ipiv );

int64_t sytrf_aa(
    lapack::Uplo uplo, int64_t n,
    std::complex<float>* A, int64_t lda,
    int64_t* ipiv );

int64_t sytrf_aa(
    lapack::Uplo uplo, int64_t n,
    std::complex<double>* A, int64_t lda,
    int64_t* ipiv );

// -----------------------------------------------------------------------------
int64_t sytrf_rk(
    lapack::Uplo uplo, int64_t n,
    float* A, int64_t lda,
    float* E,
    int64_t* ipiv );

int64_t sytrf_rk(
    lapack::Uplo uplo, int64_t n,
    double* A, int64_t lda,
    double* E,
    int64_t* ipiv );

int64_t sytrf_rk(
    lapack::Uplo uplo, int64_t n,
    std::complex<float>* A, int64_t lda,
    std::complex<float>* E,
    int64_t* ipiv );

int64_t sytrf_rk(
    lapack::Uplo uplo, int64_t n,
    std::complex<double>* A, int64_t lda,
    std::complex<double>* E,
    int64_t* ipiv );

// -----------------------------------------------------------------------------
int64_t sytrf_rook(
    lapack::Uplo uplo, int64_t n,
    float* A, int64_t lda,
    int64_t* ipiv );

int64_t sytrf_rook(
    lapack::Uplo uplo, int64_t n,
    double* A, int64_t lda,
    int64_t* ipiv );

int64_t sytrf_rook(
    lapack::Uplo uplo, int64_t n,
    std::complex<float>* A, int64_t lda,
    int64_t* ipiv );

int64_t sytrf_rook(
    lapack::Uplo uplo, int64_t n,
    std::complex<double>* A, int64_t lda,
    int64_t* ipiv );

// -----------------------------------------------------------------------------
int64_t sytri(
    lapack::Uplo uplo, int64_t n,
    float* A, int64_t lda,
    int64_t const* ipiv );

int64_t sytri(
    lapack::Uplo uplo, int64_t n,
    double* A, int64_t lda,
    int64_t const* ipiv );

int64_t sytri(
    lapack::Uplo uplo, int64_t n,
    std::complex<float>* A, int64_t lda,
    int64_t const* ipiv );

int64_t sytri(
    lapack::Uplo uplo, int64_t n,
    std::complex<double>* A, int64_t lda,
    int64_t const* ipiv );

// -----------------------------------------------------------------------------
int64_t sytri2(
    lapack::Uplo uplo, int64_t n,
    float* A, int64_t lda,
    int64_t const* ipiv );

int64_t sytri2(
    lapack::Uplo uplo, int64_t n,
    double* A, int64_t lda,
    int64_t const* ipiv );

int64_t sytri2(
    lapack::Uplo uplo, int64_t n,
    std::complex<float>* A, int64_t lda,
    int64_t const* ipiv );

int64_t sytri2(
    lapack::Uplo uplo, int64_t n,
    std::complex<double>* A, int64_t lda,
    int64_t const* ipiv );

// -----------------------------------------------------------------------------
int64_t sytri2x(
    lapack::Uplo uplo, int64_t n,
    float* A, int64_t lda,
    int64_t const* ipiv, int64_t nb );

int64_t sytri2x(
    lapack::Uplo uplo, int64_t n,
    double* A, int64_t lda,
    int64_t const* ipiv, int64_t nb );

int64_t sytri2x(
    lapack::Uplo uplo, int64_t n,
    std::complex<float>* A, int64_t lda,
    int64_t const* ipiv, int64_t nb );

int64_t sytri2x(
    lapack::Uplo uplo, int64_t n,
    std::complex<double>* A, int64_t lda,
    int64_t const* ipiv, int64_t nb );

// -----------------------------------------------------------------------------
int64_t sytri_3(
    lapack::Uplo uplo, int64_t n,
    float* A, int64_t lda,
    float const* E,
    int64_t const* ipiv );

int64_t sytri_3(
    lapack::Uplo uplo, int64_t n,
    double* A, int64_t lda,
    double const* E,
    int64_t const* ipiv );

int64_t sytri_3(
    lapack::Uplo uplo, int64_t n,
    std::complex<float>* A, int64_t lda,
    std::complex<float> const* E,
    int64_t const* ipiv );

int64_t sytri_3(
    lapack::Uplo uplo, int64_t n,
    std::complex<double>* A, int64_t lda,
    std::complex<double> const* E,
    int64_t const* ipiv );

// -----------------------------------------------------------------------------
int64_t sytrs(
    lapack::Uplo uplo, int64_t n, int64_t nrhs,
    float const* A, int64_t lda,
    int64_t const* ipiv,
    float* B, int64_t ldb );

int64_t sytrs(
    lapack::Uplo uplo, int64_t n, int64_t nrhs,
    double const* A, int64_t lda,
    int64_t const* ipiv,
    double* B, int64_t ldb );

int64_t sytrs(
    lapack::Uplo uplo, int64_t n, int64_t nrhs,
    std::complex<float> const* A, int64_t lda,
    int64_t const* ipiv,
    std::complex<float>* B, int64_t ldb );

int64_t sytrs(
    lapack::Uplo uplo, int64_t n, int64_t nrhs,
    std::complex<double> const* A, int64_t lda,
    int64_t const* ipiv,
    std::complex<double>* B, int64_t ldb );

// -----------------------------------------------------------------------------
int64_t sytrs2(
    lapack::Uplo uplo, int64_t n, int64_t nrhs,
    float* A, int64_t lda,
    int64_t const* ipiv,
    float* B, int64_t ldb );

int64_t sytrs2(
    lapack::Uplo uplo, int64_t n, int64_t nrhs,
    double* A, int64_t lda,
    int64_t const* ipiv,
    double* B, int64_t ldb );

int64_t sytrs2(
    lapack::Uplo uplo, int64_t n, int64_t nrhs,
    std::complex<float>* A, int64_t lda,
    int64_t const* ipiv,
    std::complex<float>* B, int64_t ldb );

int64_t sytrs2(
    lapack::Uplo uplo, int64_t n, int64_t nrhs,
    std::complex<double>* A, int64_t lda,
    int64_t const* ipiv,
    std::complex<double>* B, int64_t ldb );

// -----------------------------------------------------------------------------
int64_t sytrs_3(
    lapack::Uplo uplo, int64_t n, int64_t nrhs,
    float const* A, int64_t lda,
    float const* E,
    int64_t const* ipiv,
    float* B, int64_t ldb );

int64_t sytrs_3(
    lapack::Uplo uplo, int64_t n, int64_t nrhs,
    double const* A, int64_t lda,
    double const* E,
    int64_t const* ipiv,
    double* B, int64_t ldb );

int64_t sytrs_3(
    lapack::Uplo uplo, int64_t n, int64_t nrhs,
    std::complex<float> const* A, int64_t lda,
    std::complex<float> const* E,
    int64_t const* ipiv,
    std::complex<float>* B, int64_t ldb );

int64_t sytrs_3(
    lapack::Uplo uplo, int64_t n, int64_t nrhs,
    std::complex<double> const* A, int64_t lda,
    std::complex<double> const* E,
    int64_t const* ipiv,
    std::complex<double>* B, int64_t ldb );

// -----------------------------------------------------------------------------
int64_t sytrs_aa(
    lapack::Uplo uplo, int64_t n, int64_t nrhs,
    float const* A, int64_t lda,
    int64_t const* ipiv,
    float* B, int64_t ldb, int64_t lwork );

int64_t sytrs_aa(
    lapack::Uplo uplo, int64_t n, int64_t nrhs,
    double const* A, int64_t lda,
    int64_t const* ipiv,
    double* B, int64_t ldb, int64_t lwork );

int64_t sytrs_aa(
    lapack::Uplo uplo, int64_t n, int64_t nrhs,
    std::complex<float> const* A, int64_t lda,
    int64_t const* ipiv,
    std::complex<float>* B, int64_t ldb, int64_t lwork );

int64_t sytrs_aa(
    lapack::Uplo uplo, int64_t n, int64_t nrhs,
    std::complex<double> const* A, int64_t lda,
    int64_t const* ipiv,
    std::complex<double>* B, int64_t ldb, int64_t lwork );

// -----------------------------------------------------------------------------
int64_t sytrs_rook(
    lapack::Uplo uplo, int64_t n, int64_t nrhs,
    float const* A, int64_t lda,
    int64_t const* ipiv,
    float* B, int64_t ldb );

int64_t sytrs_rook(
    lapack::Uplo uplo, int64_t n, int64_t nrhs,
    double const* A, int64_t lda,
    int64_t const* ipiv,
    double* B, int64_t ldb );

int64_t sytrs_rook(
    lapack::Uplo uplo, int64_t n, int64_t nrhs,
    std::complex<float> const* A, int64_t lda,
    int64_t const* ipiv,
    std::complex<float>* B, int64_t ldb );

int64_t sytrs_rook(
    lapack::Uplo uplo, int64_t n, int64_t nrhs,
    std::complex<double> const* A, int64_t lda,
    int64_t const* ipiv,
    std::complex<double>* B, int64_t ldb );

// -----------------------------------------------------------------------------
int64_t tbcon(
    lapack::Norm norm, lapack::Uplo uplo, lapack::Diag diag, int64_t n, int64_t kd,
    float const* AB, int64_t ldab,
    float* rcond );

int64_t tbcon(
    lapack::Norm norm, lapack::Uplo uplo, lapack::Diag diag, int64_t n, int64_t kd,
    double const* AB, int64_t ldab,
    double* rcond );

int64_t tbcon(
    lapack::Norm norm, lapack::Uplo uplo, lapack::Diag diag, int64_t n, int64_t kd,
    std::complex<float> const* AB, int64_t ldab,
    float* rcond );

int64_t tbcon(
    lapack::Norm norm, lapack::Uplo uplo, lapack::Diag diag, int64_t n, int64_t kd,
    std::complex<double> const* AB, int64_t ldab,
    double* rcond );

// -----------------------------------------------------------------------------
int64_t tbrfs(
    lapack::Uplo uplo, lapack::Op trans, lapack::Diag diag, int64_t n, int64_t kd, int64_t nrhs,
    float const* AB, int64_t ldab,
    float const* B, int64_t ldb,
    float const* X, int64_t ldx,
    float* ferr,
    float* berr );

int64_t tbrfs(
    lapack::Uplo uplo, lapack::Op trans, lapack::Diag diag, int64_t n, int64_t kd, int64_t nrhs,
    double const* AB, int64_t ldab,
    double const* B, int64_t ldb,
    double const* X, int64_t ldx,
    double* ferr,
    double* berr );

int64_t tbrfs(
    lapack::Uplo uplo, lapack::Op trans, lapack::Diag diag, int64_t n, int64_t kd, int64_t nrhs,
    std::complex<float> const* AB, int64_t ldab,
    std::complex<float> const* B, int64_t ldb,
    std::complex<float> const* X, int64_t ldx,
    float* ferr,
    float* berr );

int64_t tbrfs(
    lapack::Uplo uplo, lapack::Op trans, lapack::Diag diag, int64_t n, int64_t kd, int64_t nrhs,
    std::complex<double> const* AB, int64_t ldab,
    std::complex<double> const* B, int64_t ldb,
    std::complex<double> const* X, int64_t ldx,
    double* ferr,
    double* berr );

// -----------------------------------------------------------------------------
int64_t tbtrs(
    lapack::Uplo uplo, lapack::Op trans, lapack::Diag diag, int64_t n, int64_t kd, int64_t nrhs,
    float const* AB, int64_t ldab,
    float* B, int64_t ldb );

int64_t tbtrs(
    lapack::Uplo uplo, lapack::Op trans, lapack::Diag diag, int64_t n, int64_t kd, int64_t nrhs,
    double const* AB, int64_t ldab,
    double* B, int64_t ldb );

int64_t tbtrs(
    lapack::Uplo uplo, lapack::Op trans, lapack::Diag diag, int64_t n, int64_t kd, int64_t nrhs,
    std::complex<float> const* AB, int64_t ldab,
    std::complex<float>* B, int64_t ldb );

int64_t tbtrs(
    lapack::Uplo uplo, lapack::Op trans, lapack::Diag diag, int64_t n, int64_t kd, int64_t nrhs,
    std::complex<double> const* AB, int64_t ldab,
    std::complex<double>* B, int64_t ldb );

// -----------------------------------------------------------------------------
void tfsm(
    lapack::Op transr, lapack::Side side, lapack::Uplo uplo, lapack::Op trans, lapack::Diag diag, int64_t m, int64_t n, float alpha,
    float const* A,
    float* B, int64_t ldb );

void tfsm(
    lapack::Op transr, lapack::Side side, lapack::Uplo uplo, lapack::Op trans, lapack::Diag diag, int64_t m, int64_t n, double alpha,
    double const* A,
    double* B, int64_t ldb );

void tfsm(
    lapack::Op transr, lapack::Side side, lapack::Uplo uplo, lapack::Op trans, lapack::Diag diag, int64_t m, int64_t n, std::complex<float> alpha,
    std::complex<float> const* A,
    std::complex<float>* B, int64_t ldb );

void tfsm(
    lapack::Op transr, lapack::Side side, lapack::Uplo uplo, lapack::Op trans, lapack::Diag diag, int64_t m, int64_t n, std::complex<double> alpha,
    std::complex<double> const* A,
    std::complex<double>* B, int64_t ldb );

// -----------------------------------------------------------------------------
int64_t tftri(
    lapack::Op transr, lapack::Uplo uplo, lapack::Diag diag, int64_t n,
    float* A );

int64_t tftri(
    lapack::Op transr, lapack::Uplo uplo, lapack::Diag diag, int64_t n,
    double* A );

int64_t tftri(
    lapack::Op transr, lapack::Uplo uplo, lapack::Diag diag, int64_t n,
    std::complex<float>* A );

int64_t tftri(
    lapack::Op transr, lapack::Uplo uplo, lapack::Diag diag, int64_t n,
    std::complex<double>* A );

// -----------------------------------------------------------------------------
int64_t tfttp(
    lapack::Op transr, lapack::Uplo uplo, int64_t n,
    float const* ARF,
    float* AP );

int64_t tfttp(
    lapack::Op transr, lapack::Uplo uplo, int64_t n,
    double const* ARF,
    double* AP );

int64_t tfttp(
    lapack::Op transr, lapack::Uplo uplo, int64_t n,
    std::complex<float> const* ARF,
    std::complex<float>* AP );

int64_t tfttp(
    lapack::Op transr, lapack::Uplo uplo, int64_t n,
    std::complex<double> const* ARF,
    std::complex<double>* AP );

// -----------------------------------------------------------------------------
int64_t tfttr(
    lapack::Op transr, lapack::Uplo uplo, int64_t n,
    float const* ARF,
    float* A, int64_t lda );

int64_t tfttr(
    lapack::Op transr, lapack::Uplo uplo, int64_t n,
    double const* ARF,
    double* A, int64_t lda );

int64_t tfttr(
    lapack::Op transr, lapack::Uplo uplo, int64_t n,
    std::complex<float> const* ARF,
    std::complex<float>* A, int64_t lda );

int64_t tfttr(
    lapack::Op transr, lapack::Uplo uplo, int64_t n,
    std::complex<double> const* ARF,
    std::complex<double>* A, int64_t lda );

// -----------------------------------------------------------------------------
int64_t tgsja(
    lapack::Job jobu, lapack::Job jobv, lapack::JobQ jobq, int64_t m, int64_t p, int64_t n, int64_t k, int64_t l,
    float* A, int64_t lda,
    float* B, int64_t ldb, float tola, float tolb,
    float* alpha,
    float* beta,
    float* U, int64_t ldu,
    float* V, int64_t ldv,
    float* Q, int64_t ldq,
    int64_t* ncycle );

int64_t tgsja(
    lapack::Job jobu, lapack::Job jobv, lapack::JobQ jobq, int64_t m, int64_t p, int64_t n, int64_t k, int64_t l,
    double* A, int64_t lda,
    double* B, int64_t ldb, double tola, double tolb,
    double* alpha,
    double* beta,
    double* U, int64_t ldu,
    double* V, int64_t ldv,
    double* Q, int64_t ldq,
    int64_t* ncycle );

int64_t tgsja(
    lapack::Job jobu, lapack::Job jobv, lapack::JobQ jobq, int64_t m, int64_t p, int64_t n, int64_t k, int64_t l,
    std::complex<float>* A, int64_t lda,
    std::complex<float>* B, int64_t ldb, float tola, float tolb,
    float* alpha,
    float* beta,
    std::complex<float>* U, int64_t ldu,
    std::complex<float>* V, int64_t ldv,
    std::complex<float>* Q, int64_t ldq,
    int64_t* ncycle );

int64_t tgsja(
    lapack::Job jobu, lapack::Job jobv, lapack::JobQ jobq, int64_t m, int64_t p, int64_t n, int64_t k, int64_t l,
    std::complex<double>* A, int64_t lda,
    std::complex<double>* B, int64_t ldb, double tola, double tolb,
    double* alpha,
    double* beta,
    std::complex<double>* U, int64_t ldu,
    std::complex<double>* V, int64_t ldv,
    std::complex<double>* Q, int64_t ldq,
    int64_t* ncycle );

// -----------------------------------------------------------------------------
int64_t tgsyl(
    lapack::Op trans, int64_t ijob, int64_t m, int64_t n,
    float const* A, int64_t lda,
    float const* B, int64_t ldb,
    float* C, int64_t ldc,
    float const* D, int64_t ldd,
    float const* E, int64_t lde,
    float* F, int64_t ldf,
    float* dif,
    float* scale );

int64_t tgsyl(
    lapack::Op trans, int64_t ijob, int64_t m, int64_t n,
    double const* A, int64_t lda,
    double const* B, int64_t ldb,
    double* C, int64_t ldc,
    double const* D, int64_t ldd,
    double const* E, int64_t lde,
    double* F, int64_t ldf,
    double* dif,
    double* scale );

int64_t tgsyl(
    lapack::Op trans, int64_t ijob, int64_t m, int64_t n,
    std::complex<float> const* A, int64_t lda,
    std::complex<float> const* B, int64_t ldb,
    std::complex<float>* C, int64_t ldc,
    std::complex<float> const* D, int64_t ldd,
    std::complex<float> const* E, int64_t lde,
    std::complex<float>* F, int64_t ldf,
    float* dif,
    float* scale );

int64_t tgsyl(
    lapack::Op trans, int64_t ijob, int64_t m, int64_t n,
    std::complex<double> const* A, int64_t lda,
    std::complex<double> const* B, int64_t ldb,
    std::complex<double>* C, int64_t ldc,
    std::complex<double> const* D, int64_t ldd,
    std::complex<double> const* E, int64_t lde,
    std::complex<double>* F, int64_t ldf,
    double* dif,
    double* scale );

// -----------------------------------------------------------------------------
int64_t tpcon(
    lapack::Norm norm, lapack::Uplo uplo, lapack::Diag diag, int64_t n,
    float const* AP,
    float* rcond );

int64_t tpcon(
    lapack::Norm norm, lapack::Uplo uplo, lapack::Diag diag, int64_t n,
    double const* AP,
    double* rcond );

int64_t tpcon(
    lapack::Norm norm, lapack::Uplo uplo, lapack::Diag diag, int64_t n,
    std::complex<float> const* AP,
    float* rcond );

int64_t tpcon(
    lapack::Norm norm, lapack::Uplo uplo, lapack::Diag diag, int64_t n,
    std::complex<double> const* AP,
    double* rcond );

// -----------------------------------------------------------------------------
int64_t tpqrt(
    int64_t m, int64_t n, int64_t l, int64_t nb,
    float* A, int64_t lda,
    float* B, int64_t ldb,
    float* T, int64_t ldt );

int64_t tpqrt(
    int64_t m, int64_t n, int64_t l, int64_t nb,
    double* A, int64_t lda,
    double* B, int64_t ldb,
    double* T, int64_t ldt );

int64_t tpqrt(
    int64_t m, int64_t n, int64_t l, int64_t nb,
    std::complex<float>* A, int64_t lda,
    std::complex<float>* B, int64_t ldb,
    std::complex<float>* T, int64_t ldt );

int64_t tpqrt(
    int64_t m, int64_t n, int64_t l, int64_t nb,
    std::complex<double>* A, int64_t lda,
    std::complex<double>* B, int64_t ldb,
    std::complex<double>* T, int64_t ldt );

// -----------------------------------------------------------------------------
int64_t tpqrt2(
    int64_t m, int64_t n, int64_t l,
    float* A, int64_t lda,
    float* B, int64_t ldb,
    float* T, int64_t ldt );

int64_t tpqrt2(
    int64_t m, int64_t n, int64_t l,
    double* A, int64_t lda,
    double* B, int64_t ldb,
    double* T, int64_t ldt );

int64_t tpqrt2(
    int64_t m, int64_t n, int64_t l,
    std::complex<float>* A, int64_t lda,
    std::complex<float>* B, int64_t ldb,
    std::complex<float>* T, int64_t ldt );

int64_t tpqrt2(
    int64_t m, int64_t n, int64_t l,
    std::complex<double>* A, int64_t lda,
    std::complex<double>* B, int64_t ldb,
    std::complex<double>* T, int64_t ldt );

// -----------------------------------------------------------------------------
int64_t tprfs(
    lapack::Uplo uplo, lapack::Op trans, lapack::Diag diag, int64_t n, int64_t nrhs,
    float const* AP,
    float const* B, int64_t ldb,
    float const* X, int64_t ldx,
    float* ferr,
    float* berr );

int64_t tprfs(
    lapack::Uplo uplo, lapack::Op trans, lapack::Diag diag, int64_t n, int64_t nrhs,
    double const* AP,
    double const* B, int64_t ldb,
    double const* X, int64_t ldx,
    double* ferr,
    double* berr );

int64_t tprfs(
    lapack::Uplo uplo, lapack::Op trans, lapack::Diag diag, int64_t n, int64_t nrhs,
    std::complex<float> const* AP,
    std::complex<float> const* B, int64_t ldb,
    std::complex<float> const* X, int64_t ldx,
    float* ferr,
    float* berr );

int64_t tprfs(
    lapack::Uplo uplo, lapack::Op trans, lapack::Diag diag, int64_t n, int64_t nrhs,
    std::complex<double> const* AP,
    std::complex<double> const* B, int64_t ldb,
    std::complex<double> const* X, int64_t ldx,
    double* ferr,
    double* berr );

// -----------------------------------------------------------------------------
int64_t tptri(
    lapack::Uplo uplo, lapack::Diag diag, int64_t n,
    float* AP );

int64_t tptri(
    lapack::Uplo uplo, lapack::Diag diag, int64_t n,
    double* AP );

int64_t tptri(
    lapack::Uplo uplo, lapack::Diag diag, int64_t n,
    std::complex<float>* AP );

int64_t tptri(
    lapack::Uplo uplo, lapack::Diag diag, int64_t n,
    std::complex<double>* AP );

// -----------------------------------------------------------------------------
int64_t tptrs(
    lapack::Uplo uplo, lapack::Op trans, lapack::Diag diag, int64_t n, int64_t nrhs,
    float const* AP,
    float* B, int64_t ldb );

int64_t tptrs(
    lapack::Uplo uplo, lapack::Op trans, lapack::Diag diag, int64_t n, int64_t nrhs,
    double const* AP,
    double* B, int64_t ldb );

int64_t tptrs(
    lapack::Uplo uplo, lapack::Op trans, lapack::Diag diag, int64_t n, int64_t nrhs,
    std::complex<float> const* AP,
    std::complex<float>* B, int64_t ldb );

int64_t tptrs(
    lapack::Uplo uplo, lapack::Op trans, lapack::Diag diag, int64_t n, int64_t nrhs,
    std::complex<double> const* AP,
    std::complex<double>* B, int64_t ldb );

// -----------------------------------------------------------------------------
int64_t tpttf(
    lapack::Op transr, lapack::Uplo uplo, int64_t n,
    float const* AP,
    float* ARF );

int64_t tpttf(
    lapack::Op transr, lapack::Uplo uplo, int64_t n,
    double const* AP,
    double* ARF );

int64_t tpttf(
    lapack::Op transr, lapack::Uplo uplo, int64_t n,
    std::complex<float> const* AP,
    std::complex<float>* ARF );

int64_t tpttf(
    lapack::Op transr, lapack::Uplo uplo, int64_t n,
    std::complex<double> const* AP,
    std::complex<double>* ARF );

// -----------------------------------------------------------------------------
int64_t tpttr(
    lapack::Uplo uplo, int64_t n,
    float const* AP,
    float* A, int64_t lda );

int64_t tpttr(
    lapack::Uplo uplo, int64_t n,
    double const* AP,
    double* A, int64_t lda );

int64_t tpttr(
    lapack::Uplo uplo, int64_t n,
    std::complex<float> const* AP,
    std::complex<float>* A, int64_t lda );

int64_t tpttr(
    lapack::Uplo uplo, int64_t n,
    std::complex<double> const* AP,
    std::complex<double>* A, int64_t lda );

// -----------------------------------------------------------------------------
int64_t trcon(
    lapack::Norm norm, lapack::Uplo uplo, lapack::Diag diag, int64_t n,
    float const* A, int64_t lda,
    float* rcond );

int64_t trcon(
    lapack::Norm norm, lapack::Uplo uplo, lapack::Diag diag, int64_t n,
    double const* A, int64_t lda,
    double* rcond );

int64_t trcon(
    lapack::Norm norm, lapack::Uplo uplo, lapack::Diag diag, int64_t n,
    std::complex<float> const* A, int64_t lda,
    float* rcond );

int64_t trcon(
    lapack::Norm norm, lapack::Uplo uplo, lapack::Diag diag, int64_t n,
    std::complex<double> const* A, int64_t lda,
    double* rcond );

// -----------------------------------------------------------------------------
int64_t trevc(
    lapack::Side side, lapack::HowMany howmny,
    bool* select, int64_t n,
    float const* T, int64_t ldt,
    float* VL, int64_t ldvl,
    float* VR, int64_t ldvr, int64_t mm,
    int64_t* m );

int64_t trevc(
    lapack::Side side, lapack::HowMany howmny,
    bool* select, int64_t n,
    double const* T, int64_t ldt,
    double* VL, int64_t ldvl,
    double* VR, int64_t ldvr, int64_t mm,
    int64_t* m );

int64_t trevc(
    lapack::Side side, lapack::HowMany howmny,
    bool const* select, int64_t n,
    std::complex<float>* T, int64_t ldt,
    std::complex<float>* VL, int64_t ldvl,
    std::complex<float>* VR, int64_t ldvr, int64_t mm,
    int64_t* m );

int64_t trevc(
    lapack::Side side, lapack::HowMany howmny,
    bool const* select, int64_t n,
    std::complex<double>* T, int64_t ldt,
    std::complex<double>* VL, int64_t ldvl,
    std::complex<double>* VR, int64_t ldvr, int64_t mm,
    int64_t* m );

// -----------------------------------------------------------------------------
int64_t trexc(
    lapack::CompQ compq, int64_t n,
    float* T, int64_t ldt,
    float* Q, int64_t ldq,
    int64_t* ifst,
    int64_t* ilst );

int64_t trexc(
    lapack::CompQ compq, int64_t n,
    double* T, int64_t ldt,
    double* Q, int64_t ldq,
    int64_t* ifst,
    int64_t* ilst );

int64_t trexc(
    lapack::CompQ compq, int64_t n,
    std::complex<float>* T, int64_t ldt,
    std::complex<float>* Q, int64_t ldq, int64_t ifst, int64_t ilst );

int64_t trexc(
    lapack::CompQ compq, int64_t n,
    std::complex<double>* T, int64_t ldt,
    std::complex<double>* Q, int64_t ldq, int64_t ifst, int64_t ilst );

// -----------------------------------------------------------------------------
int64_t trrfs(
    lapack::Uplo uplo, lapack::Op trans, lapack::Diag diag, int64_t n, int64_t nrhs,
    float const* A, int64_t lda,
    float const* B, int64_t ldb,
    float const* X, int64_t ldx,
    float* ferr,
    float* berr );

int64_t trrfs(
    lapack::Uplo uplo, lapack::Op trans, lapack::Diag diag, int64_t n, int64_t nrhs,
    double const* A, int64_t lda,
    double const* B, int64_t ldb,
    double const* X, int64_t ldx,
    double* ferr,
    double* berr );

int64_t trrfs(
    lapack::Uplo uplo, lapack::Op trans, lapack::Diag diag, int64_t n, int64_t nrhs,
    std::complex<float> const* A, int64_t lda,
    std::complex<float> const* B, int64_t ldb,
    std::complex<float> const* X, int64_t ldx,
    float* ferr,
    float* berr );

int64_t trrfs(
    lapack::Uplo uplo, lapack::Op trans, lapack::Diag diag, int64_t n, int64_t nrhs,
    std::complex<double> const* A, int64_t lda,
    std::complex<double> const* B, int64_t ldb,
    std::complex<double> const* X, int64_t ldx,
    double* ferr,
    double* berr );

// -----------------------------------------------------------------------------
int64_t trsen(
    lapack::Job job, lapack::CompQ compq,
    bool const* select, int64_t n,
    float* T, int64_t ldt,
    float* Q, int64_t ldq,
    float* WR,
    float* WI,
    int64_t* m,
    float* s,
    float* sep );

int64_t trsen(
    lapack::Job job, lapack::CompQ compq,
    bool const* select, int64_t n,
    double* T, int64_t ldt,
    double* Q, int64_t ldq,
    double* WR,
    double* WI,
    int64_t* m,
    double* s,
    double* sep );

int64_t trsen(
    lapack::Job job, lapack::CompQ compq,
    bool const* select, int64_t n,
    std::complex<float>* T, int64_t ldt,
    std::complex<float>* Q, int64_t ldq,
    std::complex<float>* W,
    int64_t* m,
    float* s,
    float* sep );

int64_t trsen(
    lapack::Job job, lapack::CompQ compq,
    bool const* select, int64_t n,
    std::complex<double>* T, int64_t ldt,
    std::complex<double>* Q, int64_t ldq,
    std::complex<double>* W,
    int64_t* m,
    double* s,
    double* sep );

// -----------------------------------------------------------------------------
int64_t trtri(
    lapack::Uplo uplo, lapack::Diag diag, int64_t n,
    float* A, int64_t lda );

int64_t trtri(
    lapack::Uplo uplo, lapack::Diag diag, int64_t n,
    double* A, int64_t lda );

int64_t trtri(
    lapack::Uplo uplo, lapack::Diag diag, int64_t n,
    std::complex<float>* A, int64_t lda );

int64_t trtri(
    lapack::Uplo uplo, lapack::Diag diag, int64_t n,
    std::complex<double>* A, int64_t lda );

// -----------------------------------------------------------------------------
int64_t trtrs(
    lapack::Uplo uplo, lapack::Op trans, lapack::Diag diag, int64_t n, int64_t nrhs,
    float const* A, int64_t lda,
    float* B, int64_t ldb );

int64_t trtrs(
    lapack::Uplo uplo, lapack::Op trans, lapack::Diag diag, int64_t n, int64_t nrhs,
    double const* A, int64_t lda,
    double* B, int64_t ldb );

int64_t trtrs(
    lapack::Uplo uplo, lapack::Op trans, lapack::Diag diag, int64_t n, int64_t nrhs,
    std::complex<float> const* A, int64_t lda,
    std::complex<float>* B, int64_t ldb );

int64_t trtrs(
    lapack::Uplo uplo, lapack::Op trans, lapack::Diag diag, int64_t n, int64_t nrhs,
    std::complex<double> const* A, int64_t lda,
    std::complex<double>* B, int64_t ldb );

// -----------------------------------------------------------------------------
int64_t trttf(
    lapack::Op transr, lapack::Uplo uplo, int64_t n,
    float const* A, int64_t lda,
    float* ARF );

int64_t trttf(
    lapack::Op transr, lapack::Uplo uplo, int64_t n,
    double const* A, int64_t lda,
    double* ARF );

int64_t trttf(
    lapack::Op transr, lapack::Uplo uplo, int64_t n,
    std::complex<float> const* A, int64_t lda,
    std::complex<float>* ARF );

int64_t trttf(
    lapack::Op transr, lapack::Uplo uplo, int64_t n,
    std::complex<double> const* A, int64_t lda,
    std::complex<double>* ARF );

// -----------------------------------------------------------------------------
int64_t trttp(
    lapack::Uplo uplo, int64_t n,
    float const* A, int64_t lda,
    float* AP );

int64_t trttp(
    lapack::Uplo uplo, int64_t n,
    double const* A, int64_t lda,
    double* AP );

int64_t trttp(
    lapack::Uplo uplo, int64_t n,
    std::complex<float> const* A, int64_t lda,
    std::complex<float>* AP );

int64_t trttp(
    lapack::Uplo uplo, int64_t n,
    std::complex<double> const* A, int64_t lda,
    std::complex<double>* AP );

// -----------------------------------------------------------------------------
int64_t tzrzf(
    int64_t m, int64_t n,
    float* A, int64_t lda,
    float* tau );

int64_t tzrzf(
    int64_t m, int64_t n,
    double* A, int64_t lda,
    double* tau );

int64_t tzrzf(
    int64_t m, int64_t n,
    std::complex<float>* A, int64_t lda,
    std::complex<float>* tau );

int64_t tzrzf(
    int64_t m, int64_t n,
    std::complex<double>* A, int64_t lda,
    std::complex<double>* tau );

// -----------------------------------------------------------------------------
int64_t ungbr(
    lapack::Vect vect, int64_t m, int64_t n, int64_t k,
    std::complex<float>* A, int64_t lda,
    std::complex<float> const* tau );

int64_t ungbr(
    lapack::Vect vect, int64_t m, int64_t n, int64_t k,
    std::complex<double>* A, int64_t lda,
    std::complex<double> const* tau );

// -----------------------------------------------------------------------------
int64_t unghr(
    int64_t n, int64_t ilo, int64_t ihi,
    std::complex<float>* A, int64_t lda,
    std::complex<float> const* tau );

int64_t unghr(
    int64_t n, int64_t ilo, int64_t ihi,
    std::complex<double>* A, int64_t lda,
    std::complex<double> const* tau );

// -----------------------------------------------------------------------------
int64_t unglq(
    int64_t m, int64_t n, int64_t k,
    std::complex<float>* A, int64_t lda,
    std::complex<float> const* tau );

int64_t unglq(
    int64_t m, int64_t n, int64_t k,
    std::complex<double>* A, int64_t lda,
    std::complex<double> const* tau );

// -----------------------------------------------------------------------------
int64_t ungql(
    int64_t m, int64_t n, int64_t k,
    std::complex<float>* A, int64_t lda,
    std::complex<float> const* tau );

int64_t ungql(
    int64_t m, int64_t n, int64_t k,
    std::complex<double>* A, int64_t lda,
    std::complex<double> const* tau );

// -----------------------------------------------------------------------------
int64_t ungqr(
    int64_t m, int64_t n, int64_t k,
    std::complex<float>* A, int64_t lda,
    std::complex<float> const* tau );

int64_t ungqr(
    int64_t m, int64_t n, int64_t k,
    std::complex<double>* A, int64_t lda,
    std::complex<double> const* tau );

// -----------------------------------------------------------------------------
int64_t ungrq(
    int64_t m, int64_t n, int64_t k,
    std::complex<float>* A, int64_t lda,
    std::complex<float> const* tau );

int64_t ungrq(
    int64_t m, int64_t n, int64_t k,
    std::complex<double>* A, int64_t lda,
    std::complex<double> const* tau );

// -----------------------------------------------------------------------------
int64_t ungtr(
    lapack::Uplo uplo, int64_t n,
    std::complex<float>* A, int64_t lda,
    std::complex<float> const* tau );

int64_t ungtr(
    lapack::Uplo uplo, int64_t n,
    std::complex<double>* A, int64_t lda,
    std::complex<double> const* tau );

// -----------------------------------------------------------------------------
int64_t unmbr(
    lapack::Vect vect, lapack::Side side, lapack::Op trans, int64_t m, int64_t n, int64_t k,
    std::complex<float> const* A, int64_t lda,
    std::complex<float> const* tau,
    std::complex<float>* C, int64_t ldc );

int64_t unmbr(
    lapack::Vect vect, lapack::Side side, lapack::Op trans, int64_t m, int64_t n, int64_t k,
    std::complex<double> const* A, int64_t lda,
    std::complex<double> const* tau,
    std::complex<double>* C, int64_t ldc );

// -----------------------------------------------------------------------------
int64_t unmhr(
    lapack::Side side, lapack::Op trans, int64_t m, int64_t n, int64_t ilo, int64_t ihi,
    std::complex<float> const* A, int64_t lda,
    std::complex<float> const* tau,
    std::complex<float>* C, int64_t ldc );

int64_t unmhr(
    lapack::Side side, lapack::Op trans, int64_t m, int64_t n, int64_t ilo, int64_t ihi,
    std::complex<double> const* A, int64_t lda,
    std::complex<double> const* tau,
    std::complex<double>* C, int64_t ldc );

// -----------------------------------------------------------------------------
int64_t unmlq(
    lapack::Side side, lapack::Op trans, int64_t m, int64_t n, int64_t k,
    std::complex<float> const* A, int64_t lda,
    std::complex<float> const* tau,
    std::complex<float>* C, int64_t ldc );

int64_t unmlq(
    lapack::Side side, lapack::Op trans, int64_t m, int64_t n, int64_t k,
    std::complex<double> const* A, int64_t lda,
    std::complex<double> const* tau,
    std::complex<double>* C, int64_t ldc );

// -----------------------------------------------------------------------------
int64_t unmql(
    lapack::Side side, lapack::Op trans, int64_t m, int64_t n, int64_t k,
    std::complex<float> const* A, int64_t lda,
    std::complex<float> const* tau,
    std::complex<float>* C, int64_t ldc );

int64_t unmql(
    lapack::Side side, lapack::Op trans, int64_t m, int64_t n, int64_t k,
    std::complex<double> const* A, int64_t lda,
    std::complex<double> const* tau,
    std::complex<double>* C, int64_t ldc );

// -----------------------------------------------------------------------------
int64_t unmqr(
    lapack::Side side, lapack::Op trans, int64_t m, int64_t n, int64_t k,
    std::complex<float> const* A, int64_t lda,
    std::complex<float> const* tau,
    std::complex<float>* C, int64_t ldc );

int64_t unmqr(
    lapack::Side side, lapack::Op trans, int64_t m, int64_t n, int64_t k,
    std::complex<double> const* A, int64_t lda,
    std::complex<double> const* tau,
    std::complex<double>* C, int64_t ldc );

// -----------------------------------------------------------------------------
int64_t unmrq(
    lapack::Side side, lapack::Op trans, int64_t m, int64_t n, int64_t k,
    std::complex<float> const* A, int64_t lda,
    std::complex<float> const* tau,
    std::complex<float>* C, int64_t ldc );

int64_t unmrq(
    lapack::Side side, lapack::Op trans, int64_t m, int64_t n, int64_t k,
    std::complex<double> const* A, int64_t lda,
    std::complex<double> const* tau,
    std::complex<double>* C, int64_t ldc );

// -----------------------------------------------------------------------------
int64_t unmrz(
    lapack::Side side, lapack::Op trans, int64_t m, int64_t n, int64_t k, int64_t l,
    std::complex<float> const* A, int64_t lda,
    std::complex<float> const* tau,
    std::complex<float>* C, int64_t ldc );

int64_t unmrz(
    lapack::Side side, lapack::Op trans, int64_t m, int64_t n, int64_t k, int64_t l,
    std::complex<double> const* A, int64_t lda,
    std::complex<double> const* tau,
    std::complex<double>* C, int64_t ldc );

// -----------------------------------------------------------------------------
int64_t unmtr(
    lapack::Side side, lapack::Uplo uplo, lapack::Op trans, int64_t m, int64_t n,
    std::complex<float> const* A, int64_t lda,
    std::complex<float> const* tau,
    std::complex<float>* C, int64_t ldc );

int64_t unmtr(
    lapack::Side side, lapack::Uplo uplo, lapack::Op trans, int64_t m, int64_t n,
    std::complex<double> const* A, int64_t lda,
    std::complex<double> const* tau,
    std::complex<double>* C, int64_t ldc );

// -----------------------------------------------------------------------------
int64_t upgtr(
    lapack::Uplo uplo, int64_t n,
    std::complex<float> const* AP,
    std::complex<float> const* tau,
    std::complex<float>* Q, int64_t ldq );

int64_t upgtr(
    lapack::Uplo uplo, int64_t n,
    std::complex<double> const* AP,
    std::complex<double> const* tau,
    std::complex<double>* Q, int64_t ldq );


}  // namespace lapack

#endif // ICL_LAPACK_WRAPPERS_HH