#include <iostream>
using namespace std;

int* makeHeapArrayOfSize(int size) {
  return new int[size];
}

int main() {
  cout << "Enter number of items: ";
  int n;
  cin >> n;

  // make an array of that many elements on the heap
  int* arr = makeHeapArrayOfSize(n);

  for (int i = 0; i < n; i++) {
    int nextNum;
    cin >> nextNum;
    arr[i] = nextNum;
  }

  // sum the elements

  int sum = 0;
  for (int i = 0; i < n; i++) {
    sum += arr[i];
  }

  cout << "sum: " << sum << endl;

  // delete arr
  delete[] arr;

  return 0;
}
