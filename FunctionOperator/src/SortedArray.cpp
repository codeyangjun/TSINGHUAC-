#include "SortedArray.h"
#include <algorithm>
#include <functional>

SortedArray::SortedArray()
{
    //ctor
}

SortedArray::~SortedArray()
{
    //dtor
}

int* SortedArray::operator()(int *arr, int n)
{
    std::sort(arr, arr+n,  std::greater<int>());
    return arr;
}
