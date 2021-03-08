#include <iostream>
using namespace std;

// call by reference
void swap_ref(int& a, int& b) {
  int temp = a;
  a = b;
  b = temp;
}

// call by address/ptr
void swap_ptr(int* a, int* b) {
  // a & b are ptrs to ints! (don't forget to dereference them)
  int temp = *a;
  *a = *b;
  *b = temp;
}

int main() {
  int x = 42, y = 43;  
  swap_ref(x, y);
  cout << x << " " << y << endl;

  swap_ptr(&x, &y);
  cout << x << " " << y << endl;

  return 0;
}
