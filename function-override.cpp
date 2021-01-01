#include <iostream>
using namespace std;
class BaseClass {
public:
   void disp(){
      cout<<"Function of Base Class";
   }
};
class DerivedClass: public BaseClass{
public:
   void disp() {
      cout<<"Function of Derived Class";
   }
};
int main() {
   DerivedClass obj = DerivedClass();
   //We can call Base class by changing to BaseClass obj = DerivedClass();
   obj.disp();
   return 0;
}
