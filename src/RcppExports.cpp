// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppEigen.h>
#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// sortedL1ProxCpp
Eigen::MatrixXd sortedL1ProxCpp(const Eigen::MatrixXd& x, const Eigen::ArrayXd& lambda);
RcppExport SEXP _SLOPE_sortedL1ProxCpp(SEXP xSEXP, SEXP lambdaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Eigen::MatrixXd& >::type x(xSEXP);
    Rcpp::traits::input_parameter< const Eigen::ArrayXd& >::type lambda(lambdaSEXP);
    rcpp_result_gen = Rcpp::wrap(sortedL1ProxCpp(x, lambda));
    return rcpp_result_gen;
END_RCPP
}
// lambdaSequenceCpp
Eigen::ArrayXd lambdaSequenceCpp(const int n_lambda, const double q, const double theta1, const double theta2, const std::string& lambda_type, const int n);
RcppExport SEXP _SLOPE_lambdaSequenceCpp(SEXP n_lambdaSEXP, SEXP qSEXP, SEXP theta1SEXP, SEXP theta2SEXP, SEXP lambda_typeSEXP, SEXP nSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const int >::type n_lambda(n_lambdaSEXP);
    Rcpp::traits::input_parameter< const double >::type q(qSEXP);
    Rcpp::traits::input_parameter< const double >::type theta1(theta1SEXP);
    Rcpp::traits::input_parameter< const double >::type theta2(theta2SEXP);
    Rcpp::traits::input_parameter< const std::string& >::type lambda_type(lambda_typeSEXP);
    Rcpp::traits::input_parameter< const int >::type n(nSEXP);
    rcpp_result_gen = Rcpp::wrap(lambdaSequenceCpp(n_lambda, q, theta1, theta2, lambda_type, n));
    return rcpp_result_gen;
END_RCPP
}
// sparseSLOPE
Rcpp::List sparseSLOPE(Eigen::SparseMatrix<double>& x, const Eigen::MatrixXd& y, const Rcpp::List& control);
RcppExport SEXP _SLOPE_sparseSLOPE(SEXP xSEXP, SEXP ySEXP, SEXP controlSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Eigen::SparseMatrix<double>& >::type x(xSEXP);
    Rcpp::traits::input_parameter< const Eigen::MatrixXd& >::type y(ySEXP);
    Rcpp::traits::input_parameter< const Rcpp::List& >::type control(controlSEXP);
    rcpp_result_gen = Rcpp::wrap(sparseSLOPE(x, y, control));
    return rcpp_result_gen;
END_RCPP
}
// denseSLOPE
Rcpp::List denseSLOPE(Eigen::MatrixXd& x, const Eigen::MatrixXd& y, const Rcpp::List& control);
RcppExport SEXP _SLOPE_denseSLOPE(SEXP xSEXP, SEXP ySEXP, SEXP controlSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Eigen::MatrixXd& >::type x(xSEXP);
    Rcpp::traits::input_parameter< const Eigen::MatrixXd& >::type y(ySEXP);
    Rcpp::traits::input_parameter< const Rcpp::List& >::type control(controlSEXP);
    rcpp_result_gen = Rcpp::wrap(denseSLOPE(x, y, control));
    return rcpp_result_gen;
END_RCPP
}
// cvSparseCpp
Rcpp::List cvSparseCpp(Eigen::SparseMatrix<double>& x, const Eigen::MatrixXd& y, const Rcpp::List& cv_args, const Rcpp::List& model_args);
RcppExport SEXP _SLOPE_cvSparseCpp(SEXP xSEXP, SEXP ySEXP, SEXP cv_argsSEXP, SEXP model_argsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Eigen::SparseMatrix<double>& >::type x(xSEXP);
    Rcpp::traits::input_parameter< const Eigen::MatrixXd& >::type y(ySEXP);
    Rcpp::traits::input_parameter< const Rcpp::List& >::type cv_args(cv_argsSEXP);
    Rcpp::traits::input_parameter< const Rcpp::List& >::type model_args(model_argsSEXP);
    rcpp_result_gen = Rcpp::wrap(cvSparseCpp(x, y, cv_args, model_args));
    return rcpp_result_gen;
END_RCPP
}
// cvDenseCpp
Rcpp::List cvDenseCpp(Eigen::MatrixXd& x, const Eigen::MatrixXd& y, const Rcpp::List& cv_args, const Rcpp::List& model_args);
RcppExport SEXP _SLOPE_cvDenseCpp(SEXP xSEXP, SEXP ySEXP, SEXP cv_argsSEXP, SEXP model_argsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Eigen::MatrixXd& >::type x(xSEXP);
    Rcpp::traits::input_parameter< const Eigen::MatrixXd& >::type y(ySEXP);
    Rcpp::traits::input_parameter< const Rcpp::List& >::type cv_args(cv_argsSEXP);
    Rcpp::traits::input_parameter< const Rcpp::List& >::type model_args(model_argsSEXP);
    rcpp_result_gen = Rcpp::wrap(cvDenseCpp(x, y, cv_args, model_args));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_SLOPE_sortedL1ProxCpp", (DL_FUNC) &_SLOPE_sortedL1ProxCpp, 2},
    {"_SLOPE_lambdaSequenceCpp", (DL_FUNC) &_SLOPE_lambdaSequenceCpp, 6},
    {"_SLOPE_sparseSLOPE", (DL_FUNC) &_SLOPE_sparseSLOPE, 3},
    {"_SLOPE_denseSLOPE", (DL_FUNC) &_SLOPE_denseSLOPE, 3},
    {"_SLOPE_cvSparseCpp", (DL_FUNC) &_SLOPE_cvSparseCpp, 4},
    {"_SLOPE_cvDenseCpp", (DL_FUNC) &_SLOPE_cvDenseCpp, 4},
    {NULL, NULL, 0}
};

RcppExport void R_init_SLOPE(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
