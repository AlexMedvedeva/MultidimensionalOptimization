#pragma once

#include <typeinfo>

#include "types/FieldElement.h"

namespace NumericalMethods
{

  class Vector
  {

  public:

    Vector(int n);
    Vector(int n, const FieldElement* source);
    Vector(int n, const Vector& other);
    ~Vector();

    FieldElement& get(int i) const;
    void set(int i, const FieldElement& value);
    int length() const;
    bool compare(Vector& other) const;

    Vector& operator = (const Vector& other);
    bool operator == (const Vector& other) const;
    Vector& operator + (const Vector& other) const;
    Vector& operator += (const Vector& other);
    Vector& operator - (const Vector& other) const;
    Vector& operator -= (const Vector& other);
    Vector& operator - () const;
    FieldElement& operator * (const Vector& other) const;
    static Vector& crossProduct(const Vector& v1, const Vector& v2);

  private:

    int n;
    FieldElement* value;

  };

  Vector& operator * (const FieldElement& number, const Vector& vector);

}
