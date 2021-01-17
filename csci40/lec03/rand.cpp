#include <iostream>
#include <cstdlib> // for rand & srand
#include <ctime> // for time
using namespace std;

int main() {
    // seed the random # gen with the current # of seconds since Jan 1st 1970
    srand(time(0));

    // output three random characters
    char c1 = rand() % 128; // [0, 127]
    char c2 = rand() % 128; // [0, 127]
    char c3 = rand() % 128; // [0, 127]
    cout << c1 << c2 << c3 << endl;

    cout << "Enter a number: ";
    int num;
    cin >> num; // num is the user's choice of a number
    int x = (rand() % num) + 1; // x is a random # between 1 and num
    cout << "A random # between 1 and " << num << " is " << x << ".\n";

    return 0;
}