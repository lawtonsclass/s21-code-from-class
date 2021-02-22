// Remember to give every implementation file when compiling:
// g++ -std=c++17 main.cpp count_words.cpp -o main

#include <cctype>
#include <iostream>
#include <string>
using namespace std;

#include "count_words.h"

void assertTrue(bool b, string description) {
  if (b) {
    cout << "PASSED: " << description << endl;
  } else {
    cout << "FAILED: " << description << endl;
  }
}

void test1();
void test2();
void test3();

int main() {
  string line;

  // getline(cin, line);
  // cout << "The number of words is: " << count_words(line) << endl;

  test1();
  test2();
  test3();

  return 0;
}

void test1() { assertTrue(count_words("") == 0, "Empty string"); }

void test2() { assertTrue(count_words("Hi\t\t mom   ") == 2, "Two words"); }

void test3() {
  assertTrue(count_words("The quick brown fox jumps over the lazy dog.") == 9,
             "The quick brown fox...");
}

