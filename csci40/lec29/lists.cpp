#include <iostream>
#include <list>
using namespace std;

int main() {
  list<int> l; // start it out empty
  l.push_back(3); // the list is [3]
  l.push_front(2); // [2, 3]
  l.push_front(1); // [1, 2, 3]
  l.push_front(0); // [0, 1, 2, 3]
  l.pop_front(); // [1, 2, 3]

  for (list<int>::iterator it = l.begin(); it != l.end(); it++) {
    cout << *it << endl;
  }

  cout << endl;

  // the following gets translated into the above
  for (int x : l) {
    cout << x << endl;
  }
  
  cout << endl;

  list<int>::iterator it = l.end(); // one past the end...
  it--;
  while (true) {
    cout << *it << endl;

    if (it == l.begin()) {
      break;
    }

    it--;
  }

  return 0;
}
