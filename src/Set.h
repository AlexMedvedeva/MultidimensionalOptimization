#ifndef SET_H
#define SET_H

#include "types/Ordered.h"

namespace NumericalMethods
{

  class Set {

  public:

    bool operator == (const Set &set) const;

    bool contain(const Ordered &element) const;
    void add(const Ordered &element);
    void remove(const Ordered &element);

    Set& intersect(const Set& other) const;
    void intersectWith(const Set& other);
    Set& unite(const Set& other) const;
    void initeWith(const Set& other);
    Set& subtract(const Set& other) const;
    void subtractWith(const Set& other);
    Set& symmetricSubtract(const Set& other) const;
    void symmetricSubtractWith(const Set& other);
    bool isSubset(const Set& set) const;

    int size() const;

    class setIterator
    {

    public:

      setIterator();
      setIterator(const setIterator& other);

      setIterator& operator++ ();
      setIterator& operator++ (int);

      bool operator== (const setIterator& rhs);
      bool operator!= (const setIterator& rhs);
      Ordered& operator*();

    };

    setIterator& iterator() const;

  };

}

#endif // SET_H
