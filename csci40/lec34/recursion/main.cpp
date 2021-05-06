#include <iostream>
using namespace std;

#include "recursion.h"

int main() {
  cout << pow(2, 5) << endl;

  int arr[] = {2, 4, 6, 8, 10};

  cout << binary_search(arr, 0, 4, 2) << endl;
  cout << binary_search(arr, 0, 4, 5) << endl;
  cout << binary_search(arr, 0, 4, 10) << endl;

  return 0;
}
