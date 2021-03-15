#include <iostream>
#include <fstream>
using namespace std;

int main() {
  ifstream image("cat.ppm");

  // eat  up the first line--it's always P3
  string line;
  getline(image, line);

  int w, h;
  // get the width and height from image
  image >> w >> h;

  // eat  up the third line--it's always 255
  getline(image, line);

  ofstream out("cat-gray.ppm");
  out << "P3\n";

  // use same w/h in out
  out << w << " " << h << endl;

  out << "255\n";

  // keep getting lines from image, converting them to grayscale, and
  // outputting them to out
  int r, g, b;
  while (image >> r >> g >> b) {
    // convert (r, g, b) to grayscale
    int gray = (r + g + b) / 3;
    // output (gray, gray, gray) to out
    out << gray << " " << gray << " " << gray << endl;
  }

  image.close();
  out.close();

  return 0;
}
