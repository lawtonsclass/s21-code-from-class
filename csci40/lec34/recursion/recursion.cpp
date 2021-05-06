#include "recursion.h"

double pow(double x, int n) {
  if (n == 0) return 1;
  else return x * pow(x, n-1);
}

// we get to assume that the smaller recursive call (with a smaller search
// space) is correct
int binary_search(int *arr, int lo, int hi, int valToSearchFor) {
  // base case: search space is empty
  if (lo > hi) return -1;

  // find the mid index
  int mid = (lo + hi) / 2;
  // see which side of the array the value is on
  // change the search space if you didn't find the value at the mid
  if (valToSearchFor < arr[mid]) {
    // mid was too big! search to the left
    return binary_search(arr, lo, mid-1, valToSearchFor);
  } else if (valToSearchFor > arr[mid]) {
    // mid was too small! search to the right
    return binary_search(arr, mid+1, hi, valToSearchFor);
  } else {
    // we found it!
    return mid;
  }
}

