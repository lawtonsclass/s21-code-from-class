#include <iostream>
using namespace std;

int main() {
    // cout << 1 << endl;
    // cout << 2 << endl;
    // ...
    
    int i = 1; // start i at 1
    while (i <= 10) {
        cout << i << endl; // print i
        i++; // increment i by 1
    }
    
    // i is 11 right now! That's what stopped the loop!
    cout << endl;

    i = 1; // start i at 1
    int sum = 0; // start sum at 0
    while (i <= 10) { // run the body until i > 10
        sum = sum + i; // add i into sum
        i++; // increment i by 1
    }

    cout << sum << endl;

    return 0;
}