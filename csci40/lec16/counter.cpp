#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Counter {
 public:
  // the constructor's name is just Counter
  Counter(); // a default constructor to set the count to 0 initially
  Counter(int initialCount); // another constructor that sets count to initialCount

  // init and reset are secretly *setters*, but they control how you
  // set things
  void reset();

  // these are also technically setters too
  void inc();
  void operator++(); // same as inc, but cooler
  void dec();


  // this is a normal getter
  int getCount() const;

 private:
  int count;
};

Counter::Counter() {
  count = 0;
}

Counter::Counter(int initialCount) {
  count = initialCount;
}

void Counter::reset() {
  count = 0;
}

void Counter::inc() {
  count++;
}

void Counter::operator++() {
  count++;
}

// compare two Counters based on their count
bool operator<(const Counter& x, const Counter& y) {
  return x.getCount() < y.getCount();
}

void Counter::dec() {
  count--;
}

int Counter::getCount() const {
  return count;
}

int main() {
  Counter c; // the default constructor gets called *automatically* for us right here
  // c.init(); // this *must* be called right after c gets made--otherwise it doesn't work right
  // init is no longer necessary after we add a constructor

  c.inc();
  ++c;
  ++c;
  c.dec();
  cout << c.getCount() << endl;  // 2
  c.reset();
  c.inc();
  cout << c.getCount() << endl;  // 1

  Counter d(42); // this calls the 1-parameter constructor
  d.inc();
  cout << d.getCount() << endl;  // 43

  cout << (c < d) << endl;

  vector<Counter> v = {d, c};
  sort(v.begin(), v.end());
  // now v is sorted
  for (Counter cntr : v) {
    cout << cntr.getCount() << ' ';
  }
  cout << endl;


  return 0;
}
