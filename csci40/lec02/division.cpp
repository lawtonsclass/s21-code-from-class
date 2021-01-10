#include <iostream> // fixed
#include <iomanip> // for setprecision
using namespace std;

int main() {
    int x = 7;
    // the following is *integer* division--the decimal get dropped
    cout << 7 / 2 << endl;

    double d = x / 2; // still int division, because both x and 2 are ints
    cout << d << endl;

    d = x / 2.0; // 2.0 is a double
    cout << d << endl;

    int y = 2;
    d = x / y; // still 3
    cout << d << endl;

    d = static_cast<double>(x) / y; // turns x into a double for double division
    cout << d << endl;

    double f = 3.14;
    // fixed and setprecision(...) don't print anything--they *control* how doubles are printed
    cout << fixed << setprecision(7) << f << endl;
    // fixed forces cout to not use scientific notation
    // setprecision(7) forces 7 digits of rounding
    cout << setprecision(1) << f << endl; // this rounds f to 1 decimal digit

    return 0;
}