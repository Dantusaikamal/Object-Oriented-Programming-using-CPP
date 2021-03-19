// Program to explain multilevel inheritance

#include <iostream>
using namespace std;

class A1
{
public:
    void myFunction()
    {
        cout << "Some content in parent class." << endl;
    }
};

class A2 : public A1
{
public:
    void mychild()
    {
        cout << "Some content in mychild class" << endl;
    }
};

class A3 : public A2
{
};

int main()
{
    A3 myobj;
    myobj.mychild();
    myobj.myFunction();

    return 0;
}
