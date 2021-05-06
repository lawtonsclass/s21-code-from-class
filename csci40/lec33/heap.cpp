#include <iostream>
using namespace std;

int main() {
  int* x = new int;
  *x = 42;
  cout << x << ": " << *x << endl;
  delete x;
  // should never use x (unless you reset it) after this

  cout << "Enter the size: ";
  int size;
  cin >> size;

  // make an array of size on the heap
  int* arr = new int[size];

  // fill in the array
  for (int i = 0; i < size; i++) {
    cout << "Enter the next number in the array: ";
    int n;
    cin >> n;
    arr[i] = n;
  }

  // calculate the median
  if (size % 2 == 0) {
    double median = static_cast<double>(arr[size/2] + arr[size/2 - 1]) / 2;
    cout << median << endl;
  } else {
    // middle index is just size / 2
    cout << arr[size/2] << endl;
  }

  delete[] arr;

  return 0;
}
