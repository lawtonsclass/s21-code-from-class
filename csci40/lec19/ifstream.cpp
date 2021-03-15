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
  for (int i = 0; i < 5; i++) {
    int n;
    ifs >> n; // read one whitespace-separated int
    sum += n;
  }

  cout << "Sum: " << sum << endl;

  return 0;
}
