#include <algorithm>  // for sort
#include <iostream>
#include <vector>
using namespace std;

int main() {
  vector<int> v = {8, 6, 7, 5, 3, 0, 9};
  sort(v.begin(), v.end());
  // now v is sorted

  for (int x : v) {
    cout << x << " ";
  }
  cout << endl;

  int arr[] = {2, 1, 3, 5, -42, 7};
  sort(arr, arr + 6);
  for (int i = 0; i < 6; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;

  return 0;
}
