#include <iostream>
using namespace std;

int main() {
  for (int numHorses = 0; numHorses <= 100; numHorses++) {
    for (int numPigs = 0; numPigs <= 100; numPigs++) {
      for (int numRabbits = 0; numRabbits <= 100; numRabbits++) {
        // this line will get executed 101*101*101 times!
        // numHorses will range between 0 and 100, and the same for pigs &
        // rabbits

        // check and see if my current choice of horses, pigs, and rabbits is
        // 100 animals and $100 if it is, we found a solution!
        int numAnimals = numHorses + numPigs + numRabbits;
        double price = numHorses * 10 + numPigs * 3 + numRabbits * 0.50;
        if (numAnimals == 100 && price == 100.00) {
          // found a solution!
          cout << numHorses << " horses, " << numPigs << " pigs, " << numRabbits
               << " rabbits\n";
        }
      }
    }
  }

  return 0;
}
