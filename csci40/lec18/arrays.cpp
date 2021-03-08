#include <iostream>
using namespace std;

int main() {
  int arr[3] = {4, 5, 6};

  // arr is a ptr to the start of the array
  cout << arr << endl;
  cout << *arr << endl;

  cout << *(arr + 1) << endl;

  int* p = arr;
  cout << p[2] << endl;

  int* arr2 = new int[42];
  arr2[0] = 1;
  arr2[1] = 2;
  // ...
  cout << arr2[0] + arr2[1] << endl;
  delete[] arr2;

  return 0;
}
