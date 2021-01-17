#include <iostream>
#include <string>
using namespace std;

int main() {
    cout << "Enter a number: ";
    int num;
    cin >> num;

    if (num % 2 == 0) {
        // In this case (if we get here),
        // num must've been even
        cout << "Even!\n"; // if the test is true
    } else {
        // otherwise, if we got here, we know that the boolean exp
        // returned false--therefore num was not even
        cout << "Odd!\n";
    }

    return 0;
}