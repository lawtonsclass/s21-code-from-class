#include <iostream>
using namespace std;

class C {
  public:
    int val;
    int val2;
    const int val3;

    // option 1: set val to 0 normally
    // C() {
      // val = 0;
    // }
    
    // option 2: set val to 0 using an initializer list
    C() : val(0), val2(42), val3(44) {
      // val3 = 45; // <-- it's too late to set val3 here--you *have
      // to* do it in the initalizer list if you want to do it at all
    } // empty body!
    // initializer lists only work for constructors!!!
};

int main() {
  C c; 
  // c.val3 = 44; // <-- doesn't work, but does work in the
  // initializer list!
  cout << c.val << endl;
  cout << c.val2 << endl;
  cout << c.val3 << endl;

  int x(43); // constructor-style initialization of an int
  cout << x << endl;

  return 0;
}
