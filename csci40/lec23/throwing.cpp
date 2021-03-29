#include <iostream>
#include <string>
using namespace std;

void throwRuntimeError() {
  cout << "Hi from throwRuntimeError!\n";
  throw runtime_error("thrown from the throwRuntimeError function");
}

void throwInt() {
  cout << "Hi from throwInt!\n";
  throw 42;
}

void throwString() {
  cout << "Hi from throwString!\n";
  throw string("blah");
}

int main() {
  try {
    throwRuntimeError(); 
  } catch (out_of_range& oor) {
    // this isn't the right kind of exception...
  } catch (runtime_error& r) {
    cout << "caught a runtime_error!\n";
    cout << r.what() << endl;
  }

  try {
    throwInt(); // goes straight to the catch block once the int is thrown
    throwString(); // therefore, this code will not get executed
  } catch (int& i) {
    cout << "caught int: " << i << endl;
  } catch (string& s) {
    cout << "caught string: " << s << endl;
  }

  return 0;
}
