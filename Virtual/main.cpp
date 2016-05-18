#include <iostream>

using namespace std;

class Base
{
public:
    Base()
    {
        //ctor
    }

    virtual ~Base()
    {
        //dtor
    }

    virtual void print()
    {
        cout << "Base print()" << endl;
    }

};

class Derived : public Base
{
public:
    Derived()
    {

    }

    virtual ~Derived()
    {

    }

    virtual void print()
    {
        cout << "Derived print()" << endl;
    }


};

void f(Base& obj)
{
    obj.print();
}

int main()
{
    Derived D;
    D.print();
    f(D);
    return 0;
}
