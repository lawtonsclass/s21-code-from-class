#include <iostream>
#include <fstream>
using namespace std;

void write1to10(ostream& os) {
  for (int i = 1; i <= 10; i++) {
    // give stuff to ofs just like we would for cout
    os << i << endl;
  }
}

int main() {
  ofstream ofs;
  ofs.open("1to10-ostream.txt"); // open 1to10.txt for writing

  write1to10(ofs);
  write1to10(cout);

  // close the file once we're done writing
  // technically, you don't have to use close here because the program
  // is about to end (and the file will be automatically closed), but
  // it's good practice!
  ofs.close();

  return 0;
}
