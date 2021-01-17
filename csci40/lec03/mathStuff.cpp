#include <iostream>
#include <cstdlib> // for abs
#include <cmath> // for exp, sqrt, round
using namespace std;

int main() {
    int x;
    cout << "Enter a number: ";
    cin >> x;

    cout << abs(x) << endl;
    cout << exp(x) << endl;

    double y;
    cout << "Enter another number: ";
    cin >> y;
    cout << sqrt(y) << endl;
    cout << round(y) << endl;

    return 0;
}