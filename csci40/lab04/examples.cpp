#include <iostream>
using namespace std;

int main() {
  int sum = 0;
  int n;

  // cin knows if it succeeded in getting input from the user
  // cin *gives back* true if it was able to successfully get input

  // Ctrl-D on the terminal sends the "end of file" character if you
  // want to use it manually

  // if (cin >> n) {
  //   cout << n << endl;
  // } else {
  //   cout << "there was no number to cin :(" << endl;
  // }

  // get input until there is no more input left
  // that is, until the "end of file" is reached
  while (cin >> n) {
    sum += n;
  }

  cout << "sum: " << sum << endl;

  return 0;
}
