// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// supports_nonascii_internal
bool supports_nonascii_internal();
RcppExport SEXP _readsparse_supports_nonascii_internal() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    rcpp_result_gen = Rcpp::wrap(supports_nonascii_internal());
    return rcpp_result_gen;
END_RCPP
}
// take_as_utf8
bool take_as_utf8();
RcppExport SEXP _readsparse_take_as_utf8() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    rcpp_result_gen = Rcpp::wrap(take_as_utf8());
    return rcpp_result_gen;
END_RCPP
}
// deepcopy_num
Rcpp::NumericVector deepcopy_num(Rcpp::NumericVector x);
RcppExport SEXP _readsparse_deepcopy_num(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(deepcopy_num(x));
    return rcpp_result_gen;
END_RCPP
}
// deepcopy_int
Rcpp::IntegerVector deepcopy_int(Rcpp::IntegerVector x);
RcppExport SEXP _readsparse_deepcopy_int(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< Rcpp::IntegerVector >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(deepcopy_int(x));
    return rcpp_result_gen;
END_RCPP
}
// deepcopy_log
Rcpp::LogicalVector deepcopy_log(Rcpp::LogicalVector x);
RcppExport SEXP _readsparse_deepcopy_log(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< Rcpp::LogicalVector >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(deepcopy_log(x));
    return rcpp_result_gen;
END_RCPP
}
// read_multi_label_R
Rcpp::List read_multi_label_R(Rcpp::CharacterVector fname, const bool ignore_zero_valued, const bool sort_indices, const bool text_is_base1, const bool assume_no_qid, const bool assume_trailing_ws, const size_t limit_nrows);
RcppExport SEXP _readsparse_read_multi_label_R(SEXP fnameSEXP, SEXP ignore_zero_valuedSEXP, SEXP sort_indicesSEXP, SEXP text_is_base1SEXP, SEXP assume_no_qidSEXP, SEXP assume_trailing_wsSEXP, SEXP limit_nrowsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< Rcpp::CharacterVector >::type fname(fnameSEXP);
    Rcpp::traits::input_parameter< const bool >::type ignore_zero_valued(ignore_zero_valuedSEXP);
    Rcpp::traits::input_parameter< const bool >::type sort_indices(sort_indicesSEXP);
    Rcpp::traits::input_parameter< const bool >::type text_is_base1(text_is_base1SEXP);
    Rcpp::traits::input_parameter< const bool >::type assume_no_qid(assume_no_qidSEXP);
    Rcpp::traits::input_parameter< const bool >::type assume_trailing_ws(assume_trailing_wsSEXP);
    Rcpp::traits::input_parameter< const size_t >::type limit_nrows(limit_nrowsSEXP);
    rcpp_result_gen = Rcpp::wrap(read_multi_label_R(fname, ignore_zero_valued, sort_indices, text_is_base1, assume_no_qid, assume_trailing_ws, limit_nrows));
    return rcpp_result_gen;
END_RCPP
}
// read_multi_label_from_str_R
Rcpp::List read_multi_label_from_str_R(Rcpp::CharacterVector file_as_str, const bool ignore_zero_valued, const bool sort_indices, const bool text_is_base1, const bool assume_no_qid, const bool assume_trailing_ws, const size_t limit_nrows);
RcppExport SEXP _readsparse_read_multi_label_from_str_R(SEXP file_as_strSEXP, SEXP ignore_zero_valuedSEXP, SEXP sort_indicesSEXP, SEXP text_is_base1SEXP, SEXP assume_no_qidSEXP, SEXP assume_trailing_wsSEXP, SEXP limit_nrowsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< Rcpp::CharacterVector >::type file_as_str(file_as_strSEXP);
    Rcpp::traits::input_parameter< const bool >::type ignore_zero_valued(ignore_zero_valuedSEXP);
    Rcpp::traits::input_parameter< const bool >::type sort_indices(sort_indicesSEXP);
    Rcpp::traits::input_parameter< const bool >::type text_is_base1(text_is_base1SEXP);
    Rcpp::traits::input_parameter< const bool >::type assume_no_qid(assume_no_qidSEXP);
    Rcpp::traits::input_parameter< const bool >::type assume_trailing_ws(assume_trailing_wsSEXP);
    Rcpp::traits::input_parameter< const size_t >::type limit_nrows(limit_nrowsSEXP);
    rcpp_result_gen = Rcpp::wrap(read_multi_label_from_str_R(file_as_str, ignore_zero_valued, sort_indices, text_is_base1, assume_no_qid, assume_trailing_ws, limit_nrows));
    return rcpp_result_gen;
END_RCPP
}
// read_single_label_R
Rcpp::List read_single_label_R(Rcpp::CharacterVector fname, const bool ignore_zero_valued, const bool sort_indices, const bool text_is_base1, const bool assume_no_qid, const bool assume_trailing_ws, const size_t limit_nrows);
RcppExport SEXP _readsparse_read_single_label_R(SEXP fnameSEXP, SEXP ignore_zero_valuedSEXP, SEXP sort_indicesSEXP, SEXP text_is_base1SEXP, SEXP assume_no_qidSEXP, SEXP assume_trailing_wsSEXP, SEXP limit_nrowsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< Rcpp::CharacterVector >::type fname(fnameSEXP);
    Rcpp::traits::input_parameter< const bool >::type ignore_zero_valued(ignore_zero_valuedSEXP);
    Rcpp::traits::input_parameter< const bool >::type sort_indices(sort_indicesSEXP);
    Rcpp::traits::input_parameter< const bool >::type text_is_base1(text_is_base1SEXP);
    Rcpp::traits::input_parameter< const bool >::type assume_no_qid(assume_no_qidSEXP);
    Rcpp::traits::input_parameter< const bool >::type assume_trailing_ws(assume_trailing_wsSEXP);
    Rcpp::traits::input_parameter< const size_t >::type limit_nrows(limit_nrowsSEXP);
    rcpp_result_gen = Rcpp::wrap(read_single_label_R(fname, ignore_zero_valued, sort_indices, text_is_base1, assume_no_qid, assume_trailing_ws, limit_nrows));
    return rcpp_result_gen;
END_RCPP
}
// read_single_label_from_str_R
Rcpp::List read_single_label_from_str_R(Rcpp::CharacterVector file_as_str, const bool ignore_zero_valued, const bool sort_indices, const bool text_is_base1, const bool assume_no_qid, const bool assume_trailing_ws, const size_t limit_nrows);
RcppExport SEXP _readsparse_read_single_label_from_str_R(SEXP file_as_strSEXP, SEXP ignore_zero_valuedSEXP, SEXP sort_indicesSEXP, SEXP text_is_base1SEXP, SEXP assume_no_qidSEXP, SEXP assume_trailing_wsSEXP, SEXP limit_nrowsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< Rcpp::CharacterVector >::type file_as_str(file_as_strSEXP);
    Rcpp::traits::input_parameter< const bool >::type ignore_zero_valued(ignore_zero_valuedSEXP);
    Rcpp::traits::input_parameter< const bool >::type sort_indices(sort_indicesSEXP);
    Rcpp::traits::input_parameter< const bool >::type text_is_base1(text_is_base1SEXP);
    Rcpp::traits::input_parameter< const bool >::type assume_no_qid(assume_no_qidSEXP);
    Rcpp::traits::input_parameter< const bool >::type assume_trailing_ws(assume_trailing_wsSEXP);
    Rcpp::traits::input_parameter< const size_t >::type limit_nrows(limit_nrowsSEXP);
    rcpp_result_gen = Rcpp::wrap(read_single_label_from_str_R(file_as_str, ignore_zero_valued, sort_indices, text_is_base1, assume_no_qid, assume_trailing_ws, limit_nrows));
    return rcpp_result_gen;
END_RCPP
}
// write_multi_label_R
bool write_multi_label_R(Rcpp::CharacterVector fname, Rcpp::IntegerVector indptr, Rcpp::IntegerVector indices, Rcpp::NumericVector values, Rcpp::IntegerVector indptr_lab, Rcpp::IntegerVector indices_lab, Rcpp::IntegerVector qid, const int ncols, const int nclasses, const bool ignore_zero_valued, const bool sort_indices, const bool text_is_base1, const bool add_header, const int decimal_places, const bool append);
RcppExport SEXP _readsparse_write_multi_label_R(SEXP fnameSEXP, SEXP indptrSEXP, SEXP indicesSEXP, SEXP valuesSEXP, SEXP indptr_labSEXP, SEXP indices_labSEXP, SEXP qidSEXP, SEXP ncolsSEXP, SEXP nclassesSEXP, SEXP ignore_zero_valuedSEXP, SEXP sort_indicesSEXP, SEXP text_is_base1SEXP, SEXP add_headerSEXP, SEXP decimal_placesSEXP, SEXP appendSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< Rcpp::CharacterVector >::type fname(fnameSEXP);
    Rcpp::traits::input_parameter< Rcpp::IntegerVector >::type indptr(indptrSEXP);
    Rcpp::traits::input_parameter< Rcpp::IntegerVector >::type indices(indicesSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type values(valuesSEXP);
    Rcpp::traits::input_parameter< Rcpp::IntegerVector >::type indptr_lab(indptr_labSEXP);
    Rcpp::traits::input_parameter< Rcpp::IntegerVector >::type indices_lab(indices_labSEXP);
    Rcpp::traits::input_parameter< Rcpp::IntegerVector >::type qid(qidSEXP);
    Rcpp::traits::input_parameter< const int >::type ncols(ncolsSEXP);
    Rcpp::traits::input_parameter< const int >::type nclasses(nclassesSEXP);
    Rcpp::traits::input_parameter< const bool >::type ignore_zero_valued(ignore_zero_valuedSEXP);
    Rcpp::traits::input_parameter< const bool >::type sort_indices(sort_indicesSEXP);
    Rcpp::traits::input_parameter< const bool >::type text_is_base1(text_is_base1SEXP);
    Rcpp::traits::input_parameter< const bool >::type add_header(add_headerSEXP);
    Rcpp::traits::input_parameter< const int >::type decimal_places(decimal_placesSEXP);
    Rcpp::traits::input_parameter< const bool >::type append(appendSEXP);
    rcpp_result_gen = Rcpp::wrap(write_multi_label_R(fname, indptr, indices, values, indptr_lab, indices_lab, qid, ncols, nclasses, ignore_zero_valued, sort_indices, text_is_base1, add_header, decimal_places, append));
    return rcpp_result_gen;
END_RCPP
}
// write_multi_label_to_str_R
Rcpp::List write_multi_label_to_str_R(Rcpp::IntegerVector indptr, Rcpp::IntegerVector indices, Rcpp::NumericVector values, Rcpp::IntegerVector indptr_lab, Rcpp::IntegerVector indices_lab, Rcpp::IntegerVector qid, const int ncols, const int nclasses, const bool ignore_zero_valued, const bool sort_indices, const bool text_is_base1, const bool add_header, const int decimal_places);
RcppExport SEXP _readsparse_write_multi_label_to_str_R(SEXP indptrSEXP, SEXP indicesSEXP, SEXP valuesSEXP, SEXP indptr_labSEXP, SEXP indices_labSEXP, SEXP qidSEXP, SEXP ncolsSEXP, SEXP nclassesSEXP, SEXP ignore_zero_valuedSEXP, SEXP sort_indicesSEXP, SEXP text_is_base1SEXP, SEXP add_headerSEXP, SEXP decimal_placesSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< Rcpp::IntegerVector >::type indptr(indptrSEXP);
    Rcpp::traits::input_parameter< Rcpp::IntegerVector >::type indices(indicesSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type values(valuesSEXP);
    Rcpp::traits::input_parameter< Rcpp::IntegerVector >::type indptr_lab(indptr_labSEXP);
    Rcpp::traits::input_parameter< Rcpp::IntegerVector >::type indices_lab(indices_labSEXP);
    Rcpp::traits::input_parameter< Rcpp::IntegerVector >::type qid(qidSEXP);
    Rcpp::traits::input_parameter< const int >::type ncols(ncolsSEXP);
    Rcpp::traits::input_parameter< const int >::type nclasses(nclassesSEXP);
    Rcpp::traits::input_parameter< const bool >::type ignore_zero_valued(ignore_zero_valuedSEXP);
    Rcpp::traits::input_parameter< const bool >::type sort_indices(sort_indicesSEXP);
    Rcpp::traits::input_parameter< const bool >::type text_is_base1(text_is_base1SEXP);
    Rcpp::traits::input_parameter< const bool >::type add_header(add_headerSEXP);
    Rcpp::traits::input_parameter< const int >::type decimal_places(decimal_placesSEXP);
    rcpp_result_gen = Rcpp::wrap(write_multi_label_to_str_R(indptr, indices, values, indptr_lab, indices_lab, qid, ncols, nclasses, ignore_zero_valued, sort_indices, text_is_base1, add_header, decimal_places));
    return rcpp_result_gen;
END_RCPP
}
// write_single_label_numeric_R
bool write_single_label_numeric_R(Rcpp::CharacterVector fname, Rcpp::IntegerVector indptr, Rcpp::IntegerVector indices, Rcpp::NumericVector values, Rcpp::NumericVector labels, Rcpp::IntegerVector qid, const int ncols, const int nclasses, const bool ignore_zero_valued, const bool sort_indices, const bool text_is_base1, const bool add_header, const int decimal_places, const bool append);
RcppExport SEXP _readsparse_write_single_label_numeric_R(SEXP fnameSEXP, SEXP indptrSEXP, SEXP indicesSEXP, SEXP valuesSEXP, SEXP labelsSEXP, SEXP qidSEXP, SEXP ncolsSEXP, SEXP nclassesSEXP, SEXP ignore_zero_valuedSEXP, SEXP sort_indicesSEXP, SEXP text_is_base1SEXP, SEXP add_headerSEXP, SEXP decimal_placesSEXP, SEXP appendSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< Rcpp::CharacterVector >::type fname(fnameSEXP);
    Rcpp::traits::input_parameter< Rcpp::IntegerVector >::type indptr(indptrSEXP);
    Rcpp::traits::input_parameter< Rcpp::IntegerVector >::type indices(indicesSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type values(valuesSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type labels(labelsSEXP);
    Rcpp::traits::input_parameter< Rcpp::IntegerVector >::type qid(qidSEXP);
    Rcpp::traits::input_parameter< const int >::type ncols(ncolsSEXP);
    Rcpp::traits::input_parameter< const int >::type nclasses(nclassesSEXP);
    Rcpp::traits::input_parameter< const bool >::type ignore_zero_valued(ignore_zero_valuedSEXP);
    Rcpp::traits::input_parameter< const bool >::type sort_indices(sort_indicesSEXP);
    Rcpp::traits::input_parameter< const bool >::type text_is_base1(text_is_base1SEXP);
    Rcpp::traits::input_parameter< const bool >::type add_header(add_headerSEXP);
    Rcpp::traits::input_parameter< const int >::type decimal_places(decimal_placesSEXP);
    Rcpp::traits::input_parameter< const bool >::type append(appendSEXP);
    rcpp_result_gen = Rcpp::wrap(write_single_label_numeric_R(fname, indptr, indices, values, labels, qid, ncols, nclasses, ignore_zero_valued, sort_indices, text_is_base1, add_header, decimal_places, append));
    return rcpp_result_gen;
END_RCPP
}
// write_single_label_integer_R
bool write_single_label_integer_R(Rcpp::CharacterVector fname, Rcpp::IntegerVector indptr, Rcpp::IntegerVector indices, Rcpp::NumericVector values, Rcpp::IntegerVector labels, Rcpp::IntegerVector qid, const int ncols, const int nclasses, const bool ignore_zero_valued, const bool sort_indices, const bool text_is_base1, const bool add_header, const int decimal_places, const bool append);
RcppExport SEXP _readsparse_write_single_label_integer_R(SEXP fnameSEXP, SEXP indptrSEXP, SEXP indicesSEXP, SEXP valuesSEXP, SEXP labelsSEXP, SEXP qidSEXP, SEXP ncolsSEXP, SEXP nclassesSEXP, SEXP ignore_zero_valuedSEXP, SEXP sort_indicesSEXP, SEXP text_is_base1SEXP, SEXP add_headerSEXP, SEXP decimal_placesSEXP, SEXP appendSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< Rcpp::CharacterVector >::type fname(fnameSEXP);
    Rcpp::traits::input_parameter< Rcpp::IntegerVector >::type indptr(indptrSEXP);
    Rcpp::traits::input_parameter< Rcpp::IntegerVector >::type indices(indicesSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type values(valuesSEXP);
    Rcpp::traits::input_parameter< Rcpp::IntegerVector >::type labels(labelsSEXP);
    Rcpp::traits::input_parameter< Rcpp::IntegerVector >::type qid(qidSEXP);
    Rcpp::traits::input_parameter< const int >::type ncols(ncolsSEXP);
    Rcpp::traits::input_parameter< const int >::type nclasses(nclassesSEXP);
    Rcpp::traits::input_parameter< const bool >::type ignore_zero_valued(ignore_zero_valuedSEXP);
    Rcpp::traits::input_parameter< const bool >::type sort_indices(sort_indicesSEXP);
    Rcpp::traits::input_parameter< const bool >::type text_is_base1(text_is_base1SEXP);
    Rcpp::traits::input_parameter< const bool >::type add_header(add_headerSEXP);
    Rcpp::traits::input_parameter< const int >::type decimal_places(decimal_placesSEXP);
    Rcpp::traits::input_parameter< const bool >::type append(appendSEXP);
    rcpp_result_gen = Rcpp::wrap(write_single_label_integer_R(fname, indptr, indices, values, labels, qid, ncols, nclasses, ignore_zero_valued, sort_indices, text_is_base1, add_header, decimal_places, append));
    return rcpp_result_gen;
END_RCPP
}
// write_single_label_numeric_to_str_R
Rcpp::List write_single_label_numeric_to_str_R(Rcpp::IntegerVector indptr, Rcpp::IntegerVector indices, Rcpp::NumericVector values, Rcpp::NumericVector labels, Rcpp::IntegerVector qid, const int ncols, const int nclasses, const bool ignore_zero_valued, const bool sort_indices, const bool text_is_base1, const bool add_header, const int decimal_places);
RcppExport SEXP _readsparse_write_single_label_numeric_to_str_R(SEXP indptrSEXP, SEXP indicesSEXP, SEXP valuesSEXP, SEXP labelsSEXP, SEXP qidSEXP, SEXP ncolsSEXP, SEXP nclassesSEXP, SEXP ignore_zero_valuedSEXP, SEXP sort_indicesSEXP, SEXP text_is_base1SEXP, SEXP add_headerSEXP, SEXP decimal_placesSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< Rcpp::IntegerVector >::type indptr(indptrSEXP);
    Rcpp::traits::input_parameter< Rcpp::IntegerVector >::type indices(indicesSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type values(valuesSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type labels(labelsSEXP);
    Rcpp::traits::input_parameter< Rcpp::IntegerVector >::type qid(qidSEXP);
    Rcpp::traits::input_parameter< const int >::type ncols(ncolsSEXP);
    Rcpp::traits::input_parameter< const int >::type nclasses(nclassesSEXP);
    Rcpp::traits::input_parameter< const bool >::type ignore_zero_valued(ignore_zero_valuedSEXP);
    Rcpp::traits::input_parameter< const bool >::type sort_indices(sort_indicesSEXP);
    Rcpp::traits::input_parameter< const bool >::type text_is_base1(text_is_base1SEXP);
    Rcpp::traits::input_parameter< const bool >::type add_header(add_headerSEXP);
    Rcpp::traits::input_parameter< const int >::type decimal_places(decimal_placesSEXP);
    rcpp_result_gen = Rcpp::wrap(write_single_label_numeric_to_str_R(indptr, indices, values, labels, qid, ncols, nclasses, ignore_zero_valued, sort_indices, text_is_base1, add_header, decimal_places));
    return rcpp_result_gen;
END_RCPP
}
// write_single_label_integer_to_str_R
Rcpp::List write_single_label_integer_to_str_R(Rcpp::IntegerVector indptr, Rcpp::IntegerVector indices, Rcpp::NumericVector values, Rcpp::IntegerVector labels, Rcpp::IntegerVector qid, const int ncols, const int nclasses, const bool ignore_zero_valued, const bool sort_indices, const bool text_is_base1, const bool add_header, const int decimal_places);
RcppExport SEXP _readsparse_write_single_label_integer_to_str_R(SEXP indptrSEXP, SEXP indicesSEXP, SEXP valuesSEXP, SEXP labelsSEXP, SEXP qidSEXP, SEXP ncolsSEXP, SEXP nclassesSEXP, SEXP ignore_zero_valuedSEXP, SEXP sort_indicesSEXP, SEXP text_is_base1SEXP, SEXP add_headerSEXP, SEXP decimal_placesSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< Rcpp::IntegerVector >::type indptr(indptrSEXP);
    Rcpp::traits::input_parameter< Rcpp::IntegerVector >::type indices(indicesSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type values(valuesSEXP);
    Rcpp::traits::input_parameter< Rcpp::IntegerVector >::type labels(labelsSEXP);
    Rcpp::traits::input_parameter< Rcpp::IntegerVector >::type qid(qidSEXP);
    Rcpp::traits::input_parameter< const int >::type ncols(ncolsSEXP);
    Rcpp::traits::input_parameter< const int >::type nclasses(nclassesSEXP);
    Rcpp::traits::input_parameter< const bool >::type ignore_zero_valued(ignore_zero_valuedSEXP);
    Rcpp::traits::input_parameter< const bool >::type sort_indices(sort_indicesSEXP);
    Rcpp::traits::input_parameter< const bool >::type text_is_base1(text_is_base1SEXP);
    Rcpp::traits::input_parameter< const bool >::type add_header(add_headerSEXP);
    Rcpp::traits::input_parameter< const int >::type decimal_places(decimal_placesSEXP);
    rcpp_result_gen = Rcpp::wrap(write_single_label_integer_to_str_R(indptr, indices, values, labels, qid, ncols, nclasses, ignore_zero_valued, sort_indices, text_is_base1, add_header, decimal_places));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_readsparse_supports_nonascii_internal", (DL_FUNC) &_readsparse_supports_nonascii_internal, 0},
    {"_readsparse_take_as_utf8", (DL_FUNC) &_readsparse_take_as_utf8, 0},
    {"_readsparse_deepcopy_num", (DL_FUNC) &_readsparse_deepcopy_num, 1},
    {"_readsparse_deepcopy_int", (DL_FUNC) &_readsparse_deepcopy_int, 1},
    {"_readsparse_deepcopy_log", (DL_FUNC) &_readsparse_deepcopy_log, 1},
    {"_readsparse_read_multi_label_R", (DL_FUNC) &_readsparse_read_multi_label_R, 7},
    {"_readsparse_read_multi_label_from_str_R", (DL_FUNC) &_readsparse_read_multi_label_from_str_R, 7},
    {"_readsparse_read_single_label_R", (DL_FUNC) &_readsparse_read_single_label_R, 7},
    {"_readsparse_read_single_label_from_str_R", (DL_FUNC) &_readsparse_read_single_label_from_str_R, 7},
    {"_readsparse_write_multi_label_R", (DL_FUNC) &_readsparse_write_multi_label_R, 15},
    {"_readsparse_write_multi_label_to_str_R", (DL_FUNC) &_readsparse_write_multi_label_to_str_R, 13},
    {"_readsparse_write_single_label_numeric_R", (DL_FUNC) &_readsparse_write_single_label_numeric_R, 14},
    {"_readsparse_write_single_label_integer_R", (DL_FUNC) &_readsparse_write_single_label_integer_R, 14},
    {"_readsparse_write_single_label_numeric_to_str_R", (DL_FUNC) &_readsparse_write_single_label_numeric_to_str_R, 12},
    {"_readsparse_write_single_label_integer_to_str_R", (DL_FUNC) &_readsparse_write_single_label_integer_to_str_R, 12},
    {NULL, NULL, 0}
};

RcppExport void R_init_readsparse(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
