#include "count_words.h"
using namespace std;

// counts the number of words in the string s using a state machine
int count_words(const string& s) {
  string state = "OUTSIDE";  // start state is outside a word
  int count = 0;             // the number of words

  // read every character of the string s and follow the transitions
  for (int i = 0; i < s.size(); i++) {
    // read the current character and follow the transitions
    char currentChar = s.at(i);
    if (state == "OUTSIDE") {
      // stay if space, leave if non-space
      if (isspace(currentChar)) {
        state = "OUTSIDE";
      } else {  // non-space character
        // follow the transition
        state = "INSIDE";
        // increase count
        count++;
      }
    } else {  // state == "INSIDE"
      // stay if non-space, leave if space
      if (isspace(currentChar)) {
        state = "OUTSIDE";
      } else {  // non-space
        state = "INSIDE";
      }
    }
  }

  return count;
}
