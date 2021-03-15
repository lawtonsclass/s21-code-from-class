#include <iostream>
#include <fstream>
using namespace std;

int main(int argc, char* argv[]) {
  string fileToCopyFrom = argv[1];
  string fileToCopyTo = argv[2];

  ifstream ifs(fileToCopyFrom);
  ofstream ofs(fileToCopyTo);

  // repeatedly read a character from ifs and write it to ofs
  while (true) {
    // try read a character
    char c = ifs.get();
    // check if the read failed; break if so
    if (!ifs) {
      break; // don't try to use the character--it's garbage if we're past EOF
    }
    // write that new character that we read to the file
    ofs.put(c);
  }

  // we're done!
  ifs.close();
  ofs.close();

  return 0;
}
