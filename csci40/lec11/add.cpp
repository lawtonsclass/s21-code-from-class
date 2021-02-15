#include <iostream>
#include <string>
using namespace std;

int add(int x, int y) {
  // in this function, x = a, and y = b
  // give back the sum of x and y
  return x + y;
}

double add(double x, double y) {
  // give back the sum of x and y
  return x + y;
}

string add(string x, string y) {
  // give back the sum of x and y
  return x + y;
}

int main() {
  int a, b;
  cout << "Enter two numbers: ";
  cin >> a >> b;

  // cout << "The sum is " << (a + b) << endl;
  cout << "The sum is " << add(a, b) << endl;

  // calls the add function that takes doubles and returns doubles
  cout << add(3.14, 5.67) << endl;
  cout << add("hi ", "mom") << endl;
  cout << add(3, 4) * 2 << endl;

  return 0;
}
