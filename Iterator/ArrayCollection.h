#ifndef ARRAYCOLLECTION_H_INCLUDED
#define ARRAYCOLLECTION_H_INCLUDED

#include "Collection.h"
#include "ArrayIterator.h"

class ArrayCollection : public Collection
{
    friend class ArrayIterator;
    float* _data;
    int _size;

public:
    ArrayCollection() : _size(10)
    {
        _data = new float[_size];
    }

    ArrayCollection(int size, float* data) : _size(size)
    {
        _data = new float[_size];
        for (int i = 0; i < size; i++)
            *(_data+i) = *(data+i);
    }

    ~ArrayCollection()
    {
        delete[] _data;
    }

    int size()
    {
        return _size;
    }

    Iterator* begin() const;
    Iterator* end() const;
};

#endif // ARRAYCOLLECTION_H_INCLUDED
