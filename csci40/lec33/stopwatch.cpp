#include <iostream>
using namespace std;

class Stopwatch {
 public:
  void start();
  int getTimeElapsed();

 private:
  time_t start_time;
};

void Stopwatch::start() {
  // save current time
  start_time = time(0);
}

int Stopwatch::getTimeElapsed() {
  time_t current_time = time(0);
  return current_time - start_time;
}

int main() {
  Stopwatch s;
  s.start();

  while (true) {
    // move to the start of the line
    cout << '\r' << s.getTimeElapsed();
  }

  return 0;
}
