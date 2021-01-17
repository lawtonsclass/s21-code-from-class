#include <iostream>
using namespace std;

int main() {
    const double pi = 3.1415926535;
    const int x = 42;

    x = pi * 5; // it's okay to use a const, but not okay to reset it

    return 0;
}