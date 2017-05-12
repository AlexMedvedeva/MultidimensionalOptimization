#ifndef DOUBLE_H
#define DOUBLE_H

#include "FieldElement.h"

class Double : virtual public FieldElement
{
public:
    Double(double val);
    double getNumber();
    FieldElement& operator+(const FieldElement& element) const;
    FieldElement& operator-(const FieldElement& element) const;
    FieldElement& operator*(const FieldElement& element) const;
    FieldElement& operator/(const FieldElement& element) const;
    bool operator==(const Element &element) const;
    bool operator < (const Element &element) const;
    bool operator > (const Element &element) const;
    bool operator <= (const Element &element) const;
    bool operator >= (const Element &element) const;
};

class DoubleFactory : public Factory
{
public:
  virtual Element* create(int n = 1);
};

#endif // DOUBLE_H
