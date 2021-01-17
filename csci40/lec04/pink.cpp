#include <iostream>
#include <string>
using namespace std;

int main() {
    cout << "What day is today? ";
    string day;
    cin >> day;

    if (day == "Wednesday") {
        cout << "wear pink!\n"; // if the test is true
    } else {
        cout << "don't wear pink!\n";
    }

    // after we're finished doing one thing or another, the rest of the code
    // below the if/else always gets executed

    cout << "done\n";
    

    return 0;
}