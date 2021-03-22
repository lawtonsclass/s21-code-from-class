#include <iostream>
#include <string>
#include <cctype>
using namespace std;

void printFrom1To(int n) {
  if (n == 0) {
    // do nothing
    return;
  } else {
    // recursive case:
    // print from 1 to n-1
    printFrom1To(n-1); // YOU GET TO ASSUME THIS DOES THE RIGHT THING!!!
    // print n
    cout << n << endl;
  }
}

void printReverse(int n) {
  if (n == 0) {
    // do nothing
    return;
  } else {
    // recursive case:
    cout << n << endl;
    printReverse(n-1); // YOU GET TO ASSUME THIS DOES THE RIGHT THING!!!
  }
}

void printChars(string s) {
  if (s == "") {
    return;
  } else {
    cout << s.at(0) << endl;
    // recursively print the smaller string
    s.erase(0, 1); // cut off the first char of s
    printChars(s);
  }
}

void printCharsReverse(string s) {
  if (s == "") {
    return;
  } else {
    char firstChar = s.at(0);
    // recursively print the smaller string in reverse
    s.erase(0, 1); // cut off the first char of s
    printCharsReverse(s);

    // solve the original problem by also printing the first char
    cout << firstChar << endl;
  }
}

// capitalize the C-string s recursively
void capitalize(char* s) {
  if (s[0] == '\0') {
    // s is empty; do nothing
    return;
  } else {
    // recursive case
    // capitalize the first char
    s[0] = toupper(s[0]);
    // recursively capitalize the smaller string
    // s+1 is the addr of the smaller string
    capitalize(s + 1);
  }
}

int main() {
  printFrom1To(5);
  cout << endl;
  printReverse(5);
  cout << endl;
  printChars("blah");
  cout << endl;
  printCharsReverse("blah");
  cout << endl;

  char s1[] = "blah";
  capitalize(s1);
  cout << s1 << endl;

  return 0;
}
