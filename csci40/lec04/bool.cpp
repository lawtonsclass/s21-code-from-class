#include <iostream>
#include <string>
using namespace std;

int main() {
    bool _42islessthan43 = 42 < 43;
    if (_42islessthan43) {
        cout << "42 is less than 43\n";
    }

    int num = 42;

    if (num % 2 == 0) {
        // definitely even
        if (num > 0) {
            // even **and positive**
            cout << "Even and positive!\n";
        }
    }

    if (num % 2 == 0 && num > 0) {
        // even **and positive**
        cout << "Even and positive!\n";
    }

    bool is_even = num % 2 == 0;
    bool is_pos = num > 0;
    if (is_even && is_pos) {
        // even **and positive**
        cout << "Even and positive!\n";
    }

    return 0;
}