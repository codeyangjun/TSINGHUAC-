#include <iostream>
#include "SortedArray.h"
using namespace std;

int main()
{
    int arr[] = {32,71,12,45,26,80,53,33};
    SortedArray obj;

    obj(arr, 8);

    for(int i = 0; i < 8; i++)
    {
        cout << arr[i] << " ";
    }
    cout  << endl;
    return 0;
}
