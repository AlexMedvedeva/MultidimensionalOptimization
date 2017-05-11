#pragma once

#include "Vector.h"
#include "types\FieldElement.h"

namespace NumericalMethods
{

  class Compact
  {

  public:

    Compact(const Vector& s, const Vector& e, const Vector& h) :start(s), end(e), step(h) {}
    Compact(const Compact& other) {};

    bool isInCompact(const Vector& v) const;
    Compact& intersect(const Compact& other) const;
    Compact& unite(const Compact& other) const;

    class compactIterator : public std::iterator<std::input_iterator_tag, Vector>
    {
    private:

      Vector* current;

    public:

      compactIterator(FieldElement* x) :current(x);
      compactIterator(const compactIterator& mit);

      compactIterator& operator++();
      compactIterator& operator++(int);
      void switchDirection(int n);

      bool operator==(const compactIterator& rhs);
      bool operator!=(const compactIterator& rhs);
      Vector& operator*();

    };

  private:

    Vector start, end, step;

  };

}
