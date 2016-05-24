#ifndef SORTEDARRAY_H
#define SORTEDARRAY_H


class SortedArray
{
    public:
        SortedArray();
        virtual ~SortedArray();

        int* operator()(int *arr, int n);
};

#endif // SORTEDARRAY_H
