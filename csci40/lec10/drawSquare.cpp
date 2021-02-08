#include <cstdlib>
#include <iostream>
using namespace std;

int main(int argc, char* argv[]) {
  // the program will be run like "./drawSquare 4"
  // the size for the square should be in argv[1]

  // first, let's make sure that argv[1] exists!
  if (argc != 2) {
    cout << "I need two arguments! Usage: ";
    cout << argv[0] << " n, where n is an integer\n";
    // stop the program
    // option 1: exit(0);
    // option 2: return 0;
    return 0;
  }

  int n = atoi(argv[1]);  // don't forget to convert to an int!!!
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      cout << "*";
    }
    cout << endl;
  }

  return 0;
}
