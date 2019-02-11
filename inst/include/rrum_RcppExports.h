// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#ifndef RCPP_rrum_RCPPEXPORTS_H_GEN_
#define RCPP_rrum_RCPPEXPORTS_H_GEN_

#include <RcppArmadillo.h>
#include <Rcpp.h>

namespace rrum {

    using namespace Rcpp;

    namespace {
        void validateSignature(const char* sig) {
            Rcpp::Function require = Rcpp::Environment::base_env()["require"];
            require("rrum", Rcpp::Named("quietly") = true);
            typedef int(*Ptr_validate)(const char*);
            static Ptr_validate p_validate = (Ptr_validate)
                R_GetCCallable("rrum", "_rrum_RcppExport_validate");
            if (!p_validate(sig)) {
                throw Rcpp::function_not_exported(
                    "C++ function with signature '" + std::string(sig) + "' not found in rrum");
            }
        }
    }

    inline Rcpp::List rrum_helper(const arma::mat& Y, const arma::mat& Q, const arma::vec& delta0, unsigned int chain_length = 10000, double as = 1, double bs = 1, double ag = 1, double bg = 1) {
        typedef SEXP(*Ptr_rrum_helper)(SEXP,SEXP,SEXP,SEXP,SEXP,SEXP,SEXP,SEXP);
        static Ptr_rrum_helper p_rrum_helper = NULL;
        if (p_rrum_helper == NULL) {
            validateSignature("Rcpp::List(*rrum_helper)(const arma::mat&,const arma::mat&,const arma::vec&,unsigned int,double,double,double,double)");
            p_rrum_helper = (Ptr_rrum_helper)R_GetCCallable("rrum", "_rrum_rrum_helper");
        }
        RObject rcpp_result_gen;
        {
            RNGScope RCPP_rngScope_gen;
            rcpp_result_gen = p_rrum_helper(Shield<SEXP>(Rcpp::wrap(Y)), Shield<SEXP>(Rcpp::wrap(Q)), Shield<SEXP>(Rcpp::wrap(delta0)), Shield<SEXP>(Rcpp::wrap(chain_length)), Shield<SEXP>(Rcpp::wrap(as)), Shield<SEXP>(Rcpp::wrap(bs)), Shield<SEXP>(Rcpp::wrap(ag)), Shield<SEXP>(Rcpp::wrap(bg)));
        }
        if (rcpp_result_gen.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (Rcpp::internal::isLongjumpSentinel(rcpp_result_gen))
            throw Rcpp::LongjumpException(rcpp_result_gen);
        if (rcpp_result_gen.inherits("try-error"))
            throw Rcpp::exception(Rcpp::as<std::string>(rcpp_result_gen).c_str());
        return Rcpp::as<Rcpp::List >(rcpp_result_gen);
    }

}

#endif // RCPP_rrum_RCPPEXPORTS_H_GEN_
