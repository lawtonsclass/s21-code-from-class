#include <iostream>
#include <stdexcept>
using namespace std;

int divide(int dividend, int divisor) {
  if (divisor == 0) {
    throw runtime_error("divide by 0");
  }
  return dividend / divisor;
}

int main() {
  // where/how should we handle the divide-by-zero???
 
  bool didItWork = false; // did the division work?

  while (!didItWork) {
    try {
      int n, m;
      cout << "Enter two numbers to divide: ";
      cin >> n >> m;
      cout << n << "/" << m << " is: " << divide(n, m) << endl;
      // we need to eventually get to this line in order for the loop
      // to stop
      didItWork = true;
    } catch (runtime_error& e) {
      cout << e.what() << endl;
      cout << "Let's try again...\n";
    }
  }

  return 0;
}
