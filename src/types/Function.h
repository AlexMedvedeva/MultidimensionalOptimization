#pragma once

#include "../utils/String.h"

namespace NumericalMethods
{

  class Function
  {

  public:

    Function(String metaData, double(*f)(double, int, double*), double(*df)(double, int, double*))
    {
      this->f = f;
      this->df = df;
      this->metaData = metaData;
    }

    double operator () (double x, int n, double* params) const { return f(x, n, params); }
    double derivative(double x, int n, double* params) const { return df(x, n, params); }

  private:

    double(*f)(double, int, double*);
    double(*df)(double, int, double*);
    String metaData;

  };
}
