#include <iostream>
#include <vector>
using namespace std;

int main() {
  vector<int> v = {1, 2, 3};

  // I'm going to iterate through the vector using iterators!
  // first you get an iterator to the beginning of the vector
  vector<int>::iterator it = v.begin();
  // iterate while it != v.end() (because that's one past the end)
  while (it != v.end()) {
    cout << *it << endl; // getting the value at the iterator is like dereferencing
    // advance the iterator to the next element of the vector v
    it++;
  }

  cout << *it << endl; // a bad idea!!!

  return 0;
}
