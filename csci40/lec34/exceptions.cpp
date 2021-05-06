#include <iostream>
#include <stdexcept>
using namespace std;

double pow(double x, int n) {
  if (n < 0) throw runtime_error("Can't handle negative exponents!");

  if (n == 0) return 1;
  else return x * pow(x, n-1);
}

int flipBit(unsigned int x, int whichBit) {
  if (whichBit < 0 || whichBit > 31)
    throw 42;

  // xor x with (1 << whichBit)
  return x ^ (1 << whichBit);
}

int main() {
  try {
    cout << pow(2, -2) << endl;
  } catch (runtime_error& e) {
    cout << "oops!\n";
    cout << e.what() << endl;
  }

  try {
    cout << flipBit(42, 100) << endl;
  } catch (int& i) {
    cout << "caught " << i << endl;
  }

  return 0;
}
