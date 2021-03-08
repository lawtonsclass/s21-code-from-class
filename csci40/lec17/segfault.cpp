#include <iostream>
using namespace std;

int main() {
  // int *p = nullptr;
  // cout << p << endl;
  // cout << *p << endl; // guaranteed to segfault
  
  int *q;
  cout << q << endl; // most likely will segfault
  cout << *q << endl;

  return 0;
}
