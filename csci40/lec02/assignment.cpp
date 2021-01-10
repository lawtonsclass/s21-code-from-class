#include <iostream>
using namespace std;

int main() {
    int x;
    x = 42; // this is an assignment statement
    cout << x << endl;
    x = 43; // now x is 43
    cout << x << endl;

    x = x + 1; // ?!?
    cout << x << endl;

    x += 1; // shorthand for x = x + 1;
    cout << x << endl;

    x++; // also shorthand for x = x + 1;
    cout << x << endl;

    return 0;
}