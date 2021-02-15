#include <iostream>
using namespace std;

int factorial(int n) {
  int prod = 1;
  for (int i = n; i >= 1; i--) {
    prod = prod * i;
  }
  return prod;
}

int main() {
  if (factorial(4) != 24) {
    cout << "failed: factorial(4)\n";
  }
  if (factorial(3) != 6) {
    cout << "failed: factorial(3)\n";
  }
  if (factorial(1) != 1) {
    cout << "failed: factorial(1)\n";
  }

  return 0;
}
