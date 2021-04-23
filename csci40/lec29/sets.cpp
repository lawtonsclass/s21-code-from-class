#include <iostream>
#include <set>
using namespace std;

int main() {
  set<double> s;
  s.insert(42.5);
  s.insert(3.14);
  cout << s.count(42.5) << endl;
  cout << s.count(2.71) << endl;
  s.insert(1);
  s.insert(2);
  s.insert(3);
  s.erase(42.5);
  cout << s.count(42.5) << endl;

  cout << endl;
 
  for (set<double>::iterator it = s.begin(); it != s.end(); it++) {
    cout << *it << endl;
  }

  cout << endl;

  for (double d : s) {
    cout << d << endl;
  }

  return 0;
}
