#ifndef SUMOFSQUARES_H
#define SUMOFSQUARES_H

// I'm including the file within itself--oh no!!!
// tries to copy the file within itself
#include "sumOfSquares.h"
// ^ we can stop this from being a problem with a header file *guard*

// .h files are header files--they hold declarations of functions

int square(int x);
int Sum(int x, int y);
// this declares that sumSquaresFrom1To exists
// it's a promise that it will be defined later
int sumSquaresFrom1To(int n);

#endif
