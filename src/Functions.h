#pragma once

#include <list>
#include <iterator>

#include "function.h"
#include "utils\stringArray.h"

namespace NumericalMethods
{

  class Functions
  {

  public:

    void add(const Function& f);
    stringArray& getNames();
    Function& getFunction(std::string& name);

  private:

    std::list<Function> functions;

  };

}