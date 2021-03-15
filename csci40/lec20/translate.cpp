#include <iostream>
#include <fstream>
#include <string>
#include <cctype>
using namespace std;

string translate(const string& word) {
  if (word == "snow") {
    return "nieve";
  } else if (word == "white") {
    return "하얀";
  } else if (word == "mountain") {
    return "sliabh";
  } else {
    return word;
  }
}

int main() {
  ifstream ifs("LetItGoLyrics.txt");

  string s;
  while (ifs >> s) {
    // translate this word
    string translation = translate(s);
    // output the translated version
    cout << translation;

    // read all the whitespace characters and replicate them
    while (isspace(ifs.peek())) {
      // move cursor and output it
      char nextChar = ifs.get();
      cout << nextChar;
    }
  }

  ifs.close();
  return 0;
}
