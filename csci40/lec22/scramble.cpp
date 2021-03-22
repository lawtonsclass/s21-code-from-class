#include <iostream>
#include <string>
#include <vector>
using namespace std;

vector<string> scramble(const string& s) {
  if (s == "") {
    // give back a vector containing the empty string
    vector<string> res = {""};
    return res;
  } else {
    vector<string> res;

    // let every character have a chance being the starting char
    for (int i = 0; i < s.size(); i++) {
      char startingChar = s.at(i); 

      // get the remaining characters to scramble
      // (make a string containing all characters other than the ith
      // char)
      string smallerString = s;
      smallerString.erase(i, 1);
      
      // recursively scramble the remaining characters
      vector<string> perms = scramble(smallerString);

      // put startingChar at the front of every string in perms
      for (string& perm : perms) {
        perm = startingChar + perm;
      }

      // add perms to the final answer
      for (string& perm : perms) {
        res.push_back(perm);
      }
    }

    // now we've tried all the characters, return res
    return res;
  }
}

int main() {
  vector<string> permutations = scramble("abcd");
  for (string s : permutations) {
    cout << s << endl;
  }

  return 0;
}
