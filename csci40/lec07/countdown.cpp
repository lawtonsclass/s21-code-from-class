#include <iostream>
using namespace std;

int main() {
  int i = 10;  // start i at 10
  while (i >= 1) {
    cout << i << endl;

    // i = i - 1;
    i--;  // equivalent to above
  }

  // i is 0 now--that's what stopped the loop
  // cout << i << endl;

  cout << endl;

  for (int j = 10; j > 0; j--) {
    cout << j << endl;
  }

  return 0;
}
