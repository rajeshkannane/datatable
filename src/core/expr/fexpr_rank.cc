//------------------------------------------------------------------------------
// Copyright 2022 H2O.ai
//
// Permission is hereby granted, free of charge, to any person obtaining a
// copy of this software and associated documentation files (the "Software"),
// to deal in the Software without restriction, including without limitation
// the rights to use, copy, modify, merge, publish, distribute, sublicense,
// and/or sell copies of the Software, and to permit persons to whom the
// Software is furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included in
// all copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
// FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS
// IN THE SOFTWARE.
//------------------------------------------------------------------------------
#include "column/const.h"
#include "column/latent.h"
#include "documentation.h"
#include "expr/fexpr_func.h"
#include "expr/eval_context.h"
#include "expr/workframe.h"
#include "python/xargs.h"
#include "stype.h"
#include <iostream>


namespace dt {
namespace expr {

//template <bool MIN>
class FExpr_Rank : public FExpr_Func {
    private:
      std::string method_;
  public:
    FExpr_Rank(py::oobj method)
       {
         if(method.is_string()){
          method_ = method.to_string();
         } else {
            throw TypeError() << "Parameter `method` in rank() should be "
                    <<"a string, instead got "<<method.typeobj();
         }
         bool bool_method = (method_=="dense")||
                            (method_=="first")||
                            (method_=="average")||
                            (method_=="max")||
                            (method_=="min");
         if (!bool_method){
              throw ValueError() <<"The argument for the `method` parameter in rank() "
                      <<"should be one of `dense`, `first`, `average`, `min`, `max`.";
         }
         
      }

    std::string repr() const override {
      std::string out = "rank";
      out += '(';
      out += " method=";
      out += method_;
      out += ')';
      return out;
    }


    Workframe evaluate_n(EvalContext& ctx) const override {
      Workframe wf(ctx);
      bool is_sorted = ctx.get_mod_type() == ModType::SORT;
      if (!is_sorted){
        throw ValueError() << "The rank() function requires a sort.";
      }
      //Groupby gby = ctx.get_groupby();

     return wf;
    }


};


static py::oobj pyfn_rank(const py::XArgs& args) {
  auto arg = args[0].to_oobj();
//   if (arg.is_string()) {
//             arg = arg.to_string();
//     } else {
//         throw TypeError() << "Parameter `method` in `dt.rank()` "
//                 << "should be a string, instead got " << arg.typeobj();
//     }
//   if (rank.is_none()){
//     rank = "average";
//   }
//   if (!rank.is_string()){
//     throw TypeError() << "The argument to the `method` parameter, "
//                 << "should be a string, or `None`, instead got "
//                 << rank.typeobj();
//   }
//   if (rank!="average"|rank!="dense"|rank!="min"|rank!="max"|rank!="first"){
//     throw ValueError() << "The argument to the `method` parameter "
//                 << "should be one of `min`,`max`,`first`,`dense`,`average` or `None`."
//   }
//   rank = rank.to_string();
  return PyFExpr::make(new FExpr_Rank(arg));
}



DECLARE_PYFN(&pyfn_rank)
    ->name("rank")
    //->docs(doc_dt_cummax)
    ->arg_names({"method"})
    ->n_positional_or_keyword_args(1)
    ->n_required_args(1);



}}  // dt::expr
