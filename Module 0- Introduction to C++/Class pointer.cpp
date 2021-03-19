#include <windows.h>
#include <iostream>

using namespace std;

class RectangleTest{

    public:
        int length, breadth;

    public:
        void initialize(int len, int bre){
            length = len;
            breadth = bre;
        }
        int getArea(){
            return 2*length*breadth;
        }
        void display(){
            int area = getArea();
            cout<<"\n*** Rectangle Information ***\n";
            cout<<"Length = "<<length;
            cout<<"\nBreadth = "<<breadth;
            cout<<"\nArea = "<<area;
            cout<<"\n-----------------------------\n";
        }

};

int main()
{
    RectangleTest rect, *class_ptr;
    HANDLE color=GetStdHandle(STD_OUTPUT_HANDLE);
    class_ptr = &rect;

    //Accessing member functions using class pointer
    SetConsoleTextAttribute(color, 10 );    //Setting color Green
    cout<<"\nUsing member functions access";
    SetConsoleTextAttribute(color, 7 );     //Setting color White
    class_ptr->initialize(10,5);
    class_ptr->display();

    //Accessing data members using class pointer
    SetConsoleTextAttribute(color, 10 );    //Setting color Green
    cout<<"\nUsing data members access";
    SetConsoleTextAttribute(color, 7 );     //Setting color White
    class_ptr->length = 2;
    class_ptr->breadth = 3;
    class_ptr->initialize(class_ptr->length,class_ptr->breadth);
    class_ptr->display();

    return 0;
}
