#include <iostream>
using namespace std;

int main() {
  int arr[4][4];

  arr[0][3] = 42;
  arr[3][2] = 41;

  cout << arr[0][3] << endl;
  cout << arr[3][2] << endl;

  return 0;
}
