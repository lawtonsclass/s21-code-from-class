#include <cstdlib>
#include <cstring>
#include <iostream>
using namespace std;

int main() {
  char str[] = "hello";
  // equivalent to:
  char str2[] = {'h', 'e', 'l', 'l', 'o', '\0'};

  cout << str << endl;
  cout << str2 << endl;

  char str3[] = "42";
  cout << str3 + 7 << endl;  // doesn't work; undefined behavior
  // let's convert str3 to an int with atoi
  int x = atoi(str3);
  cout << x + 7 << endl;

  strcat(str, str3);
  // now str is "hello42"
  cout << str << endl;

  cout << strlen(str) << endl;

  char str4[] = "cat";
  char str5[] = "dog";
  cout << strcmp(str4, str5) << endl;
  cout << strcmp(str5, str4) << endl;
  cout << strcmp(str4, str4) << endl;

  return 0;
}
