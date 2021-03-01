// to compile, use g++ -std=c++17 point.cpp main.cpp -o main
#include <iostream>
using namespace std;

#include "point.h"

void assertTrue(bool b, string description) {
  if (b) {
    cout << "PASSED: " << description << endl;
  } else {
    cout << "FAILED: " << description << endl;
  }
}

void testNegate() {
  Point p;
  p.setX(42);
  p.setY(-43);
  p.negate();
  assertTrue(p.getX() == -42 && p.getY() == 43, "testNegate");
}

void testScale() {
  Point p;
  p.setX(2);
  p.setY(-3);
  p.scale(2);
  assertTrue(p.getX() == 4 && p.getY() == -6, "testScale");
}

int main() {
  testNegate();
  testScale();

  Point p;
  p.setX(2);
  p.setY(-3);

  Point q;
  q.setX(3);
  q.setY(-4);

  Point s = p + q; // secretly calls p.operator+(q)
  cout << s.getX() << " " << s.getY() << endl;

  return 0;
}
