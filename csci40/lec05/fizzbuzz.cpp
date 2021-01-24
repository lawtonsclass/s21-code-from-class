#include <iostream>
#include <string>
using namespace std;

int main() {
    // get a number from the user

    int n;
    cout << "Enter n: ";
    cin >> n;

    if (n % 3 == 0 && n % 5 == 0) {
        // n is divisible by both 3 and 5
        cout << "fizzbuzz\n";
    } else if (n % 3 == 0) {
        cout << "fizz" << endl;
    } else if (n % 5 == 0) {
        cout << "buzz\n";
    } else {
        // none of the above were true
        cout << n << endl;
    }

    return 0;
}