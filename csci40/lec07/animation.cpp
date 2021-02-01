#include <iostream>
using namespace std;

#include <chrono>
#include <thread>

// the pause function stops the program for "seconds" many seconds
// don't worry about the implementation
void pause(double seconds) {
  std::this_thread::sleep_for(std::chrono::duration<double>(seconds));
}

int main() {
  // cout << '*' << endl;
  // pause(1);
  // cout << '*' << endl;
  // pause(1);
  // cout << '*' << endl;
  // pause(1);

  for (int i = 1; i <= 10; i++) {
    cout << '*' << endl;
    pause(0.5);
  }

  return 0;
}
