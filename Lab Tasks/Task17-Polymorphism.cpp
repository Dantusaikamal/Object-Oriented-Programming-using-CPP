// program to find area of square and rectangle using polymorphism function

#include <iostream>
#define PIE 3.14
using namespace std;

class Area
{
    double area;

public:
    double findArea(double side)
    {
        area = side* side;
        return area;
    }

    double findArea(double length, double width)
    {
        area = length * width;
        return area;
    }

    void displayArea(string shapeName)
    {
        cout << "Area of " << shapeName << " is " << area << "\n\n";
    }
};

int main()
{

    Area area;

    area.findArea(5);
    area.displayArea("Square");

    area.findArea(4, 5);
    area.displayArea("Rectangle");

    return 0;
}
