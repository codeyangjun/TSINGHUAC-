#ifndef COLLECTION_H_INCLUDED
#define COLLECTION_H_INCLUDED

#include "Iterator.h"
class Collection
{
public:
    virtual ~Collection() { }
    virtual Iterator* begin() const = 0;
    virtual Iterator* end() const = 0;
    virtual int size() = 0;
};

#endif // COLLECTION_H_INCLUDED
