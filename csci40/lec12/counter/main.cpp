#include <iostream>
using namespace std;

#include "counter.h"

int main() {
  init_counter();               // count should start at 0
  cout << get_count() << endl;  // 0
  inc();
  inc();
  inc();
  cout << get_count() << endl;  // 3
  dec();
  cout << get_count() << endl;  // 2
  reset();
  cout << get_count() << endl;  // 0
  inc();
  cout << get_count() << endl;  // 1

  return 0;
}
