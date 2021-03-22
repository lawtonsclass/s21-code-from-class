#include <iostream>
using namespace std;

// returns m^n
double pow(double m, int n) {
  cout << "calling pow(" << m << ", " << n << ")\n";

  if (n == 0) {
    // base case: anything to the 0 power is 1
    return 1;
  } else {
    // recursive case
    return m * pow(m, n-1);
  }
}

int main() {
  cout << pow(2, 4) << endl;

  return 0;
}
