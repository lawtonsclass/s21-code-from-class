#include <iostream>
using namespace std;

// this defines a *new* type called Point
// Every Point value holds an x and y coordinate inside
struct Point {
  double x;
  double y;
};  // <-- you need a semicolon at the end of a struct defn.

// adds the corresponding coordinates of two points
Point add(const Point& one, const Point& two) {
  Point ans;

  ans.x = one.x + two.x;
  ans.y = one.y + two.y;

  return ans;
}

void printPoint(const Point& p) {
  cout << "(" << p.x << ", " << p.y << ")" << endl;
}

// when we pass p to this function, the parameter r is initialized as:
// Point& r = p;
void negatePoint(Point& r) {
  // negate the x and y coords
  r.x = -r.x;
  r.y = -r.y;
}

int main() {
  // p and q below are *objects*
  Point p;  // undefined
  p.x = 42;
  p.y = 43;

  printPoint(p);

  Point q = {4.5, 7.89};  // array syntax also sets the Point
  // the member vars are set in the order that they're declared

  printPoint(q);

  Point pq_sum = add(p, q);
  printPoint(pq_sum);

  negatePoint(p);
  printPoint(p);

  return 0;
}
