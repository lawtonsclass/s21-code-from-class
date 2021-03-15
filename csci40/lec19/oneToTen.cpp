#include <iostream>
#include <fstream>
using namespace std;

int main() {
  ofstream ofs;
  ofs.open("1to10.txt"); // open 1to10.txt for writing

  for (int i = 1; i <= 10; i++) {
    // give stuff to ofs just like we would for cout
    ofs << i << endl;
  }

  // close the file once we're done writing
  // technically, you don't have to use close here because the program
  // is about to end (and the file will be automatically closed), but
  // it's good practice!
  ofs.close();

  return 0;
}
