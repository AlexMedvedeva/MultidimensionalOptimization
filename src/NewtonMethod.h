#pragma once

#include <Windows.h>
#include <string>

#include "Solver.h"
#include "types/Function.h"

#ifdef BUILD_DLL
  #define DLL_EXPORT __dclspec(dllexport)
#else
  #define DLL_EXPORT __dclspec(dllimport)
#endif

namespace NumericalMethods
{

  struct NewtonInputData
  {
    Function f;
    double a;
    double b;
  };

  struct NewtonParams
  {
    double acc;
    double x0;
  };

  struct NewtonMetaData
  {
    std::string function, a, b, acc, x0;
  };

  class NewtonMethod : public virtual Solver
  {

  public:

    virtual Error solve(const Any input_data, const Any params, Any* output_data, Any* extra) = 0;
    virtual std::string getDialogWindow() = 0;
    virtual std::string getResultWindow() = 0;

  };

  NewtonMethod* create_interface();

}