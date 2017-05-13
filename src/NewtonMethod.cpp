#include "NewtonMethod.h"

using namespace NumericalMethods;

namespace
{

  class NewtonMethod_impl : public virtual NewtonMethod
  {

    virtual Error solve(const Any& input_data, const Any& params, Any& output_data, Log* log = NULL);
    virtual String& getDialogMetaData();

  };

};

Error NewtonMethod_impl::solve(const Any& input_data, const Any& params, Any& output_data, Log* log)
{
  NewtonInputData data = input_data.cast<NewtonInputData>();
  NewtonParams p = params.cast<NewtonParams>();
  double res = 0;
  //insert method code here
  output_data = res;
  return RC_OK;
}

 String& NewtonMethod_impl::getDialogMetaData()
 {
   return *new String();
 }

namespace NumericalMethods
{

  NewtonMethod * create_interface()
  {
    return new NewtonMethod_impl();
  }

};
