#include <iostream>
#include <vector>
using namespace std;

int main() {
  vector<int> v;  // start v empty

  while (true) {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (num == -1) {
      break;  // stop when the user types -1
    }

    // add num to the end of v
    v.push_back(num);
  }

  // for (int i = 0; i < v.size(); i++) {
  //   cout << v.at(i) << " ";
  // }
  // cout << endl;

  // alternatively to the above, we could use a range-based for loop!
  for (int elem : v) {
    cout << elem << " ";
  }
  cout << endl;

  return 0;
}
