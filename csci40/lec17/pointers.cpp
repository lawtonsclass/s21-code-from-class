#include <iostream>
using namespace std;

int main() {
  int x = 42;
  int* p = &x; // p holds the "address of" x

  cout << &x << endl;
  cout << p << endl;

  cout << x << endl;
  cout << *p << endl; // follows p to get the value at the addr. it's pointing to

  *p = 6;
  cout << x << endl;

  *p = *p + 1;
  cout << x << endl;
  cout << *p << endl;


  double d = 3.14;
  double* p2 = &d; // p2 is a pointer to a double--it can only hold double addresses
  cout << *p2 << endl;

  int** r = &p; // r points to p (which itself points to x)
  cout << **r << endl; // equivalent to cout << *p & cout << x

  return 0;
}
