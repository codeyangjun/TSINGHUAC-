#ifndef ITERATOR_H_INCLUDED
#define ITERATOR_H_INCLUDED
class Iterator
{
public:
    virtual ~Iterator() { }

    virtual bool operator!=(const Iterator &other) const = 0;

    virtual const Iterator& operator++() = 0;

    virtual const Iterator& operator++(int) = 0;

    virtual float& operator*() const = 0;

    virtual float* operator->() const = 0;

    bool operator==(const Iterator &other) const
    {
        return !(*this != other);
    }
};


#endif // ITERATOR_H_INCLUDED
