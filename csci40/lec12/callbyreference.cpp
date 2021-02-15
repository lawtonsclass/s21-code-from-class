#include <iostream>
using namespace std;

// when we call this function, x gets initialized as if it were:
// int x = v;
void inc_by_value(int x) { x++; }

// when we call this function, x gets initialized as if it were:
// int& x = v;
void inc_by_reference(int& x) { x++; }

int main() {
  int v = 42;

  inc_by_value(v);
  cout << v << endl;

  inc_by_reference(v);
  cout << v << endl;

  return 0;
}
