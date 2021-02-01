#include <iostream>
using namespace std;

int main() {
  for (int i = 0; i < 4; i++) {  // iterates 4 times
    // draw a line of 4 stars
    for (int j = 0; j < 4; j++) {
      cout << '*';
    }
    // print a new line
    cout << endl;
  }

  cout << endl;

  // let's hallow out our box
  for (int i = 0; i < 4; i++) {  // iterates 4 times
    // draw a line of 4 stars
    for (int j = 0; j < 4; j++) {
      if (i >= 1 && i <= 2 && j >= 1 && j <= 2) {
        cout << ' ';
      } else {
        cout << '*';
      }
    }
    // print a new line
    cout << endl;
  }

  return 0;
}
