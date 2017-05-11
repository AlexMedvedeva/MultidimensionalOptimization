#include "NewtonMethod.h"

using namespace NumericalMethods;

namespace
{

  class NewtonMethod_impl : public virtual NewtonMethod
  {

    virtual Error solve(const Any input_data, const Any params, Any* output_data, Any* extra);
    virtual std::string getDialogWindow();
    virtual std::string getResultWindow();

  };

};

namespace NumericalMethods
{

  NewtonMethod * create_interface()
  {
    return new NewtonMethod_impl();
  }

};

Error NewtonMethod_impl::solve(const Any input_data, const Any params, Any* output_data, Any* extra)
{
  NewtonInputData data = input_data.cast<NewtonInputData>();
  NewtonParams p = params.cast<NewtonParams>();
  double res = 0;
  //insert method code here
  *output_data = res;
  return Error::RC_OK;
}

std::string NewtonMethod_impl::getDialogWindow()
{
  return "";
}

std::string NewtonMethod_impl::getResultWindow()
{
  return "";
}
