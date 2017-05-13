#pragma once

#include "Error.h"
#include "utils/any.h"
#include "utils/String.h"
#include "utils/Log.h"

namespace NumericalMethods
{

  class Solver
  {
    virtual Error solve(const Any& input_data, const Any& params, Any& output_data, Log* log = NULL) = 0;
    virtual String& getDialogMetaData() = 0;
  };

}
