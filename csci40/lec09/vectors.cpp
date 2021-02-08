#include <iostream>
#include <vector>  // for the vector type
using namespace std;

int main() {
  // int arr[] = {1, 2, 3};

  // to make a vector of ints, holding 1 2 3 (in that order), you can
  // do:
  vector<int> v = {1, 2, 3};  // just like an array almost!

  // iterate through the entire vector
  for (int i = 0; i < v.size(); i++) {
    cout << v.at(i) << " ";
  }
  cout << endl;

  vector<int> v2;  // v2 is currently empty
  cout << v2.size() << endl;
  v2.push_back(1);
  v2.push_back(2);
  v2.push_back(3);
  cout << v2.size() << endl;
  for (int i = 0; i < v2.size(); i++) {
    cout << v2.at(i) << " ";
  }
  cout << endl;

  return 0;
}
