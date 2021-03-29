#include <iostream>
#include <vector>
using namespace std;

int main() {
  // vector<int> v = {1, 2, 3};
  // cout << v.at(3) << endl;

  // vector will *throw* an out_of_range exception when we try to
  // access an invalid index

  // if we don't *catch* the out_of_range exception, C++ will treat
  // the exception as a runtime error and stop the program
  
  // if we want to handle the exception, we put it in a try/catch
  // block

  try {
    // put code that might throw an exception here
    vector<int> v = {1, 2, 3};
    cout << v.at(3) << endl;
  } catch (out_of_range& oor) {
    // you usually catch things by reference
    // if an out_of_range happens in the code from the try block, C++
    // will jump here to handle the exception
    cout << "Uh oh!\n";
    // every C++ standard library exception has a .what() method that
    // we can call to get extra information
    cout << oor.what() << endl;
  }

  return 0;
}
