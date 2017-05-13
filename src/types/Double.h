#ifndef DOUBLE_H
#define DOUBLE_H

#include "FieldElement.h"

class Double : virtual public FieldElement,
               virtual public Ordered
{
public:
    Double(double val);
    virtual Object* create(int n = 1);
    double getNumber();
    virtual int toInt() const;
    virtual double toDouble() const;
    virtual float toFloat() const;
    FieldElement& operator+(const FieldElement& element) const;
    FieldElement& operator-(const FieldElement& element) const;
    FieldElement& operator*(const FieldElement& element) const;
    FieldElement& operator/(const FieldElement& element) const;
    bool operator==(const Object &element) const;
    bool operator < (const Ordered &element) const;
};

#endif // DOUBLE_H
