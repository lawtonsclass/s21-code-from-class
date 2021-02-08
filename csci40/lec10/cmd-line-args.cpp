#include <iostream>
using namespace std;

int main(int argc, char* argv[]) {
  // argc is the # of command line arguments (including the name of
  // the program)
  // argv is the array of the arguments IN STRING FORM

  cout << argc << endl;
  for (int i = 0; i < argc; i++) {
    cout << "argv[" << i << "] = " << argv[i] << endl;
  }

  return 0;
}
