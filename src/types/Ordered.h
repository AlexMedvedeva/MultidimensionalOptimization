#ifndef SETELEMENT_H
#define SETELEMENT_H

#include "Object.h"

class Ordered : public virtual Object
{
public:
    virtual bool operator < (const Ordered &element) const = 0;
    virtual bool operator > (const Ordered &element) const;
    virtual bool operator <= (const Ordered &element) const;
    virtual bool operator >= (const Ordered &element) const;
};

#endif // SETELEMENT_H
