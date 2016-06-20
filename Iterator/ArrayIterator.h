#ifndef ARRAYITERATOR_H_INCLUDED
#define ARRAYITERATOR_H_INCLUDED

#include "Iterator.h"
class ArrayIterator : public Iterator
{
    float *_data;
    int _index;

public:
    ArrayIterator(float* data, int index) :_data(data), _index(index)
    {

    }

    ArrayIterator(const ArrayIterator& other) :_data(other._data), _index(other._index)
    {

    }

    ~ArrayIterator() { }

    const Iterator& operator++();
    const Iterator& operator++(int);
    float& operator*() const;
    float* operator->() const;
    bool operator!=(const Iterator &other) const;
};


#endif // ARRAYITERATOR_H_INCLUDED
