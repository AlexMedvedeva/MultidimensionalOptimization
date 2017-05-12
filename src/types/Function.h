#pragma once

#include <string>
#include <vector>

#include "../utils/StringArray.h"

namespace NumericalMethods
{

  class Function
  {

  public:

    Function(std::string name, StringArray params, double(*f)(double, int, double*), double(*df)(double, int, double*))
    {
      this->f = f;
      this->df = df;
      this->name = name;
      this->params = params;
    }

    double operator () (double x, int n, double* params) const { return f(x, n, params); }
    double derivative(double x, int n, double* params) const { return df(x, n, params); }

  private:

    double(*f)(double, int, double*);
    double(*df)(double, int, double*);
    std::string name;
    StringArray params;

  };
}