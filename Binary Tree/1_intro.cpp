#include <iostream>
using namespace std;

class Node {
  public:
    int data;
    Node *next;

  Node(int value) {
    data = value;
    next = NULL;
  }
};

void insertAtHead(Node* &head, int val) {
  Node *newNode = new Node(val);
  newNode -> next = head;
  head = newNode;
}

void insertAtPosition(Node* &head, int pos, int val) {
  Node* temp = head;
  int current = 0;
  while(current != pos - 1) {
    temp = temp -> next;
    current++;
  }
}

void insertAtEnd(Node* &head, int val) {
  Node *temp = head;
  while(temp -> next != NULL) {
    temp = temp -> next;
  }
  Node *tail = new Node(val);
  temp -> next = tail;
  tail->next = head;
}

void display(Node* &head) {
  Node *temp = head;
  while(temp != NULL) {
    cout << temp -> data << "->";
    temp = temp -> next;
  }
  cout << "NULL" << endl;
}

int main() {

  Node *head = NULL;
  insertAtHead(head, 10);
  insertAtHead(head, 20);
  display(head);

  insertAtEnd(head, 23);
  insertAtEnd(head, 90);
  display(head);

  return 0;
}