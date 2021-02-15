#include <iostream>
using namespace std;

double square(double x) {
  int squared_number = x * x;
  return squared_number;
}

int main() {
  if (square(2) != 4) {
    cout << "failed: square(2)\n";
  } else {
    cout << "passed: square(2)\n";
  }

  if (square(2.5) != 6.25) {
    cout << "failed: square(2.5)\n";
  } else {
    cout << "passed: square(2.5)\n";
  }

  return 0;
}
