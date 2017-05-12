#ifndef SETELEMENT_H
#define SETELEMENT_H

class Element;

class Factory {
public:
  virtual Element* create(int n = 1) = 0;
};

class Element 
{
public:
    virtual Factory* getFactory() const = 0;

    virtual bool operator==(const Element &element) const = 0;
    virtual bool operator < (const Element &element) const = 0;
    virtual bool operator > (const Element &element) const = 0;
    virtual bool operator <= (const Element &element) const = 0;
    virtual bool operator >= (const Element &element) const = 0;
};

#endif // SETELEMENT_H
