#include <iostream>
using namespace std;

int main() {
  int y = 42;
  int& x = y;  // x is a reference to y

  cout << y << endl;
  cout << x << endl;

  // both of these lines affect the *same* box in memory!
  y++;
  x++;

  cout << y << endl;
  cout << x << endl;

  return 0;
}
