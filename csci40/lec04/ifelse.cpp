#include <iostream>
#include <string>
using namespace std;

int main() {
    cout << "Enter a number: ";
    int num;
    cin >> num;

    if (num) {
        cout << num << " is true!\n";
    } else {
        cout << num << " is false!\n";
    }

    int x = 41;
    if (x = 42) {
        cout << "It was 42" << endl;
    } else {
        cout << "It was not 42" << endl;
    }

    return 0;
}