#include <iostream>
using namespace std;

// now we can have member functions (i.e., methods)!
class Point {
 public:
  // the data
  double x;
  double y;

  // the operations on the data
  // member functions
  void negate() {
    // flip the x and y member variables of our current object
    x = -x;
    y = -y;
  }

  Point add(const Point& o) {
    // use our x & y and o.x/o.y
    Point ans;

    ans.x = x + o.x;
    ans.y = y + o.y;

    return ans;
  }

  // change x & y by a constant c
  void scale(double c) {
    x = c * x;
    y = c * y;
  }
};  // <-- you need a semicolon at the end of a class defn.

int main() {
  Point p, q;
  p.x = 1;
  p.y = 2;
  q.x = 3;
  q.y = 4;

  p.negate();  // the negate method acts on p and negates it
  cout << p.x << " " << p.y << endl;  // should print -1 -2

  Point sum = p.add(q);
  cout << sum.x << " " << sum.y << endl;  // should print 2 2

  q.scale(42);
  cout << q.x << " " << q.y << endl;  // should print (42*3) (42*4)

  return 0;
}
