#include <iostream> // for std::cout
#include <string> // for the string type
using namespace std; // so that I can skip the std::s

int main() {
    int x = 42;
    cout << x << endl;
    x = 43;
    cout << x << endl;

    double d = 3.14;
    cout << d << endl;

    char c = 'L';
    cout << c << endl;

    string s = "hi mom!";
    cout << s << endl;

    cout << "Type a number: ";
    cin >> x; // this sets x to whatever the user types (after they press enter)
    // now, x holds the new value
    cout << x * 2 << endl;

    return 0;
}