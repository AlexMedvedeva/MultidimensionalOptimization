#ifndef VECTORELEMENT_H
#define VECTORELEMENT_H

#include "Element.h"

class FieldElement: virtual public Element
{
public:
    virtual FieldElement& operator+(const FieldElement& element) const = 0;
    virtual FieldElement& operator-(const FieldElement& element) const = 0;
    virtual FieldElement& operator*(const FieldElement& element) const = 0;
    virtual FieldElement& operator/(const FieldElement& element) const = 0;
};


#endif // VECTORELEMENT_H
