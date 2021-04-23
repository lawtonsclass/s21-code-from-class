#include <iostream>
#include <map>
#include <string>
using namespace std;

int main() {
  map<string, int> phonebook;
  phonebook.emplace("Lawton", 5551234);
  phonebook.emplace("Lonzo", 5551235);

  if (phonebook.count("Lawton") > 0) { // make sure I'm in the phonebook
    cout << phonebook.at("Lawton") << endl; // before looking up my number
  }

  for (map<string, int>::iterator it = phonebook.begin(); it != phonebook.end(); it++) {
    // it contains the key and the value (it->first & it->second)
    cout << it->first << ": " << it->second << endl;
  }

  return 0;
}
