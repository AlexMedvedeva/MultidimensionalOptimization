#ifndef INTEGER_H
#define INTEGER_H

#include "FieldElement.h"

class Integer: virtual public FieldElement
{
public:
    Integer(int val);
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

#endif // INTEGER_H
