#include <iostream>

using namespace std;

class Dest
{
public:

    Dest()
    {
        cout << "Dest::Dest()" << endl;
    }
};

class Src
{
public:

    Src()
    {
        cout << "Src::Src()" << endl;
    }

    operator Dest() const
    {
        cout << "Src operator Dest() called" << endl;
        return Dest();
    }
};

void Func(Dest )
{

}

int main()
{
    Src s;

    Dest d2 = s;
    Func(s);
    return 0;
}
