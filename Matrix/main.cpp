#include <iostream>
#include "LoopMatrix.h"
using namespace std;

int main()
{
    cout << "input size£º" << endl;
    int size;
    cin >> size;
    LoopMatrix m(size);
    m.fill();
    cout << m << endl;
    return 0;
}
