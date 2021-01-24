#include <iostream>
#include <string>
using namespace std;

int main() {
    // ask if it's cloudy/there's a chance of rain
    cout << "Is there a chance of rain? ";
    string answer1;
    cin >> answer1;

    cout << "Is it currently raining? ";
    string answer2;
    cin >> answer2;

    // answer1/2 hold "yes"/"no"

    // if we got yes for at least one answer, we should bring an umbrella
    // one *or* the other
    if (answer1 == "yes" || answer2 == "yes") {
        cout << "Bring an umbrella!\n";
    } else {
        // if we got at least one "no", we're here
        cout << "No need for an umbrella today.\n";
    }

    return 0;
}