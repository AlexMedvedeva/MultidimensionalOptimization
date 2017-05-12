#ifndef INTEGER_H
#define INTEGER_H

#include "FieldElement.h"

class Integer: virtual public FieldElement
{
public:
    Integer(int val);
    int getNumber();
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

class IntegerFactory : public Factory
{
public:
  virtual Element* create(int n = 1);
};


#endif // INTEGER_H
