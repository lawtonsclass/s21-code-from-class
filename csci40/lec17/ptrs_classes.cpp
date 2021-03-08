#include <iostream>
#include <string>
using namespace std;

int main() {
  string s = "abcd";
  string* sp = &s;
  // sp.size(); // this won’t work
  cout << (*sp).size() << endl; // this will work!
  cout << sp->size() << endl; // this is equivalent!
  // Combination of deref & dot

  return 0;
}
