#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    cout << "Enter the percentage: ";
    double grade;
    cin >> grade;

    if (grade >= 90.0) {
        cout << "A" << endl;
    } else if (grade >= 80.0) {
        cout << "B" << endl;
    } else if (grade >= 70.0) {
        cout << "C" << endl;
    } else if (grade >= 60.0) {
        cout << "D" << endl;
    } else {
        cout << "F" << endl;
    }

    return 0;
}