#include <iostream>
using namespace std;

int main() {
  int* n = new int; // n points to a new integer on the heap
  *n = 42;

  cout << n << endl;
  cout << *n << endl;

  // I'm done with the int that n points to; I'll delete it now
  delete n;

  for (int i = 0; i < 100000; i++) {
    int* p = new int;
    // do cool stuff with p..
    delete p;
  }

  return 0;
}
