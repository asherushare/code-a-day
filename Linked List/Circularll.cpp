#include <iostream>
using namespace std;

class Node {
  public:
  int data;
  Node* next;

  public:
  Node(int val) {
    data = val;
    next = NULL;
  }
};

void insertAtHead(Node* &head, int val) {
  Node* newNode = new Node(val);
  newNode -> next = head;
  head = newNode;
}

void insertAtTail(Node* &head, int val) {
  Node* temp = head;
  while(temp -> next != NULL) {
    temp = temp -> next;
  }
  Node* tail = new Node(val);
  tail -> next = head;
  temp -> next = tail;
}

void display(Node* &head) {
  Node* temp = head;
  do{
    cout << temp -> data << "->";
    temp = temp -> next;
  }
  while(temp != head);
}

int main() {

  Node* head = NULL;

  insertAtHead(head, 23);
  insertAtHead(head, 45);
  insertAtHead(head, 454);
  insertAtHead(head, 3);
  insertAtHead(head, 4);
  insertAtHead(head, 40);

  display(head);
  cout << "NULL" << endl;

  return 0;
}