#ifndef POINT_H
#define POINT_H

// the .h file holds the declaration of the Point class

// now we can have member functions (i.e., methods)!
class Point {
  // the user cannot touch private things--these are only accessible
  // inside the methods
 private:
  // the data
  double x;
  double y;

  // the user can see all the public stuff
 public:
  // let's add getters and setters now!
  double getX() const; // getX should not be allowed to change x or y
  double getY() const;
  void setX(double new_x);
  void setY(double new_y);

  // the operations on the data
  // member functions
  void negate();
  Point add(const Point& o) const; // also shouldn't be able to touch our stuff
  void scale(double c);

  // declarations of the methods above
  // we'll implement them outside the class
};  // <-- you need a semicolon at the end of a class defn.

#endif /* end of include guard: POINT_H */
