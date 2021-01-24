#include <iostream>
#include <string>
using namespace std;

int main() {
    // ask if it's cloudy/there's a chance of rain
    cout << "Is it cloudy today? ";
    string answer1;
    cin >> answer1;

    cout << "Is there a chance of rain? ";
    string answer2;
    cin >> answer2;

    // answer1/2 hold "yes"/"no"

    // only if we got yes for both answers, we should bring an umbrella
    if (answer1 == "yes" && answer2 == "yes") {
        cout << "Bring an umbrella!\n";
    } else {
        // if we got at least one "no", we're here
        cout << "No need for an umbrella today.\n";
    }

    return 0;
}