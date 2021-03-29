#include <iostream>
#include <stdexcept>
#include <string>
using namespace std;

void doStuff() {
  try {
    int x = 5;
    x++;
    throw runtime_error("uh oh"); // gets handled inside doStuff
    throw string("blah"); // gets handled in main
  } catch (runtime_error& e) {
    cout << "caught a runtime_error in doStuff\n";
    cout << e.what() << endl;
  } catch (int& i) {
    cout << "caught an int in doStuff\n";
    cout << i << endl;
  }
}

int main() {
  try {
    doStuff(); 
  } catch (runtime_error& e) {
    cout << "caught a runtime_error in main\n";
    cout << e.what() << endl;
  } catch (int& i) {
    cout << "caught an int in main\n";
    cout << i << endl;
  } catch (string& s) {
    cout << "caught a string in main\n";
    cout << s << endl;
  }

  return 0;
}
