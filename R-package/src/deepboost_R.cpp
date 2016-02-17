#include <Rcpp.h>
#include "deepboost_C.h"

using namespace Rcpp;

// This is a simple example of exporting a C++ function to R. You can
// source this function into an R session using the Rcpp::sourceCpp
// function (or via the Source button on the editor toolbar). Learn
// more about Rcpp at:
//
//   http://www.rcpp.org/
//   http://adv-r.had.co.nz/Rcpp.html
//   http://gallery.rcpp.org/
//

//’ Trains a deepboost ensemble model
//’
//’ @param x input character vector
//’ @return characters in each element of the vector
// [[Rcpp::export]]
NumericVector Train_R(NumericVector x) {

  return x*2;
}

//’ Predicts instances labels based on a deepboost model
//’
//’ @param x input character vector
//’ @return characters in each element of the vector
// [[Rcpp::export]]
NumericVector Predict_R(NumericVector x) {

  return x*2;
}

//’ Evaluates and prints statistics for a deepboost model
//’
//’ @param x input character vector
//’ @return characters in each element of the vector
// [[Rcpp::export]]
NumericVector Evaluate_R(NumericVector x) {

  //Evaluate();
  NumericVector y = x*2;
  return y;
}
