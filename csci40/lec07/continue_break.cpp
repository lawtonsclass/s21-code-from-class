#include <iostream>
using namespace std;

int main() {
  for (int i = 1; i <= 10; i++) {
    if (i == 3) {
      // don't print 3 because we hate it
      continue;  // skips this loop iteration
    }

    cout << i << endl;
  }

  while (true) {  // normally would never stop!
    // but we can still stop it with break!

    cout << "Enter q to quit: ";
    char c;
    cin >> c;

    if (c == 'q') {
      break;  // stop the loop
    }
  }

  return 0;
}
