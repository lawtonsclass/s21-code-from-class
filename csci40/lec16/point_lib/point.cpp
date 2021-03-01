#include <iostream>
using namespace std;

#include "point.h"

// we have to tell C++ that the function below is a method and it
// *belongs* to the Point class
// (read the "::" as an "'s")
void Point::negate() {
  // flip the x and y member variables of our current object
  x = -x;
  y = -y;
}

Point Point::operator+(const Point& o) const {
  // use our x & y and o.x/o.y
  Point ans;

  ans.x = x + o.x;
  ans.y = y + o.y;

  return ans;
}

// change x & y by a constant c
void Point::scale(double c) {
  x = c * x;
  y = c * y;
}

// getters and setters
double Point::getX() const { 
  // x = 42; // <-- not allowed with const
  return x; 
}
double Point::getY() const { return y; }
void Point::setX(double new_x) { x = new_x; }
void Point::setY(double new_y) { y = new_y; }
