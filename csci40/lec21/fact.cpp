#include <iostream>
using namespace std;


// fact(n) returns n!
int fact(int n) {
  if (n == 1) {
    // base case
    return 1;
  } else {
    // n! = n * (n-1)!
    // ***you get to assume*** that fact(n-1) will correctly give back
    // (n-1)! It will be correct as long as you build up the answer
    // correctly!
    return n * fact(n - 1);
  }
}

int factIterative(int n) {
  int res = 1;
  for (int i = n; i >= 1; i--) {
    res = res * i;
  }

  return res;
}

int main() {
  cout << fact(5) << endl; 
  cout << factIterative(5) << endl; 

  return 0;
}
