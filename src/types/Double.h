#ifndef DOUBLE_H
#define DOUBLE_H

#include "FieldElement.h"

class Double : virtual public FieldElement
{
public:
    Double(double val);
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

#endif // DOUBLE_H
