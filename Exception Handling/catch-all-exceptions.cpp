#include <iostream>
using namespace std;

void func(int a) {
   try {
      if(a==0) throw 23.33;
      if(a==1) throw 's';
   } catch(...) {
      cout << "Caught Exception!\n";
   }
}
int main() {
   func(0);
   func(1);
   return 0;
}
