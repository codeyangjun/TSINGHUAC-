#include "ArrayIterator.h"

const Iterator& ArrayIterator::operator++()
{
    _index++;
    return *this;
}

const Iterator& ArrayIterator::operator++(int)
{
    _index++;
    return ArrayIterator(_data, _index - 1);
}

float& ArrayIterator::operator*() const
{
    return *(_data + _index);
}

float* ArrayIterator::operator->() const
{
    return (_data + _index);
}

bool ArrayIterator::operator!=(const Iterator &other) const
{
    return (_data != ((ArrayIterator*)(&other))->_data ||
            _index != ((ArrayIterator*)(&other))->_index);
}
