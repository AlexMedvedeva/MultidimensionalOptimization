#ifndef SET_H
#define SET_H

#include "types/Element.h"
#include <iterator>

namespace NumericalMethods
{

  class Set {

  public:

    bool operator == (const Set &set) const;

    bool contain(const Element &element) const;
    void add(const Element &element);
    void remove(const Element &element);

    Set& intersect(const Set& other) const;
    Set& unite(const Set& other) const;
    Set& difference(const Set& other) const;
    Set& symmetricDifference(const Set& other) const;
    bool isSubset(const Set& set) const;

    int size() const;

    class setIterator : public std::iterator<std::input_iterator_tag, Element>
    {

    public:

      setIterator();
      setIterator(const setIterator& other);

      setIterator& operator++ ();
      setIterator& operator++ (int);

      bool operator== (const setIterator& rhs);
      bool operator!= (const setIterator& rhs);
      Element& operator*();

    };

    setIterator& iterator() const;

  };

}

#endif // SET_H
