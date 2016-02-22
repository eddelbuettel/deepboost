// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// Train_R
Rcpp::List Train_R(DataFrame data, int tree_depth, int num_iter, double beta, double lambda, char loss_type, bool verbose);
RcppExport SEXP deepboost_Train_R(SEXP dataSEXP, SEXP tree_depthSEXP, SEXP num_iterSEXP, SEXP betaSEXP, SEXP lambdaSEXP, SEXP loss_typeSEXP, SEXP verboseSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< DataFrame >::type data(dataSEXP);
    Rcpp::traits::input_parameter< int >::type tree_depth(tree_depthSEXP);
    Rcpp::traits::input_parameter< int >::type num_iter(num_iterSEXP);
    Rcpp::traits::input_parameter< double >::type beta(betaSEXP);
    Rcpp::traits::input_parameter< double >::type lambda(lambdaSEXP);
    Rcpp::traits::input_parameter< char >::type loss_type(loss_typeSEXP);
    Rcpp::traits::input_parameter< bool >::type verbose(verboseSEXP);
    __result = Rcpp::wrap(Train_R(data, tree_depth, num_iter, beta, lambda, loss_type, verbose));
    return __result;
END_RCPP
}
// Predict_R
NumericVector Predict_R(NumericVector x);
RcppExport SEXP deepboost_Predict_R(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    __result = Rcpp::wrap(Predict_R(x));
    return __result;
END_RCPP
}
// Evaluate_R
NumericVector Evaluate_R(NumericVector x);
RcppExport SEXP deepboost_Evaluate_R(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    __result = Rcpp::wrap(Evaluate_R(x));
    return __result;
END_RCPP
}
