#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>
#include <cstdlib> // for rand, srand, exit
#include <ctime> // for time
using namespace std;

int main() {
    srand(time(0)); // now we get different random #s each time

    // think of a random number between 1 and 100
    int n = rand() % 100 + 1;

    
    int guess = -1; // make sure to set this

    cout << "I'm thinking of a number between 1 and 100.\n";

    while (guess != n) {
        // ask the user for a guess
        cout << "What is your guess? ";
        cin >> guess;

        // check if the guess was too high, too low, or just right
        if (guess > n) {
            cout << "Too high!" << endl;
        } else if (guess < n) {
            cout << "Too low!" << endl;
        } else { // must be (guess == n)
            cout << "You got it!" << endl;
        }
    }

    // if we get here, guess == n

    return 0;
}