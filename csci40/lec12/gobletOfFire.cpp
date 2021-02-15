#include <iostream>
using namespace std;

// harry is a global variable--it lives for the life of the program
int harry = 55;

void gobletOfFire() {
  // cedric is a *local variable*; its "scope" is the gobletOfFire
  // function. cedric doesn't live outside of its scope.
  int cedric = 42;
  cout << "from gobletOfFire: " << cedric << endl;
  cout << "from gobletOfFire: " << harry << endl;
}

int main() {
  cout << "from main: " << harry << endl;
  gobletOfFire();
  cout << "from main, after gobletOfFire returns: " << harry << endl;

  return 0;
}
