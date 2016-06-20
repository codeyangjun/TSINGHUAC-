#include "ArrayCollection.h"

Iterator* ArrayCollection::begin() const
{
    return new ArrayIterator(_data, 0);
}

Iterator* ArrayCollection::end() const
{
    return new ArrayIterator(_data, _size);
}

