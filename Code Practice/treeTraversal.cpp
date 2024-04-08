#include <iostream>
using namespace std;

class node {
  public:
  int data;
  node* left;
  node* right;

  node(int data) {
    this -> data = data;
    this -> left = NULL;
    this -> right = NULL;
  }
};

node* buildTree(node* root) {
  cout << "Enter the data: " << endl;
  int data;
  cin >> data;
  root = new node(data);
  if(data == -1) {
    return NULL;
  }
  cout << "Enter element to insert left of " << data << " ";
  root -> left = buildTree(root -> left);
  cout << "Enter element to insert right of " << data << " ";
  root -> right = buildTree(root -> right);
  return root;
}

void preOrder(node* root) {
  if(root == NULL) {
    return;
  }
  cout << root -> data << " ";
  preOrder(root -> left);
  preOrder(root -> right);
}

void inOrder(node* root) {
  if(root == NULL) {
    return;
  }
  inOrder(root -> left);
  cout << root -> data << " ";
  inOrder(root -> right);
}

void postOrder(node* root) {
  if(root == NULL) {
    return;
  }
  postOrder(root -> left);
  postOrder(root -> right);
  cout << root -> data << " ";
}

int main() {
  node* root = NULL;
  root = buildTree(root);

  cout << "inorder traversal is: ";
  inOrder(root);
  cout << endl;
  cout << "preorder traversal is: ";
  preOrder(root);
  cout << endl;
  cout << "postorder traversal is: ";
  postOrder(root);
  return 0;
}