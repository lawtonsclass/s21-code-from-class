#include <iostream>
using namespace std;

enum IceCreamFlavor {
  Vanilla,
  Chocolate,
  Strawberry
};

int main() {
  IceCreamFlavor lawtonsFavorite = Vanilla; 
  IceCreamFlavor lonzosFavorite = Chocolate; 

  if (lawtonsFavorite == lonzosFavorite) {
    cout << "the same" << endl;
  }

  // this won't work, becuase it wasn't part of the enumeration
  IceCreamFlavor uhoh = Sherbet;

  return 0;
}
