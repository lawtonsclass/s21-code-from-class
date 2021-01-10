#include <iostream>
#include <string> // for the string type
using namespace std;

int main() {
    cout << 'A' << endl;
    cout << static_cast<int>('A') << endl;

    string s = "Hi mom";
    cout << s.at(1) << endl; // the second character!

    cout << s.at(0) << endl; // the first character!

    // cout << s.at(6) << endl; // runtime error!


    s.at(0) = 'h';
    cout << s << endl;

    string s2;
    cin >> s2; // get a string from the user, and put it in s2
    // we have no control over what the user types!
    // How can we capitalize it?!
    s2.at(0) = s2.at(0) + ('A' - 'a'); // offset by the distance between the capitals & lowercase chars
    cout << s2 << endl;

    return 0;
}