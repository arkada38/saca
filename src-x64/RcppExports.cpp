// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// parseString
CharacterVector parseString(CharacterVector x, int interval);
RcppExport SEXP saca_parseString(SEXP xSEXP, SEXP intervalSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< CharacterVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< int >::type interval(intervalSEXP);
    rcpp_result_gen = Rcpp::wrap(parseString(x, interval));
    return rcpp_result_gen;
END_RCPP
}
