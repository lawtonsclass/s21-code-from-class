#include <iostream>
using namespace std;

struct Node {
  int data;
  Node *left;
  Node *right;
};

// a Tree class holds the root
class Tree {
  public:
    Node* root;
};

int main() {
  Node* _42 = new Node; // usually Nodes in trees are made on the heap
  _42->data = 42;
  Node* _13 = new Node; 
  _13->data = 13;
  _13->left = nullptr;
  _13->right = nullptr;
  Node* _55 = new Node; 
  _55->data = 55;
  _55->left = nullptr;
  _55->right = nullptr;
  _42->left = _13;
  _42->right = _55;

  Tree t;
  t.root = _42;

  // now we can traverse the tree using t.root
  cout << t.root->right->data << endl; // gets the 55 node's data

  return 0;
}
