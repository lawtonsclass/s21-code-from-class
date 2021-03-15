#include <iostream>
#include <fstream>
using namespace std;

int main() {
  // instead of using .open, we can give the filename to the
  // ifstream contructor
  ifstream ifs("1to10.txt");

  // ifs.open("1to10.txt"); // not necessary now
  
  // let's read 5 ints from ifs and sum them
  int sum = 0;
  int n;
  while (ifs >> n) { // while ifs successfully gets a number n
    // n got set to a valid value
    sum += n;
  }

  cout << ifs.eof() << endl; // should be true

  cout << "Sum: " << sum << endl;

  return 0;
}
