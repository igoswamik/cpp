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
    virtual void fun()
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

// class Der : public Base, public Derived
// {
// public:
//     Der()
//     {
//         cout << "\n Der constructor \n";
//     }
// };

int main()
{
    int x;
    cin >> x;
    Base *pBase = new Derived;
    pBase->fun(); // compile time polymorphism  at compile time we checked that pBase if pointer of type Base so we called func() of base class we didn't checked what its pointing to
    // To achive Run time polymorphism , WE USE VIRTUAL FUNCTIONS, put virtual keyword in fron of fun() in base class
    // So at run time since pBase is pointing to Derived class obj, and there is virtual in Base class fun(), Derived class function will be called in that case if present, otherwise virtual fun() will get called
    // Der obj;
    // obj.Base::fun();
    Derived d;
    d.fun(); // here Derived class has fun() of base and its own as well but the fun() defined in Derived class itself overrides the fun() of base class;
    return 0;
}