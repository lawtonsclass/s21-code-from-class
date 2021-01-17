#include <iostream>
using namespace std;

int main() {
    cout << "Enter a number: ";
    int x;
    cin >> x;

    // % is the modulo operator; it gives you the remainder
    cout << x << " % 2 = " << x % 2 << endl;
    // x % 2 is the remainder after dividing x by 2

    return 0;
}