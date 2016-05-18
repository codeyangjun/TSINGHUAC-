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

    void f()
    {
        cout << "Base f()" << endl;
    }

    void f(int i)
    {
        cout << "Base f(int i)" << " " << i << endl;
    }

    void f(double d)
    {
        cout << "Base f(double i)" << " " << d << endl;
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

    using Base::f;//恢复基类的函数
    void f(int i)
    {
        cout << "Derived f(int i)" <<" " << i << endl;
    }


};

int main()
{
    Derived D;
    D.f(4);
    D.f(4.9);
    return 0;
}
