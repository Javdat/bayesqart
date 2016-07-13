// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// BayesQArt
Rcpp::List BayesQArt(arma::vec const& y, arma::mat const& X, arma::mat const& Xtest, double quantile, int burn, int nd, int m, int min_obs_node, double aa_parm, double bb_parm, int nc, double pbd, double pb, double alpha, double betap, double kappa, int maxdepth);
RcppExport SEXP BayesQArt_BayesQArt(SEXP ySEXP, SEXP XSEXP, SEXP XtestSEXP, SEXP quantileSEXP, SEXP burnSEXP, SEXP ndSEXP, SEXP mSEXP, SEXP min_obs_nodeSEXP, SEXP aa_parmSEXP, SEXP bb_parmSEXP, SEXP ncSEXP, SEXP pbdSEXP, SEXP pbSEXP, SEXP alphaSEXP, SEXP betapSEXP, SEXP kappaSEXP, SEXP maxdepthSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< arma::vec const& >::type y(ySEXP);
    Rcpp::traits::input_parameter< arma::mat const& >::type X(XSEXP);
    Rcpp::traits::input_parameter< arma::mat const& >::type Xtest(XtestSEXP);
    Rcpp::traits::input_parameter< double >::type quantile(quantileSEXP);
    Rcpp::traits::input_parameter< int >::type burn(burnSEXP);
    Rcpp::traits::input_parameter< int >::type nd(ndSEXP);
    Rcpp::traits::input_parameter< int >::type m(mSEXP);
    Rcpp::traits::input_parameter< int >::type min_obs_node(min_obs_nodeSEXP);
    Rcpp::traits::input_parameter< double >::type aa_parm(aa_parmSEXP);
    Rcpp::traits::input_parameter< double >::type bb_parm(bb_parmSEXP);
    Rcpp::traits::input_parameter< int >::type nc(ncSEXP);
    Rcpp::traits::input_parameter< double >::type pbd(pbdSEXP);
    Rcpp::traits::input_parameter< double >::type pb(pbSEXP);
    Rcpp::traits::input_parameter< double >::type alpha(alphaSEXP);
    Rcpp::traits::input_parameter< double >::type betap(betapSEXP);
    Rcpp::traits::input_parameter< double >::type kappa(kappaSEXP);
    Rcpp::traits::input_parameter< int >::type maxdepth(maxdepthSEXP);
    __result = Rcpp::wrap(BayesQArt(y, X, Xtest, quantile, burn, nd, m, min_obs_node, aa_parm, bb_parm, nc, pbd, pb, alpha, betap, kappa, maxdepth));
    return __result;
END_RCPP
}
// BayesQArt_binary
Rcpp::List BayesQArt_binary(arma::ivec const& y, arma::mat const& X, arma::mat const& Xtest, double quantile, int burn, int nd, int m, int min_obs_node, double aa_parm, double bb_parm, int nc, double pbd, double pb, double alpha, double betap, double kappa, int maxdepth);
RcppExport SEXP BayesQArt_BayesQArt_binary(SEXP ySEXP, SEXP XSEXP, SEXP XtestSEXP, SEXP quantileSEXP, SEXP burnSEXP, SEXP ndSEXP, SEXP mSEXP, SEXP min_obs_nodeSEXP, SEXP aa_parmSEXP, SEXP bb_parmSEXP, SEXP ncSEXP, SEXP pbdSEXP, SEXP pbSEXP, SEXP alphaSEXP, SEXP betapSEXP, SEXP kappaSEXP, SEXP maxdepthSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< arma::ivec const& >::type y(ySEXP);
    Rcpp::traits::input_parameter< arma::mat const& >::type X(XSEXP);
    Rcpp::traits::input_parameter< arma::mat const& >::type Xtest(XtestSEXP);
    Rcpp::traits::input_parameter< double >::type quantile(quantileSEXP);
    Rcpp::traits::input_parameter< int >::type burn(burnSEXP);
    Rcpp::traits::input_parameter< int >::type nd(ndSEXP);
    Rcpp::traits::input_parameter< int >::type m(mSEXP);
    Rcpp::traits::input_parameter< int >::type min_obs_node(min_obs_nodeSEXP);
    Rcpp::traits::input_parameter< double >::type aa_parm(aa_parmSEXP);
    Rcpp::traits::input_parameter< double >::type bb_parm(bb_parmSEXP);
    Rcpp::traits::input_parameter< int >::type nc(ncSEXP);
    Rcpp::traits::input_parameter< double >::type pbd(pbdSEXP);
    Rcpp::traits::input_parameter< double >::type pb(pbSEXP);
    Rcpp::traits::input_parameter< double >::type alpha(alphaSEXP);
    Rcpp::traits::input_parameter< double >::type betap(betapSEXP);
    Rcpp::traits::input_parameter< double >::type kappa(kappaSEXP);
    Rcpp::traits::input_parameter< int >::type maxdepth(maxdepthSEXP);
    __result = Rcpp::wrap(BayesQArt_binary(y, X, Xtest, quantile, burn, nd, m, min_obs_node, aa_parm, bb_parm, nc, pbd, pb, alpha, betap, kappa, maxdepth));
    return __result;
END_RCPP
}
// do_rgig
double do_rgig(double lambda, double chi, double psi);
RcppExport SEXP BayesQArt_do_rgig(SEXP lambdaSEXP, SEXP chiSEXP, SEXP psiSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< double >::type lambda(lambdaSEXP);
    Rcpp::traits::input_parameter< double >::type chi(chiSEXP);
    Rcpp::traits::input_parameter< double >::type psi(psiSEXP);
    __result = Rcpp::wrap(do_rgig(lambda, chi, psi));
    return __result;
END_RCPP
}
