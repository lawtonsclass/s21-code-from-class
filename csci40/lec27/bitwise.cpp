#include <iostream>
using namespace std;

int negate_2s_complement(int x) {
  // let's perform 2's complement ourselves!
  x = ~x; // flip all x's bits
  x = x + 1; // add 1
  return x;
}

int main() {
  // this performs the bitwise and on 11 and 6
  cout << (11 & 6) << endl;
  cout << (11 & 8) << endl; // nonzero if the 3rd bit is set
  cout << ((11 & 8) != 0) << endl;  // true if the 3rd bit is set (8 is 1000)

  cout << (9 | 12) << endl;
  cout << (10 | 1) << endl; // sets the 0th bit in the # 10

  cout << (~9) << endl; // gives back a weird negative number because 9 is 000...0001001
  cout << negate_2s_complement(10) << endl;

  cout << (11 ^ 5) << endl;

  cout << (11 << 2) << endl;
  cout << (4 >> 2) << endl;

  cout << ((11 & (1 << 3)) != 0) << endl;  // true if the 3rd bit is set (8 is 1000)

  return 0;
}
