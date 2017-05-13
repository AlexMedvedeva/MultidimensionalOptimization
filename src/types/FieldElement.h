#ifndef VECTORELEMENT_H
#define VECTORELEMENT_H

#include "Object.h"

class FieldElement : public virtual Object
{
public:
    virtual int toInt() const = 0;
    virtual double toDouble() const = 0;
    virtual float toFloat() const = 0;
    virtual FieldElement& operator+(const FieldElement& element) const = 0;
    virtual FieldElement& operator-(const FieldElement& element) const = 0;
    virtual FieldElement& operator*(const FieldElement& element) const = 0;
    virtual FieldElement& operator/(const FieldElement& element) const;
};


#endif // VECTORELEMENT_H
