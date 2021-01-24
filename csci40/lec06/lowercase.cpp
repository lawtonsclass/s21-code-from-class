#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    string s;
    cout << "Enter a word: ";
    cin >> s;

    // iterate through each index of s, setting the character to lowercase
    int i = 0; // start i at index 0
    while (i < s.size()) { // don't let i go past the string
        // go to s.at(i), and replace it with the lowercase char
        s.at(i) = tolower(s.at(i));
        i++; // advance i
    }

    // alternatively:
    // for (int i = 0; i < s.size(); i++) { // don't let i go past the string
    //     // go to s.at(i), and replace it with the lowercase char
    //     s.at(i) = tolower(s.at(i));
    // }

    cout << s << endl;

    return 0;
}