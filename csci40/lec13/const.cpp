#include <iostream>
#include <vector>
using namespace std;

int sum(const vector<int>& v) {
  // if v isn't const, we can do:
  // v.at(0) = 42;
  // ^ not allowed (compiler error) when v is const

  int sum = 0;
  for (int i = 0; i < v.size(); i++) {
    sum += v.at(i);
  }
  return sum;
}

int main() {
  const double PI = 3.14;
  // PI += 1; // can't change a const variable

  vector<int> v = {1, 2, 3};
  cout << sum(v) << endl;

  return 0;
}
