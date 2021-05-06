#include <iostream>
using namespace std;

int binary_search(int *arr, int lo, int hi, int valToSearchFor) {
  while (lo <= hi) {
    // find the mid index
    int mid = (lo + hi) / 2;
    // see which side of the array the value is on
    // change the search space if you didn't find the value at the mid
    if (valToSearchFor < arr[mid]) {
      // mid was too big! search to the left
      hi = mid-1;
    } else if (valToSearchFor > arr[mid]) {
      // mid was too small! search to the right
      lo = mid+1;
    } else {
      // we found it!
      return mid;
    }
  }

  // if we ever get here hi < lo, which means our search space is
  // empty
  return -1;
}

int main() {
  int arr[] = {2, 4, 6, 8, 10};

  cout << binary_search(arr, 0, 4, 2) << endl;
  cout << binary_search(arr, 0, 4, 5) << endl;

  return 0;
}
