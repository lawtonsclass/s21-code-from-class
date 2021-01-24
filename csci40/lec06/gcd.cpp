#include <iostream>
using namespace std;

int main() {
    cout << "Enter two space-separated numbers: ";
    int a, b; // declare a and b at the same time
    cin >> a >> b; // get two inputs from the user

    while (b != 0) {
        int original_b = b;
        b = a % b;
        a = original_b;
    }

    // if we ever get here, that means that !(b != 0)
    // i.e., b == 0

    cout << "The gcd is " << a << endl;

    return 0; 
}