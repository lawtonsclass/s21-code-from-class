#include <cmath>
#include <iostream>
using namespace std;

int main() {
  for (int y = 12; y >= -11; y--) {
    for (int x = -38; x < 39; x++) {
      // we currently have an (x, y) coordinate right now
      // see if it's on the graph (if so, print a *)
      // if it's (0, 0), print a +
      // otherwise, print a ' '

      // graph x^2 + y^2 = 10^2

      if (y == round(sqrt(100 - x * x))) {  // top of the circle
        // round to the nearest integer (x, y) coordinate on the graph
        cout << "*";
      } else if (y == -round(sqrt(100 - x * x))) {  // bottom of the circle
        // round to the nearest integer (x, y) coordinate on the graph
        cout << "*";
      } else if (x == 0 && y == 0) {
        cout << "+";
      } else {
        cout << " ";
      }
    }
    cout << endl;  // move on to the next line to graph it
  }

  return 0;
}
