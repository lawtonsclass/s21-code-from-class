#include <iostream>
using namespace std;

#include "searching.h"

int main() {
  vector<int> v = {8, 6, 7, 5, 3, 0, 9};
  cout << linearSearch(v, 0) << endl; // should print 5
  cout << linearSearch(v, 10) << endl; // should print -1

  vector<int> v2 = {1, 7, 33, 42, 55, 87};
  cout << binarySearch(v2, 55) << endl; // should print 4
  cout << binarySearch(v2, 10) << endl; // should print -1

  cout << "hi mom!\n";

  return 0;
}
