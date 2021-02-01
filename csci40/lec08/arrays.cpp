#include <iostream>
using namespace std;

int main() {
  int arr[10];  // arr is an array holding ints with 10 indices (0 to 9)

  cout << "Enter ten numbers: ";
  for (int i = 0; i < 10; i++) {
    cin >> arr[i];  // cin into each index of the array
  }

  // now the array arr is full of 10 things

  // let's print them back out
  for (int i = 0; i < 10; i++) {
    cout << arr[i] << ' ';
  }
  cout << endl;

  // let's calculate the sum
  int sum = 0;
  for (int i = 0; i < 10; i++) {
    sum = sum + arr[i];  // add in each arr[i]
  }
  cout << "sum: " << sum << endl;

  // let's find the minimum value in arr
  // intially, we make a guess that the 0th index is the min
  int min = arr[0];  // we'll update the min if we find something smaller
  // we can start with i = 1, since we've already guessed the min is i = 0
  for (int i = 1; i < 10; i++) {
    // see if we find a smaller value
    // if we do, update our guess for the minimum
    if (arr[i] < min) {
      // the current index we're looking at is *smaller* than our
      // current guess for the minimum
      min = arr[i];  // update the guess
    }
  }
  // once we've tried every index, the minimum must be in the min variable
  cout << "min: " << min << endl;

  return 0;
}
