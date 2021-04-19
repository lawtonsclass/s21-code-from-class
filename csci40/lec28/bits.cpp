#include <iostream>
#include <string>
using namespace std;

void setThirdBit(int& n);
bool isThirdBitSet(int n);

void assertTrue(bool b, string description) {
  if (b) {
    cout << "PASSED: " << description << endl;
  } else {
    cout << "FAILED: " << description << endl;
  }
}

void testSetThirdBit() {
  int x = 0;
  setThirdBit(x); // x is 1000
  assertTrue(x == 8, "set third bit of 0");

  int z = 8;
  setThirdBit(z); // z should stay 1000
  assertTrue(z == 8, "set third bit of 8");
}

void testIsThirdBitSet() {
  // 9 is 1001
  int y = 9;
  assertTrue(isThirdBitSet(y), "third bit of 9");
  assertTrue(!isThirdBitSet(5), "third bit of 5");
}


int main() {
  testSetThirdBit();
  testIsThirdBitSet();

  return 0;
}

// start out as stubs, and then implement them slowly to pass the
// tests
void setThirdBit(int& n) {
  n = n | (1 << 3);
}

bool isThirdBitSet(int n) {
  return (n & (1 << 3)) != 0;
}
