// .cpp files hold implementations of our library
// (everything that was declared in the .h file needs to be
// implemented in the .cpp file with the same name)

#include "sumOfSquares.h"
// then define your funcs below main

int Sum(int x, int y) {
  // give back the sum of x and y
  return x + y;
}

// return x^2
int square(int x) { return x * x; }

// returns the sum of all the squares of 1, 2, ..., n
int sumSquaresFrom1To(int n) {
  int sum = 0;
  for (int i = 1; i <= n; i++) {
    // i will range from 1 to n
    // square i and add it to my sum
    int iSquared = square(i);
    // add iSquared into sum
    sum = Sum(sum, iSquared);
  }

  // sum holds the final answer
  // return it
  return sum;
}
