#include <iostream>
using namespace std;

struct Node {
  int data;
  Node* next;
};

int main() {
  Node* five = new Node; 
  Node* six = new Node; 
  Node* seven = new Node; 

  five->data = 5;
  five->next = six;
  six->data = 6;
  six->next = seven;
  seven->data = 7;
  seven->next = nullptr;

  Node* l = five;

  // let's add 4 to the beginning of the list
  Node* four = new Node;
  four->data = 4;
  four->next = five;
  l = four; // four is the new start of the list

  cout << l->data << endl; // the first Node's data
  cout << l->next->data << endl; // the second Node's data
  cout << l->next->next->data << endl; // the third Node's data
  cout << l->next->next->next->data << endl; // the fourth Node's data

  return 0;
}
