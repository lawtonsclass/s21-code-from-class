#include <iostream>
#include <vector>
using namespace std;

void swap_by_value(int a, int b) {
  int temp = a;
  a = b; 
  b = temp;
}

void swap_by_reference(int& a, int& b) {
  int temp = a;
  a = b; 
  b = temp;
}

int sum(const vector<int>& v) {
  int res = 0;
  for (int x : v) {
    res += x;
  }
  return res;
}

int main() {
  int x = 42, y = 43;

  swap_by_value(x, y);
  cout << x << " " << y << endl;

  swap_by_reference(x, y);
  cout << x << " " << y << endl;

  vector<int> v(1000000, 42);
  cout << sum(v) << endl;

  return 0;
}
