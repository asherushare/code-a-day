#include <iostream>
using namespace std;

class node
{
public:
  int data;
  node *left;
  node *right;

  node(int val)
  {
    data = val;
    left = NULL;
    right = NULL;
  }
};

node *buildTree(node *root)
{
  int data;
  cout << "Enter data: " << endl;
  cin >> data;
  root = new node(data);

  if (data == -1)
  {
    return NULL;
  }
  cout << "Enter data in left of " << data << " : " << endl;
  root->left = buildTree(root->left);
  cout << "Enter data in right of " << data << " : " << endl;
  root->right = buildTree(root->right);
  return root;
}

void inorder(node *root)
{
  if (root == NULL)
  {
    return;
  }
  inorder(root->left);
  cout << root->data << " ";
  inorder(root->right);
}

void preorder(node *root)
{
  if (root == NULL)
  {
    return;
  }
  cout << root->data << " ";
  preorder(root->left);
  preorder(root->right);
}

void postorder(node *root)
{
  if (root == NULL)
  {
    return;
  }
  postorder(root->left);
  postorder(root->right);
  cout << root->data << " ";
}

int main()
{

  node *root = NULL;

  root = buildTree(root);

  cout << "inorder trav: ";
  inorder(root);
  cout << endl;
  cout << "preorder trav: ";
  preorder(root);
  cout << endl;
  cout << "postorder trav: ";
  postorder(root);
  cout << endl;
  return 0;
}