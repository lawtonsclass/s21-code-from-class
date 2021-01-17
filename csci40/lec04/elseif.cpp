#include <iostream>
#include <string>
using namespace std;

int main() {
    cout << "Enter a day: ";
    string day;
    cin >> day;

    // let's convert days to numbers!

    if (day == "Mon") {
        cout << 1 << endl;
    } else {
        // wasn't Mon, let's try the others...
        if (day == "Tue") {
            cout << 2 << endl;
        } else {
            // wasn't Tue, let's try the rest...
            if (day == "Wed") {
                cout << 3 << endl;
            } else {
                if (day == "Thu") {
                    cout << 4 << endl;
                } else {
                    if (day == "Fri") {
                        cout << 5 << endl;
                    } else {
                        cout << "Weekend!\n";
                    }
                }
            }
        }
    }

    // the nicer way:

    if (day == "Mon") {
        cout << 1 << endl;
    } else if (day == "Tue") { // read "else if" as "otherwise"
        cout << 2 << endl;
    } else if (day == "Wed") {
        cout << 3 << endl;
    } else if (day == "Thu") {
        cout << 4 << endl;
    } else if (day == "Fri") {
        cout << 5 << endl;
    } else {
        cout << "Weekend!\n";
    }

    // else ifs try your options in order, without horrible nesting

    return 0;
}