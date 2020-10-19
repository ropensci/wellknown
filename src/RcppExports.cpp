// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// bounding_wkt_points
CharacterVector bounding_wkt_points(NumericVector min_x, NumericVector max_x, NumericVector min_y, NumericVector max_y);
RcppExport SEXP _wellknown_bounding_wkt_points(SEXP min_xSEXP, SEXP max_xSEXP, SEXP min_ySEXP, SEXP max_ySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type min_x(min_xSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type max_x(max_xSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type min_y(min_ySEXP);
    Rcpp::traits::input_parameter< NumericVector >::type max_y(max_ySEXP);
    rcpp_result_gen = Rcpp::wrap(bounding_wkt_points(min_x, max_x, min_y, max_y));
    return rcpp_result_gen;
END_RCPP
}
// bounding_wkt_list
CharacterVector bounding_wkt_list(List x);
RcppExport SEXP _wellknown_bounding_wkt_list(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(bounding_wkt_list(x));
    return rcpp_result_gen;
END_RCPP
}
// wkt_centroid
DataFrame wkt_centroid(CharacterVector wkt);
RcppExport SEXP _wellknown_wkt_centroid(SEXP wktSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< CharacterVector >::type wkt(wktSEXP);
    rcpp_result_gen = Rcpp::wrap(wkt_centroid(wkt));
    return rcpp_result_gen;
END_RCPP
}
// wkt_reverse
CharacterVector wkt_reverse(CharacterVector x);
RcppExport SEXP _wellknown_wkt_reverse(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< CharacterVector >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(wkt_reverse(x));
    return rcpp_result_gen;
END_RCPP
}
// sp_convert_
SEXP sp_convert_(List x, bool group);
RcppExport SEXP _wellknown_sp_convert_(SEXP xSEXP, SEXP groupSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type x(xSEXP);
    Rcpp::traits::input_parameter< bool >::type group(groupSEXP);
    rcpp_result_gen = Rcpp::wrap(sp_convert_(x, group));
    return rcpp_result_gen;
END_RCPP
}
// validate_wkt
DataFrame validate_wkt(CharacterVector x);
RcppExport SEXP _wellknown_validate_wkt(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< CharacterVector >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(validate_wkt(x));
    return rcpp_result_gen;
END_RCPP
}
// wkt_bounding
SEXP wkt_bounding(CharacterVector wkt, bool as_matrix);
RcppExport SEXP _wellknown_wkt_bounding(SEXP wktSEXP, SEXP as_matrixSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< CharacterVector >::type wkt(wktSEXP);
    Rcpp::traits::input_parameter< bool >::type as_matrix(as_matrixSEXP);
    rcpp_result_gen = Rcpp::wrap(wkt_bounding(wkt, as_matrix));
    return rcpp_result_gen;
END_RCPP
}
// wkt_coords
DataFrame wkt_coords(CharacterVector wkt);
RcppExport SEXP _wellknown_wkt_coords(SEXP wktSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< CharacterVector >::type wkt(wktSEXP);
    rcpp_result_gen = Rcpp::wrap(wkt_coords(wkt));
    return rcpp_result_gen;
END_RCPP
}
// wkt_correct
CharacterVector wkt_correct(CharacterVector x);
RcppExport SEXP _wellknown_wkt_correct(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< CharacterVector >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(wkt_correct(x));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_wellknown_bounding_wkt_points", (DL_FUNC) &_wellknown_bounding_wkt_points, 4},
    {"_wellknown_bounding_wkt_list", (DL_FUNC) &_wellknown_bounding_wkt_list, 1},
    {"_wellknown_wkt_centroid", (DL_FUNC) &_wellknown_wkt_centroid, 1},
    {"_wellknown_wkt_reverse", (DL_FUNC) &_wellknown_wkt_reverse, 1},
    {"_wellknown_sp_convert_", (DL_FUNC) &_wellknown_sp_convert_, 2},
    {"_wellknown_validate_wkt", (DL_FUNC) &_wellknown_validate_wkt, 1},
    {"_wellknown_wkt_bounding", (DL_FUNC) &_wellknown_wkt_bounding, 2},
    {"_wellknown_wkt_coords", (DL_FUNC) &_wellknown_wkt_coords, 1},
    {"_wellknown_wkt_correct", (DL_FUNC) &_wellknown_wkt_correct, 1},
    {NULL, NULL, 0}
};

RcppExport void R_init_wellknown(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
