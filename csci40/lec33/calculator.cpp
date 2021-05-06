#include <iostream>
#include <string>
using namespace std;

void assertTrue(bool b, string description) {
  if (b) {
    cout << "PASSED: " << description << endl;
  } else {
    cout << "FAILED: " << description << endl;
  }
}

class Calculator {
 public:
  Calculator();

  void pressDigit(int digit);

  void pressPlus();
  void pressMinus();
  void pressTimes();
  void pressDivide();

  int pressEnter();

 private:
  string state;
  int operand1;
  int operand2;
  char operation;
};

Calculator::Calculator() {
  // set the initial state
  state = "first_number";
  operand1 = operand2 = 0;
}

void Calculator::pressDigit(int digit) {
  // figure out which operand to add to
  if (state == "first_number") {
    // add to operand1
    operand1 = operand1 * 10 + digit;
  } else {
    operand2 = operand2 * 10 + digit;
  }
}

void Calculator::pressPlus() {
  if (state == "first_number") {
    operation = '+';
    state = "second_number";
  }
}
void Calculator::pressMinus() {
  if (state == "first_number") {
    operation = '-';
    state = "second_number";
  }
}
void Calculator::pressTimes() {
  if (state == "first_number") {
    operation = '*';
    state = "second_number";
  }
}
void Calculator::pressDivide() {
  if (state == "first_number") {
    operation = '/';
    state = "second_number";
  }
}

int Calculator::pressEnter() {
  if (state != "second_number") return 0;

  // calculate answer
  int result;
  if (operation == '+') return operand1 + operand2;
  else if (operation == '-') return operand1 - operand2;
  else if (operation == '*') return operand1 * operand2;
  else if (operation == '/') return operand1 / operand2;

  // get back into the start state
  state = "first_number";
  operand1 = operand2 = 0;

  // give back the answer
  return result;
}

void test1() {
  Calculator c;
  c.pressDigit(1);
  c.pressDigit(2);
  c.pressPlus();
  c.pressDigit(3);
  c.pressDigit(4);

  // we expect to get back 46
  assertTrue(c.pressEnter() == 46, "12 + 34");
}

int main() {
  test1();

  return 0;
}
