#include <iostream>
#include <string>
#include <cctype> // for toupper, isdigit
using namespace std;

int main() {
    string s;
    cout << "Enter word: ";
    cin >> s;

    // convert to a proper noun
    s.at(0) = toupper(s.at(0));

    cout << s << endl;

    // is the last character of the string s a digit?
    if ( isdigit(s.at(s.size() - 1)) ) {
        cout << s << " ends with a digit.\n";
    } else {
        cout << s << " does not end with a digit.\n";
    }

    return 0;
}