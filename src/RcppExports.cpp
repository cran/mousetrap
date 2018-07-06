// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// cleanAngles
NumericMatrix cleanAngles(NumericMatrix as);
RcppExport SEXP _mousetrap_cleanAngles(SEXP asSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type as(asSEXP);
    rcpp_result_gen = Rcpp::wrap(cleanAngles(as));
    return rcpp_result_gen;
END_RCPP
}
// distMat
NumericMatrix distMat(NumericMatrix x, NumericMatrix y, int power);
RcppExport SEXP _mousetrap_distMat(SEXP xSEXP, SEXP ySEXP, SEXP powerSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type y(ySEXP);
    Rcpp::traits::input_parameter< int >::type power(powerSEXP);
    rcpp_result_gen = Rcpp::wrap(distMat(x, y, power));
    return rcpp_result_gen;
END_RCPP
}
// distMatV
NumericMatrix distMatV(NumericMatrix x, NumericMatrix y, int power);
RcppExport SEXP _mousetrap_distMatV(SEXP xSEXP, SEXP ySEXP, SEXP powerSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type y(ySEXP);
    Rcpp::traits::input_parameter< int >::type power(powerSEXP);
    rcpp_result_gen = Rcpp::wrap(distMatV(x, y, power));
    return rcpp_result_gen;
END_RCPP
}
// distMat3d
NumericMatrix distMat3d(NumericMatrix x, NumericMatrix y, NumericMatrix z, int power);
RcppExport SEXP _mousetrap_distMat3d(SEXP xSEXP, SEXP ySEXP, SEXP zSEXP, SEXP powerSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type y(ySEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type z(zSEXP);
    Rcpp::traits::input_parameter< int >::type power(powerSEXP);
    rcpp_result_gen = Rcpp::wrap(distMat3d(x, y, z, power));
    return rcpp_result_gen;
END_RCPP
}
// distMat3dV
NumericMatrix distMat3dV(NumericMatrix x, NumericMatrix y, NumericMatrix z, int power);
RcppExport SEXP _mousetrap_distMat3dV(SEXP xSEXP, SEXP ySEXP, SEXP zSEXP, SEXP powerSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type y(ySEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type z(zSEXP);
    Rcpp::traits::input_parameter< int >::type power(powerSEXP);
    rcpp_result_gen = Rcpp::wrap(distMat3dV(x, y, z, power));
    return rcpp_result_gen;
END_RCPP
}
// select_max
NumericVector select_max(NumericVector x, NumericVector y);
RcppExport SEXP _mousetrap_select_max(SEXP xSEXP, SEXP ySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type y(ySEXP);
    rcpp_result_gen = Rcpp::wrap(select_max(x, y));
    return rcpp_result_gen;
END_RCPP
}
// computeNorm
std::vector<double> computeNorm(double r);
RcppExport SEXP _mousetrap_computeNorm(SEXP rSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type r(rSEXP);
    rcpp_result_gen = Rcpp::wrap(computeNorm(r));
    return rcpp_result_gen;
END_RCPP
}
// gaussBlurSlow
std::vector<double> gaussBlurSlow(std::vector<double> source, std::vector<double> target, double w, double h, double r);
RcppExport SEXP _mousetrap_gaussBlurSlow(SEXP sourceSEXP, SEXP targetSEXP, SEXP wSEXP, SEXP hSEXP, SEXP rSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::vector<double> >::type source(sourceSEXP);
    Rcpp::traits::input_parameter< std::vector<double> >::type target(targetSEXP);
    Rcpp::traits::input_parameter< double >::type w(wSEXP);
    Rcpp::traits::input_parameter< double >::type h(hSEXP);
    Rcpp::traits::input_parameter< double >::type r(rSEXP);
    rcpp_result_gen = Rcpp::wrap(gaussBlurSlow(source, target, w, h, r));
    return rcpp_result_gen;
END_RCPP
}
// gaussBlur
std::vector<double> gaussBlur(std::vector<double> source, std::vector<double> target, double w, double h, double r);
RcppExport SEXP _mousetrap_gaussBlur(SEXP sourceSEXP, SEXP targetSEXP, SEXP wSEXP, SEXP hSEXP, SEXP rSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::vector<double> >::type source(sourceSEXP);
    Rcpp::traits::input_parameter< std::vector<double> >::type target(targetSEXP);
    Rcpp::traits::input_parameter< double >::type w(wSEXP);
    Rcpp::traits::input_parameter< double >::type h(hSEXP);
    Rcpp::traits::input_parameter< double >::type r(rSEXP);
    rcpp_result_gen = Rcpp::wrap(gaussBlur(source, target, w, h, r));
    return rcpp_result_gen;
END_RCPP
}
// boxBlur
std::vector<double> boxBlur(std::vector<double> source, std::vector<double> target, double w, double h, double r);
RcppExport SEXP _mousetrap_boxBlur(SEXP sourceSEXP, SEXP targetSEXP, SEXP wSEXP, SEXP hSEXP, SEXP rSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::vector<double> >::type source(sourceSEXP);
    Rcpp::traits::input_parameter< std::vector<double> >::type target(targetSEXP);
    Rcpp::traits::input_parameter< double >::type w(wSEXP);
    Rcpp::traits::input_parameter< double >::type h(hSEXP);
    Rcpp::traits::input_parameter< double >::type r(rSEXP);
    rcpp_result_gen = Rcpp::wrap(boxBlur(source, target, w, h, r));
    return rcpp_result_gen;
END_RCPP
}
// getAngleP
NumericVector getAngleP(NumericVector x, NumericVector y);
RcppExport SEXP _mousetrap_getAngleP(SEXP xSEXP, SEXP ySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type y(ySEXP);
    rcpp_result_gen = Rcpp::wrap(getAngleP(x, y));
    return rcpp_result_gen;
END_RCPP
}
// getAngleV
NumericVector getAngleV(NumericVector x, NumericVector y);
RcppExport SEXP _mousetrap_getAngleV(SEXP xSEXP, SEXP ySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type y(ySEXP);
    rcpp_result_gen = Rcpp::wrap(getAngleV(x, y));
    return rcpp_result_gen;
END_RCPP
}
// getAnglesP
NumericMatrix getAnglesP(NumericMatrix xs, NumericMatrix ys);
RcppExport SEXP _mousetrap_getAnglesP(SEXP xsSEXP, SEXP ysSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type xs(xsSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type ys(ysSEXP);
    rcpp_result_gen = Rcpp::wrap(getAnglesP(xs, ys));
    return rcpp_result_gen;
END_RCPP
}
// getAnglesV
NumericMatrix getAnglesV(NumericMatrix xs, NumericMatrix ys);
RcppExport SEXP _mousetrap_getAnglesV(SEXP xsSEXP, SEXP ysSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type xs(xsSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type ys(ysSEXP);
    rcpp_result_gen = Rcpp::wrap(getAnglesV(xs, ys));
    return rcpp_result_gen;
END_RCPP
}
// getlast
NumericVector getlast(NumericMatrix trajectories);
RcppExport SEXP _mousetrap_getlast(SEXP trajectoriesSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type trajectories(trajectoriesSEXP);
    rcpp_result_gen = Rcpp::wrap(getlast(trajectories));
    return rcpp_result_gen;
END_RCPP
}
// getLength
double getLength(NumericVector x, NumericVector y);
RcppExport SEXP _mousetrap_getLength(SEXP xSEXP, SEXP ySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type y(ySEXP);
    rcpp_result_gen = Rcpp::wrap(getLength(x, y));
    return rcpp_result_gen;
END_RCPP
}
// getLength3d
double getLength3d(NumericVector x, NumericVector y, NumericVector z);
RcppExport SEXP _mousetrap_getLength3d(SEXP xSEXP, SEXP ySEXP, SEXP zSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type y(ySEXP);
    Rcpp::traits::input_parameter< NumericVector >::type z(zSEXP);
    rcpp_result_gen = Rcpp::wrap(getLength3d(x, y, z));
    return rcpp_result_gen;
END_RCPP
}
// getLengths
NumericVector getLengths(NumericMatrix xs, NumericMatrix ys);
RcppExport SEXP _mousetrap_getLengths(SEXP xsSEXP, SEXP ysSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type xs(xsSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type ys(ysSEXP);
    rcpp_result_gen = Rcpp::wrap(getLengths(xs, ys));
    return rcpp_result_gen;
END_RCPP
}
// getLengths3d
NumericVector getLengths3d(NumericMatrix xs, NumericMatrix ys, NumericMatrix zs);
RcppExport SEXP _mousetrap_getLengths3d(SEXP xsSEXP, SEXP ysSEXP, SEXP zsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type xs(xsSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type ys(ysSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type zs(zsSEXP);
    rcpp_result_gen = Rcpp::wrap(getLengths3d(xs, ys, zs));
    return rcpp_result_gen;
END_RCPP
}
// getVelocity
NumericVector getVelocity(NumericVector x, NumericVector y);
RcppExport SEXP _mousetrap_getVelocity(SEXP xSEXP, SEXP ySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type y(ySEXP);
    rcpp_result_gen = Rcpp::wrap(getVelocity(x, y));
    return rcpp_result_gen;
END_RCPP
}
// getVelocity3d
NumericVector getVelocity3d(NumericVector x, NumericVector y, NumericVector z);
RcppExport SEXP _mousetrap_getVelocity3d(SEXP xSEXP, SEXP ySEXP, SEXP zSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type y(ySEXP);
    Rcpp::traits::input_parameter< NumericVector >::type z(zSEXP);
    rcpp_result_gen = Rcpp::wrap(getVelocity3d(x, y, z));
    return rcpp_result_gen;
END_RCPP
}
// getVelocities
NumericMatrix getVelocities(NumericMatrix xs, NumericMatrix ys);
RcppExport SEXP _mousetrap_getVelocities(SEXP xsSEXP, SEXP ysSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type xs(xsSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type ys(ysSEXP);
    rcpp_result_gen = Rcpp::wrap(getVelocities(xs, ys));
    return rcpp_result_gen;
END_RCPP
}
// getVelocities3d
NumericMatrix getVelocities3d(NumericMatrix xs, NumericMatrix ys, NumericMatrix zs);
RcppExport SEXP _mousetrap_getVelocities3d(SEXP xsSEXP, SEXP ysSEXP, SEXP zsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type xs(xsSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type ys(ysSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type zs(zsSEXP);
    rcpp_result_gen = Rcpp::wrap(getVelocities3d(xs, ys, zs));
    return rcpp_result_gen;
END_RCPP
}
// spatialize
NumericMatrix spatialize(NumericVector x, NumericVector y, int npts);
RcppExport SEXP _mousetrap_spatialize(SEXP xSEXP, SEXP ySEXP, SEXP nptsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type y(ySEXP);
    Rcpp::traits::input_parameter< int >::type npts(nptsSEXP);
    rcpp_result_gen = Rcpp::wrap(spatialize(x, y, npts));
    return rcpp_result_gen;
END_RCPP
}
// spatialize3d
NumericMatrix spatialize3d(NumericVector x, NumericVector y, NumericVector z, int npts);
RcppExport SEXP _mousetrap_spatialize3d(SEXP xSEXP, SEXP ySEXP, SEXP zSEXP, SEXP nptsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type y(ySEXP);
    Rcpp::traits::input_parameter< NumericVector >::type z(zSEXP);
    Rcpp::traits::input_parameter< int >::type npts(nptsSEXP);
    rcpp_result_gen = Rcpp::wrap(spatialize3d(x, y, z, npts));
    return rcpp_result_gen;
END_RCPP
}
// spatialize4d
NumericMatrix spatialize4d(NumericVector x, NumericVector y, NumericVector z1, NumericVector z2, int npts);
RcppExport SEXP _mousetrap_spatialize4d(SEXP xSEXP, SEXP ySEXP, SEXP z1SEXP, SEXP z2SEXP, SEXP nptsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type y(ySEXP);
    Rcpp::traits::input_parameter< NumericVector >::type z1(z1SEXP);
    Rcpp::traits::input_parameter< NumericVector >::type z2(z2SEXP);
    Rcpp::traits::input_parameter< int >::type npts(nptsSEXP);
    rcpp_result_gen = Rcpp::wrap(spatialize4d(x, y, z1, z2, npts));
    return rcpp_result_gen;
END_RCPP
}
// spatializeArray
GenericVector spatializeArray(NumericMatrix xs, NumericMatrix ys, NumericVector n_pts);
RcppExport SEXP _mousetrap_spatializeArray(SEXP xsSEXP, SEXP ysSEXP, SEXP n_ptsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type xs(xsSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type ys(ysSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type n_pts(n_ptsSEXP);
    rcpp_result_gen = Rcpp::wrap(spatializeArray(xs, ys, n_pts));
    return rcpp_result_gen;
END_RCPP
}
// spatializeArrayToLong
NumericMatrix spatializeArrayToLong(NumericMatrix xs, NumericMatrix ys, NumericVector n_pts);
RcppExport SEXP _mousetrap_spatializeArrayToLong(SEXP xsSEXP, SEXP ysSEXP, SEXP n_ptsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type xs(xsSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type ys(ysSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type n_pts(n_ptsSEXP);
    rcpp_result_gen = Rcpp::wrap(spatializeArrayToLong(xs, ys, n_pts));
    return rcpp_result_gen;
END_RCPP
}
// spatializeArray3d
GenericVector spatializeArray3d(NumericMatrix xs, NumericMatrix ys, NumericMatrix zs, NumericVector n_pts);
RcppExport SEXP _mousetrap_spatializeArray3d(SEXP xsSEXP, SEXP ysSEXP, SEXP zsSEXP, SEXP n_ptsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type xs(xsSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type ys(ysSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type zs(zsSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type n_pts(n_ptsSEXP);
    rcpp_result_gen = Rcpp::wrap(spatializeArray3d(xs, ys, zs, n_pts));
    return rcpp_result_gen;
END_RCPP
}
// spatializeArrayToLong3d
NumericMatrix spatializeArrayToLong3d(NumericMatrix xs, NumericMatrix ys, NumericMatrix zs, NumericVector n_pts);
RcppExport SEXP _mousetrap_spatializeArrayToLong3d(SEXP xsSEXP, SEXP ysSEXP, SEXP zsSEXP, SEXP n_ptsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type xs(xsSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type ys(ysSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type zs(zsSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type n_pts(n_ptsSEXP);
    rcpp_result_gen = Rcpp::wrap(spatializeArrayToLong3d(xs, ys, zs, n_pts));
    return rcpp_result_gen;
END_RCPP
}
// spatializeArrayToLong4d
NumericMatrix spatializeArrayToLong4d(NumericMatrix xs, NumericMatrix ys, NumericMatrix z1s, NumericMatrix z2s, NumericVector n_pts);
RcppExport SEXP _mousetrap_spatializeArrayToLong4d(SEXP xsSEXP, SEXP ysSEXP, SEXP z1sSEXP, SEXP z2sSEXP, SEXP n_ptsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type xs(xsSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type ys(ysSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type z1s(z1sSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type z2s(z2sSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type n_pts(n_ptsSEXP);
    rcpp_result_gen = Rcpp::wrap(spatializeArrayToLong4d(xs, ys, z1s, z2s, n_pts));
    return rcpp_result_gen;
END_RCPP
}
// sd_mat
double sd_mat(NumericMatrix mat);
RcppExport SEXP _mousetrap_sd_mat(SEXP matSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type mat(matSEXP);
    rcpp_result_gen = Rcpp::wrap(sd_mat(mat));
    return rcpp_result_gen;
END_RCPP
}
// moments_mat
NumericVector moments_mat(NumericMatrix mat);
RcppExport SEXP _mousetrap_moments_mat(SEXP matSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type mat(matSEXP);
    rcpp_result_gen = Rcpp::wrap(moments_mat(mat));
    return rcpp_result_gen;
END_RCPP
}
// scale_rows
NumericVector scale_rows(NumericMatrix mat, bool center, bool scale);
RcppExport SEXP _mousetrap_scale_rows(SEXP matSEXP, SEXP centerSEXP, SEXP scaleSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type mat(matSEXP);
    Rcpp::traits::input_parameter< bool >::type center(centerSEXP);
    Rcpp::traits::input_parameter< bool >::type scale(scaleSEXP);
    rcpp_result_gen = Rcpp::wrap(scale_rows(mat, center, scale));
    return rcpp_result_gen;
END_RCPP
}
// trans_rows
NumericVector trans_rows(NumericMatrix mat, double scale, bool center);
RcppExport SEXP _mousetrap_trans_rows(SEXP matSEXP, SEXP scaleSEXP, SEXP centerSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type mat(matSEXP);
    Rcpp::traits::input_parameter< double >::type scale(scaleSEXP);
    Rcpp::traits::input_parameter< bool >::type center(centerSEXP);
    rcpp_result_gen = Rcpp::wrap(trans_rows(mat, scale, center));
    return rcpp_result_gen;
END_RCPP
}
// scale_mat
NumericMatrix scale_mat(NumericMatrix mat, bool center, bool scale);
RcppExport SEXP _mousetrap_scale_mat(SEXP matSEXP, SEXP centerSEXP, SEXP scaleSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type mat(matSEXP);
    Rcpp::traits::input_parameter< bool >::type center(centerSEXP);
    Rcpp::traits::input_parameter< bool >::type scale(scaleSEXP);
    rcpp_result_gen = Rcpp::wrap(scale_mat(mat, center, scale));
    return rcpp_result_gen;
END_RCPP
}
// trans_mat
NumericMatrix trans_mat(NumericMatrix mat, double scale, bool center);
RcppExport SEXP _mousetrap_trans_mat(SEXP matSEXP, SEXP scaleSEXP, SEXP centerSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type mat(matSEXP);
    Rcpp::traits::input_parameter< double >::type scale(scaleSEXP);
    Rcpp::traits::input_parameter< bool >::type center(centerSEXP);
    rcpp_result_gen = Rcpp::wrap(trans_mat(mat, scale, center));
    return rcpp_result_gen;
END_RCPP
}
// tab
NumericMatrix tab(std::vector<double> v1, std::vector<double> v2);
RcppExport SEXP _mousetrap_tab(SEXP v1SEXP, SEXP v2SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::vector<double> >::type v1(v1SEXP);
    Rcpp::traits::input_parameter< std::vector<double> >::type v2(v2SEXP);
    rcpp_result_gen = Rcpp::wrap(tab(v1, v2));
    return rcpp_result_gen;
END_RCPP
}
// tab_sum
NumericMatrix tab_sum(std::vector<double> v1, std::vector<double> v2, std::vector<double> a);
RcppExport SEXP _mousetrap_tab_sum(SEXP v1SEXP, SEXP v2SEXP, SEXP aSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::vector<double> >::type v1(v1SEXP);
    Rcpp::traits::input_parameter< std::vector<double> >::type v2(v2SEXP);
    Rcpp::traits::input_parameter< std::vector<double> >::type a(aSEXP);
    rcpp_result_gen = Rcpp::wrap(tab_sum(v1, v2, a));
    return rcpp_result_gen;
END_RCPP
}
// tab_mean
NumericMatrix tab_mean(std::vector<double> v1, std::vector<double> v2, std::vector<double> a);
RcppExport SEXP _mousetrap_tab_mean(SEXP v1SEXP, SEXP v2SEXP, SEXP aSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::vector<double> >::type v1(v1SEXP);
    Rcpp::traits::input_parameter< std::vector<double> >::type v2(v2SEXP);
    Rcpp::traits::input_parameter< std::vector<double> >::type a(aSEXP);
    rcpp_result_gen = Rcpp::wrap(tab_mean(v1, v2, a));
    return rcpp_result_gen;
END_RCPP
}
// trajAlign
GenericVector trajAlign(NumericMatrix xs, NumericMatrix ys, bool start, bool end, NumericVector coordinates);
RcppExport SEXP _mousetrap_trajAlign(SEXP xsSEXP, SEXP ysSEXP, SEXP startSEXP, SEXP endSEXP, SEXP coordinatesSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type xs(xsSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type ys(ysSEXP);
    Rcpp::traits::input_parameter< bool >::type start(startSEXP);
    Rcpp::traits::input_parameter< bool >::type end(endSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type coordinates(coordinatesSEXP);
    rcpp_result_gen = Rcpp::wrap(trajAlign(xs, ys, start, end, coordinates));
    return rcpp_result_gen;
END_RCPP
}
// trajAlign3d
GenericVector trajAlign3d(NumericMatrix xs, NumericMatrix ys, NumericMatrix zs, bool start, bool end, NumericVector coordinates);
RcppExport SEXP _mousetrap_trajAlign3d(SEXP xsSEXP, SEXP ysSEXP, SEXP zsSEXP, SEXP startSEXP, SEXP endSEXP, SEXP coordinatesSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type xs(xsSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type ys(ysSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type zs(zsSEXP);
    Rcpp::traits::input_parameter< bool >::type start(startSEXP);
    Rcpp::traits::input_parameter< bool >::type end(endSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type coordinates(coordinatesSEXP);
    rcpp_result_gen = Rcpp::wrap(trajAlign3d(xs, ys, zs, start, end, coordinates));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_mousetrap_cleanAngles", (DL_FUNC) &_mousetrap_cleanAngles, 1},
    {"_mousetrap_distMat", (DL_FUNC) &_mousetrap_distMat, 3},
    {"_mousetrap_distMatV", (DL_FUNC) &_mousetrap_distMatV, 3},
    {"_mousetrap_distMat3d", (DL_FUNC) &_mousetrap_distMat3d, 4},
    {"_mousetrap_distMat3dV", (DL_FUNC) &_mousetrap_distMat3dV, 4},
    {"_mousetrap_select_max", (DL_FUNC) &_mousetrap_select_max, 2},
    {"_mousetrap_computeNorm", (DL_FUNC) &_mousetrap_computeNorm, 1},
    {"_mousetrap_gaussBlurSlow", (DL_FUNC) &_mousetrap_gaussBlurSlow, 5},
    {"_mousetrap_gaussBlur", (DL_FUNC) &_mousetrap_gaussBlur, 5},
    {"_mousetrap_boxBlur", (DL_FUNC) &_mousetrap_boxBlur, 5},
    {"_mousetrap_getAngleP", (DL_FUNC) &_mousetrap_getAngleP, 2},
    {"_mousetrap_getAngleV", (DL_FUNC) &_mousetrap_getAngleV, 2},
    {"_mousetrap_getAnglesP", (DL_FUNC) &_mousetrap_getAnglesP, 2},
    {"_mousetrap_getAnglesV", (DL_FUNC) &_mousetrap_getAnglesV, 2},
    {"_mousetrap_getlast", (DL_FUNC) &_mousetrap_getlast, 1},
    {"_mousetrap_getLength", (DL_FUNC) &_mousetrap_getLength, 2},
    {"_mousetrap_getLength3d", (DL_FUNC) &_mousetrap_getLength3d, 3},
    {"_mousetrap_getLengths", (DL_FUNC) &_mousetrap_getLengths, 2},
    {"_mousetrap_getLengths3d", (DL_FUNC) &_mousetrap_getLengths3d, 3},
    {"_mousetrap_getVelocity", (DL_FUNC) &_mousetrap_getVelocity, 2},
    {"_mousetrap_getVelocity3d", (DL_FUNC) &_mousetrap_getVelocity3d, 3},
    {"_mousetrap_getVelocities", (DL_FUNC) &_mousetrap_getVelocities, 2},
    {"_mousetrap_getVelocities3d", (DL_FUNC) &_mousetrap_getVelocities3d, 3},
    {"_mousetrap_spatialize", (DL_FUNC) &_mousetrap_spatialize, 3},
    {"_mousetrap_spatialize3d", (DL_FUNC) &_mousetrap_spatialize3d, 4},
    {"_mousetrap_spatialize4d", (DL_FUNC) &_mousetrap_spatialize4d, 5},
    {"_mousetrap_spatializeArray", (DL_FUNC) &_mousetrap_spatializeArray, 3},
    {"_mousetrap_spatializeArrayToLong", (DL_FUNC) &_mousetrap_spatializeArrayToLong, 3},
    {"_mousetrap_spatializeArray3d", (DL_FUNC) &_mousetrap_spatializeArray3d, 4},
    {"_mousetrap_spatializeArrayToLong3d", (DL_FUNC) &_mousetrap_spatializeArrayToLong3d, 4},
    {"_mousetrap_spatializeArrayToLong4d", (DL_FUNC) &_mousetrap_spatializeArrayToLong4d, 5},
    {"_mousetrap_sd_mat", (DL_FUNC) &_mousetrap_sd_mat, 1},
    {"_mousetrap_moments_mat", (DL_FUNC) &_mousetrap_moments_mat, 1},
    {"_mousetrap_scale_rows", (DL_FUNC) &_mousetrap_scale_rows, 3},
    {"_mousetrap_trans_rows", (DL_FUNC) &_mousetrap_trans_rows, 3},
    {"_mousetrap_scale_mat", (DL_FUNC) &_mousetrap_scale_mat, 3},
    {"_mousetrap_trans_mat", (DL_FUNC) &_mousetrap_trans_mat, 3},
    {"_mousetrap_tab", (DL_FUNC) &_mousetrap_tab, 2},
    {"_mousetrap_tab_sum", (DL_FUNC) &_mousetrap_tab_sum, 3},
    {"_mousetrap_tab_mean", (DL_FUNC) &_mousetrap_tab_mean, 3},
    {"_mousetrap_trajAlign", (DL_FUNC) &_mousetrap_trajAlign, 5},
    {"_mousetrap_trajAlign3d", (DL_FUNC) &_mousetrap_trajAlign3d, 6},
    {NULL, NULL, 0}
};

RcppExport void R_init_mousetrap(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
