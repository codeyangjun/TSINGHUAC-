#include <iostream>
#include <cstring>

using namespace std;

/*
template<typename T>
T sum(T a, T b)
{
    return a + b;
}

template<>
char* sum(char*a, char* b)//函数模板特化，因为类型已知，故模板参数列表为空
{
    char *p = new char(strlen(a) + strlen(b) + 1);
    strcpy(p, a);
    strcat(p, b);
    return p;
}

int main()
{
    cout << sum(3,4) << endl;
    char *str1 = "Hello,";
    char *str2 = "world!";
    cout << sum(str1, str2) << endl;
    return 0;
}
*/

template <typename T>
class Sum
{
    T a, b;
public:
    Sum(T op1, T op2) :a(op1),b(op2)
    {

    }

    T DoIt()
    {
        return a + b;
    }
};

template<>
class Sum<char *>//类数模板特化，因为类型已知，故模板参数列表为空
{
    char *str1, *str2;
public:
    Sum(char *s1, char *s2) : str1(s1), str2(s2)
    {

    }

    char* DoIt()
    {
        char *p = new char(strlen(str1) + strlen(str2) + 1);
        strcpy(p, str1);
        strcat(p, str2);
        return p;
    }
};

int main()
{
    Sum<int> obj1(3,4);
    cout << obj1.DoIt()<<endl;

    char *s1 = "Hello,";
    char *s2 = "World!";

    Sum<char *> obj2(s1, s2);
    cout << obj2.DoIt() << endl;
    return 0;
}
