#include "counter.h"

// global variable that keeps track of the count inside the counter
int count;

void init_counter() {
  // set the count to 0
  count = 0;
}

void inc() {
  // increments the count
  count++;
}

void dec() { count--; }

void reset() { count = 0; }

int get_count() { return count; }
