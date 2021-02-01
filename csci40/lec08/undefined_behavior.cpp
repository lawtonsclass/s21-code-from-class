#include <iostream>
using namespace std;

int main() {
  int arr[] = {1, 2, 3, 4, 5};

  for (int i = 0; i <= 600; i++) {  // why Lawton whyyyyyy
    cout << arr[i] << endl;
  }

  // if you change the above to i <= 6000 on Lawton's computer, you
  // end up getting a runtime error called a segmentation fault. It
  // means we tried to access memory that didn't belong to us.

  return 0;
}
