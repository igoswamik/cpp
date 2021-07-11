#include <iostream>

using namespace std;

class Base
{
public:
    int a;
    Base()
    {
        fun(); //note: fun() is virtual
    }
    void fun()
    {
        cout << "\nBase Function";
    }
};

class Derived : public Base
{
public:
    int b;
    Derived()
    {
        fun();
    }
    void fun()
    {
        cout << "\nDerived Function";
    }
};

int main()
{
    int x;
    cin >> x;
    Base pBase;
    pBase.a = 4;
    return 0;
}