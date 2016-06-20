#include <iostream>
#include "Iterator.h"
#include "ArrayCollection.h"
using namespace std;

void analyze(Iterator* begin, Iterator* end)
{
    int passed = 0, count = 0;
    for (Iterator* p = begin; *p != *end; (*p)++)
    {
        if (**p >= 60)
            passed ++;
        count ++;
    }
    cout << "passing rate = " << (float)passed / count << endl;
}

int main(int argc, char *argv[])
{
    float scores[]= {90, 20, 40, 40, 30, 60, 70, 30, 90, 100};

    Collection *collection = new ArrayCollection(10, scores);
    analyze(collection -> begin(), collection -> end());

    return 0;

}
