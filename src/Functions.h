#pragma once

#include <list>
#include <iterator>

#include "utils/String.h"
#include "types/Function.h"
#include "utils/StringArray.h"

namespace NumericalMethods
{

  class Functions
  {

  public:

    void add(const Function& f);
    StringArray& getNames();
    Function& getFunction(String& name);

  private:

    std::list<Function> functions;

  };

}
