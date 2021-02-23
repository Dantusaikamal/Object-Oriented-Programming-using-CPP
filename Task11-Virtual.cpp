#include <iostream>
using namespace std;

class Base
{
public:
    virtual void print()
    {
        cout << "Base Function\n";
    }
    virtual void greet()
    {
        cout << "Good Morning";
    }
};

class Derived : public Base
{
public:
    void print()
    {
        cout << "Derived Function\n";
    }

    // by using "override" keyword after function.
    // Makes it necessary to to override by user in derived class
    void greet() override
    {
        cout << "Good Night\n";
    }
};

int main()
{
    Derived derived;

    Base *base = &derived;

    base->print();
    base->greet();

    return 0;
}
