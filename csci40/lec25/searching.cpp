#include "searching.h"
using namespace std;

// Searching for valToSearchFor in v and return the first index of it
// if we find it. If we don't find valToSearchFor, then return -1.
int linearSearch(const std::vector<int>& v, int valToSearchFor) {
  for (int i = 0; i < v.size(); i++) {
    if (v.at(i) == valToSearchFor) {
      return i;
    }
  }

  // if we finish the loop and don't return, we didn't find it
  return -1;
}

int binarySearch(const std::vector<int>& v, int valToSearchFor) {
  // our "search space" is initially the entire vector
  int lo = 0;
  int hi = v.size() - 1;

  while (lo <= hi) { // lo & hi will pass each other if the val isn't there
    int mid = (lo + hi) / 2;
    // look at the mid and see which way to go
    if (valToSearchFor > v.at(mid)) {
      // search the right half
      // search from mid+1..hi (new lo)
      lo = mid+1;
    } else if (valToSearchFor < v.at(mid)) {
      // search the left half
      // search from lo..mid-1 (new hi)
      hi = mid-1;
    } else {
      // we found it! mid was the index
      return mid;
    }
  }

  // if we ever get here, we didn't find it :(
  return -1;
}
