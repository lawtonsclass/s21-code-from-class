#include <iostream>
#include <utility>
using namespace std;

int main() {
  pair<int, bool> p = make_pair(5, true);
  cout << p.first << endl;
  cout << p.second << endl;

  return 0;
}
