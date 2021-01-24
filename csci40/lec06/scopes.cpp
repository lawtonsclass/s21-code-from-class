#include <iostream>
using namespace std;

int main() {
    int i = 1; // i lives between main's braces
    if (i == 1) {
        int j = 2; // j lives between the if statement's braces

        cout << i << endl; // i is *still in scope*
        cout << j << endl; // j is in scope here

        int i = 42; // I have now shadowed the outer i
        cout << i << endl;
    } // <-- j dies here

    cout << i << endl; // i is *still in scope*
    // cout << j << endl; // this doesn't work because j is not in scope

    return 0; 
} // <-- i dies here