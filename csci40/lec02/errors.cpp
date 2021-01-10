// g++ -std=c++17 errors.cpp -o errors

#include <iostream> // cout, cin, endl
using namespace std; // so we don't have to write std::

int main() {
    // imt x = 42;
    // ^ the above causes a compile-time error

    int x = 42;
    cout << "Enter a number: ";
    cin >> x; // entering 0 here causes a runtime error

    cout << 42 / x << endl;

    return 0;
}