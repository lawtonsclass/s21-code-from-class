#include <iostream>
using namespace std;

int divide(int dividend, int divisor) {
  return dividend / divisor;
}

int main() {
  // where/how should we handle the divide-by-zero???
  
  int n, m;
  cout << "Enter two numbers to divide: ";
  cin >> n >> m;
  
  cout << n << "/" << m << " is: " << divide(n, m) << endl;

  return 0;
}
