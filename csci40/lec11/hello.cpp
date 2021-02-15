#include <iostream>
using namespace std;

// void return types are for when your function doesn't return
// anything
void hello() { cout << "hello\n"; }

int main() {
  // let's make a function called hello that prints out "hello"
  // it doesn't give back a value; it just does something for us
  hello();
  hello();

  return 0;
}
