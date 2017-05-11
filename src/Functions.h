#pragma once

#include <list>
#include <iterator>

#include "function.h"
#include "utils\StringArray.h"

namespace NumericalMethods
{

  class Functions
  {

  public:

    void add(const Function& f);
    StringArray& getNames();
    Function& getFunction(std::string& name);

  private:

    std::list<Function> functions;

  };

}