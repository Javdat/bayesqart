# This file was generated by Rcpp::compileAttributes
# Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

BayesQArt <- function(y, X, Xtest, quantile, burn, nd, m, min_obs_node, aa_parm, bb_parm, nc, pbd, pb, alpha, betap, kappa, maxdepth) {
    .Call('BayesQArt_BayesQArt', PACKAGE = 'BayesQArt', y, X, Xtest, quantile, burn, nd, m, min_obs_node, aa_parm, bb_parm, nc, pbd, pb, alpha, betap, kappa, maxdepth)
}

BayesQArt_binary <- function(y, X, Xtest, quantile, burn, nd, m, min_obs_node, aa_parm, bb_parm, nc, pbd, pb, alpha, betap, kappa, maxdepth) {
    .Call('BayesQArt_BayesQArt_binary', PACKAGE = 'BayesQArt', y, X, Xtest, quantile, burn, nd, m, min_obs_node, aa_parm, bb_parm, nc, pbd, pb, alpha, betap, kappa, maxdepth)
}

do_rgig <- function(lambda, chi, psi) {
    .Call('BayesQArt_do_rgig', PACKAGE = 'BayesQArt', lambda, chi, psi)
}

