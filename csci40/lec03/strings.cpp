#include <iostream>
#include <string>
using namespace std;

int main() {
    cout << "Enter a word: ";
    string s;
    cin >> s;

    // "s.size()" is a "method call" rather than a "function call"
    // The . gives it away, and it *acts on* s
    cout << s.size() << endl;

    string s2 = s + "!!!"; // adding strings appends characters!
    cout << s2 << endl;

    cout << "Index of i: " << s.find('i') << endl;

    string s3 = "Lawton";
    cout << s3.substr(3, 3) << endl;

    return 0;
}