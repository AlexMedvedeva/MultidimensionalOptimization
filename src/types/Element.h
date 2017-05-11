#ifndef SETELEMENT_H
#define SETELEMENT_H

#include "Types.h"

class Element{
public:
    virtual bool operator==(const Element &element) const = 0;
    virtual bool operator < (const Element &element) const = 0;
    virtual bool operator > (const Element &element) const = 0;
    virtual bool operator <= (const Element &element) const = 0;
    virtual bool operator >= (const Element &element) const = 0;
protected:
    Types type;
};

#endif // SETELEMENT_H
