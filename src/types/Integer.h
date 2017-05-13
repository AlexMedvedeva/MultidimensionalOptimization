#ifndef INTEGER_H
#define INTEGER_H

#include "FieldElement.h"

class Integer: virtual public FieldElement,
               virtual public Ordered
{
public:
    Integer(int val);
    virtual Object* create(int n = 1);
    int getNumber();
    virtual int toInt() const;
    virtual double toDouble() const;
    virtual float toFloat() const;
    FieldElement& operator+(const FieldElement& element) const;
    FieldElement& operator-(const FieldElement& element) const;
    FieldElement& operator*(const FieldElement& element) const;
    FieldElement& operator/(const FieldElement& element) const;
    bool operator==(const Object &element) const;
    bool operator< (const Ordered &element) const;
};


#endif // INTEGER_H
