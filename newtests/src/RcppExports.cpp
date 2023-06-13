// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// test_clone
Rcpp::NumericVector test_clone(Rcpp::RObject mat);
RcppExport SEXP _morebeachtests_test_clone(SEXP matSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< Rcpp::RObject >::type mat(matSEXP);
    rcpp_result_gen = Rcpp::wrap(test_clone(mat));
    return rcpp_result_gen;
END_RCPP
}
// test_clone_sparse
Rcpp::NumericVector test_clone_sparse(Rcpp::RObject mat);
RcppExport SEXP _morebeachtests_test_clone_sparse(SEXP matSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< Rcpp::RObject >::type mat(matSEXP);
    rcpp_result_gen = Rcpp::wrap(test_clone_sparse(mat));
    return rcpp_result_gen;
END_RCPP
}
// test_sparse_writer1
Rcpp::RObject test_sparse_writer1(int type);
RcppExport SEXP _morebeachtests_test_sparse_writer1(SEXP typeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< int >::type type(typeSEXP);
    rcpp_result_gen = Rcpp::wrap(test_sparse_writer1(type));
    return rcpp_result_gen;
END_RCPP
}
// test_sparse_writer2
Rcpp::RObject test_sparse_writer2(Rcpp::RObject mat, Rcpp::NumericVector replacement);
RcppExport SEXP _morebeachtests_test_sparse_writer2(SEXP matSEXP, SEXP replacementSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< Rcpp::RObject >::type mat(matSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type replacement(replacementSEXP);
    rcpp_result_gen = Rcpp::wrap(test_sparse_writer2(mat, replacement));
    return rcpp_result_gen;
END_RCPP
}
// test_sparse_writer3
Rcpp::RObject test_sparse_writer3();
RcppExport SEXP _morebeachtests_test_sparse_writer3() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    rcpp_result_gen = Rcpp::wrap(test_sparse_writer3());
    return rcpp_result_gen;
END_RCPP
}
// get_column_slice
Rcpp::RObject get_column_slice(Rcpp::RObject mat, Rcpp::IntegerVector order, Rcpp::IntegerVector starts, Rcpp::IntegerVector ends, int mode);
RcppExport SEXP _morebeachtests_get_column_slice(SEXP matSEXP, SEXP orderSEXP, SEXP startsSEXP, SEXP endsSEXP, SEXP modeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< Rcpp::RObject >::type mat(matSEXP);
    Rcpp::traits::input_parameter< Rcpp::IntegerVector >::type order(orderSEXP);
    Rcpp::traits::input_parameter< Rcpp::IntegerVector >::type starts(startsSEXP);
    Rcpp::traits::input_parameter< Rcpp::IntegerVector >::type ends(endsSEXP);
    Rcpp::traits::input_parameter< int >::type mode(modeSEXP);
    rcpp_result_gen = Rcpp::wrap(get_column_slice(mat, order, starts, ends, mode));
    return rcpp_result_gen;
END_RCPP
}
// get_column
Rcpp::RObject get_column(Rcpp::RObject mat, Rcpp::IntegerVector order, int mode);
RcppExport SEXP _morebeachtests_get_column(SEXP matSEXP, SEXP orderSEXP, SEXP modeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< Rcpp::RObject >::type mat(matSEXP);
    Rcpp::traits::input_parameter< Rcpp::IntegerVector >::type order(orderSEXP);
    Rcpp::traits::input_parameter< int >::type mode(modeSEXP);
    rcpp_result_gen = Rcpp::wrap(get_column(mat, order, mode));
    return rcpp_result_gen;
END_RCPP
}
// get_row_slice
Rcpp::RObject get_row_slice(Rcpp::RObject mat, Rcpp::IntegerVector order, Rcpp::IntegerVector starts, Rcpp::IntegerVector ends, int mode);
RcppExport SEXP _morebeachtests_get_row_slice(SEXP matSEXP, SEXP orderSEXP, SEXP startsSEXP, SEXP endsSEXP, SEXP modeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< Rcpp::RObject >::type mat(matSEXP);
    Rcpp::traits::input_parameter< Rcpp::IntegerVector >::type order(orderSEXP);
    Rcpp::traits::input_parameter< Rcpp::IntegerVector >::type starts(startsSEXP);
    Rcpp::traits::input_parameter< Rcpp::IntegerVector >::type ends(endsSEXP);
    Rcpp::traits::input_parameter< int >::type mode(modeSEXP);
    rcpp_result_gen = Rcpp::wrap(get_row_slice(mat, order, starts, ends, mode));
    return rcpp_result_gen;
END_RCPP
}
// get_row
Rcpp::RObject get_row(Rcpp::RObject mat, Rcpp::IntegerVector order, int mode);
RcppExport SEXP _morebeachtests_get_row(SEXP matSEXP, SEXP orderSEXP, SEXP modeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< Rcpp::RObject >::type mat(matSEXP);
    Rcpp::traits::input_parameter< Rcpp::IntegerVector >::type order(orderSEXP);
    Rcpp::traits::input_parameter< int >::type mode(modeSEXP);
    rcpp_result_gen = Rcpp::wrap(get_row(mat, order, mode));
    return rcpp_result_gen;
END_RCPP
}
// get_sparse_column_slice
Rcpp::RObject get_sparse_column_slice(Rcpp::RObject mat, Rcpp::IntegerVector order, Rcpp::IntegerVector starts, Rcpp::IntegerVector ends, int mode);
RcppExport SEXP _morebeachtests_get_sparse_column_slice(SEXP matSEXP, SEXP orderSEXP, SEXP startsSEXP, SEXP endsSEXP, SEXP modeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< Rcpp::RObject >::type mat(matSEXP);
    Rcpp::traits::input_parameter< Rcpp::IntegerVector >::type order(orderSEXP);
    Rcpp::traits::input_parameter< Rcpp::IntegerVector >::type starts(startsSEXP);
    Rcpp::traits::input_parameter< Rcpp::IntegerVector >::type ends(endsSEXP);
    Rcpp::traits::input_parameter< int >::type mode(modeSEXP);
    rcpp_result_gen = Rcpp::wrap(get_sparse_column_slice(mat, order, starts, ends, mode));
    return rcpp_result_gen;
END_RCPP
}
// get_sparse_column
Rcpp::RObject get_sparse_column(Rcpp::RObject mat, Rcpp::IntegerVector order, int mode);
RcppExport SEXP _morebeachtests_get_sparse_column(SEXP matSEXP, SEXP orderSEXP, SEXP modeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< Rcpp::RObject >::type mat(matSEXP);
    Rcpp::traits::input_parameter< Rcpp::IntegerVector >::type order(orderSEXP);
    Rcpp::traits::input_parameter< int >::type mode(modeSEXP);
    rcpp_result_gen = Rcpp::wrap(get_sparse_column(mat, order, mode));
    return rcpp_result_gen;
END_RCPP
}
// get_sparse_row_slice
Rcpp::RObject get_sparse_row_slice(Rcpp::RObject mat, Rcpp::IntegerVector order, Rcpp::IntegerVector starts, Rcpp::IntegerVector ends, int mode);
RcppExport SEXP _morebeachtests_get_sparse_row_slice(SEXP matSEXP, SEXP orderSEXP, SEXP startsSEXP, SEXP endsSEXP, SEXP modeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< Rcpp::RObject >::type mat(matSEXP);
    Rcpp::traits::input_parameter< Rcpp::IntegerVector >::type order(orderSEXP);
    Rcpp::traits::input_parameter< Rcpp::IntegerVector >::type starts(startsSEXP);
    Rcpp::traits::input_parameter< Rcpp::IntegerVector >::type ends(endsSEXP);
    Rcpp::traits::input_parameter< int >::type mode(modeSEXP);
    rcpp_result_gen = Rcpp::wrap(get_sparse_row_slice(mat, order, starts, ends, mode));
    return rcpp_result_gen;
END_RCPP
}
// get_sparse_row
Rcpp::RObject get_sparse_row(Rcpp::RObject mat, Rcpp::IntegerVector order, int mode);
RcppExport SEXP _morebeachtests_get_sparse_row(SEXP matSEXP, SEXP orderSEXP, SEXP modeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< Rcpp::RObject >::type mat(matSEXP);
    Rcpp::traits::input_parameter< Rcpp::IntegerVector >::type order(orderSEXP);
    Rcpp::traits::input_parameter< int >::type mode(modeSEXP);
    rcpp_result_gen = Rcpp::wrap(get_sparse_row(mat, order, mode));
    return rcpp_result_gen;
END_RCPP
}
// test_promotion
Rcpp::NumericVector test_promotion(Rcpp::RObject mat);
RcppExport SEXP _morebeachtests_test_promotion(SEXP matSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< Rcpp::RObject >::type mat(matSEXP);
    rcpp_result_gen = Rcpp::wrap(test_promotion(mat));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_morebeachtests_test_clone", (DL_FUNC) &_morebeachtests_test_clone, 1},
    {"_morebeachtests_test_clone_sparse", (DL_FUNC) &_morebeachtests_test_clone_sparse, 1},
    {"_morebeachtests_test_sparse_writer1", (DL_FUNC) &_morebeachtests_test_sparse_writer1, 1},
    {"_morebeachtests_test_sparse_writer2", (DL_FUNC) &_morebeachtests_test_sparse_writer2, 2},
    {"_morebeachtests_test_sparse_writer3", (DL_FUNC) &_morebeachtests_test_sparse_writer3, 0},
    {"_morebeachtests_get_column_slice", (DL_FUNC) &_morebeachtests_get_column_slice, 5},
    {"_morebeachtests_get_column", (DL_FUNC) &_morebeachtests_get_column, 3},
    {"_morebeachtests_get_row_slice", (DL_FUNC) &_morebeachtests_get_row_slice, 5},
    {"_morebeachtests_get_row", (DL_FUNC) &_morebeachtests_get_row, 3},
    {"_morebeachtests_get_sparse_column_slice", (DL_FUNC) &_morebeachtests_get_sparse_column_slice, 5},
    {"_morebeachtests_get_sparse_column", (DL_FUNC) &_morebeachtests_get_sparse_column, 3},
    {"_morebeachtests_get_sparse_row_slice", (DL_FUNC) &_morebeachtests_get_sparse_row_slice, 5},
    {"_morebeachtests_get_sparse_row", (DL_FUNC) &_morebeachtests_get_sparse_row, 3},
    {"_morebeachtests_test_promotion", (DL_FUNC) &_morebeachtests_test_promotion, 1},
    {NULL, NULL, 0}
};

RcppExport void R_init_morebeachtests(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}