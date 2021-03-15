#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
  srand(time(0));

  ifstream ifs("SwedishWords.txt");

  // read all words into a vector
  vector<string> words;

  string s;
  while (ifs >> s) {
    words.push_back(s);   
  }

  // choose two random words now
  string wordOne = words.at(rand() % words.size());
  string wordTwo = words.at(rand() % words.size());

  cout << "The hottest new Ikea product of the season is: " << wordOne << wordTwo << endl;

  ifs.close();
  return 0;
}
