#include <iostream>
using namespace std;

// returns x * 2^n 
int multiplyBy2ToTheN(int x, int n) {
  return x << n;
}

// returns x with the bit #whichBit flipped
int flipBit(unsigned int x, int whichBit) {
  // xor x with (1 << whichBit)
  return x ^ (1 << whichBit);
}

int main() {
  cout << multiplyBy2ToTheN(5, 2) << endl; 
  cout << flipBit(15, 2) << endl;

  return 0;
}
