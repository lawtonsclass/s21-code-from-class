#include <iostream>
using namespace std;

namespace n1 {
  int foo() {
    return 42;
  }
}

namespace n2 {
  int foo() {
    return 43;
  }
}

// you're not allowed to have the same thing defined twice in one
// "namespace"
// int foo() {
  // return 42;
// }

// int foo() {
  // return 43;
// }

int main() {
  cout << n1::foo() << endl;
  cout << n2::foo() << endl;

  return 0;
}
