#include <iostream>
using namespace std;

double factorial(int x) {
  double res = 1;
  for (int i = x; i >= 1; i--) {
    res = res * i;
  }

  return res;
}

int main() {
  double sum = 0.0;

  for (int n = 0; n <= 100; n++) {
    double currentTerm = 1.0 / factorial(n);  // 1/0!, 1/1!, 1/2!
    sum = sum + currentTerm;
  }

  // now sum should be very close to e!
  cout << sum << endl;

  return 0;
}
