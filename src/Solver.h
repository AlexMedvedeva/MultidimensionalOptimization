#pragma once

#include <string>

#include "Error.h"
#include "utils/any.h"

namespace NumericalMethods
{

  class Solver
  {
    virtual Error solve(const Any& input_data, const Any& params, Any* output_data, Any* extra) = 0;
    virtual std::string& getDialogWindow() = 0;
    virtual std::string& getResultWindow() = 0;
  };

}