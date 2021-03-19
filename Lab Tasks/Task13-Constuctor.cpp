#include <iostream>
using namespace std;

class Base
{
    int num1, num2;

public:
    // Default constructor:
    /*
        Default constructor is the constructor which doesn't take any argument. It has no parameter.
    */
    Base()
    {
        cout << "Called Default constructor" << endl;
    }

    // Parametrized Constructor :
    /*
        Parametrized constructor is the constructor which  take  argument. It has parameter.
    */
    Base(int a, int b)
    {
        this->num1 = a;
        this->num2 = b;
    }

    // Copy constructor
    /*
        Constructors which takes an object as argument, and is used to copy values of data members of one object into other object.
    */

    Base(const Base &b)
    {
        this->num1 = b.num1;
        this->num2 = b.num2;
    }

    void display()
    {
        cout << this->num1 << " " << this->num2 << endl;
    }
};

int main()
{
    Base b; // for default constructor

    cout << "Parametrized constructor" << endl;
    Base b1(5, 6); // for parameterized constructor
    b1.display();

    cout << "Copy constructor" << endl;
    Base b2 = b1; // for copy constructor
    b2.display();

    return 0;
}
