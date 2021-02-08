#include <iostream>
using namespace std;

int main() {
  int arr[] = {1, 2, 3};

  // let's swap indices 0 and 2 of arr

  int temp = arr[0];
  arr[0] = arr[2];
  arr[2] = temp;

  cout << arr[0] << " " << arr[1] << " " << arr[2] << endl;

  return 0;
}
