#include <iostream>
#include <vector>
using namespace std;

int main() {
  // x <-- p <-- q <-- r
  int x = 42;
  int* p = &x; // p points to x
  int** q = &p; // q points to p
  int*** r = &q; // r points to q

  cout << x << endl;
  cout << *p << endl;
  cout << **q << endl;
  cout << ***r << endl;

  vector<int> v = {1, 2, 3};
  vector<int>* vp = &v;
  
  cout << (*vp).size() << endl;
  cout << vp->size() << endl; // equivalent to the line above

  return 0;
}
