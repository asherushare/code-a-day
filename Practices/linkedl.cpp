#include <iostream>
using namespace std;

class Node {
  public:
  int data;
  Node* next;

  Node(int value) {
    data = value;
    next = NULL;
  }
};

void insertAtHead(Node* &head, int val) {
  Node* newNode = new Node(val);
  newNode -> next = head;
  head = newNode;
}

void insertAtTail(Node* &head, int val) {
  Node* tail = new Node(val);
  Node* temp = head;

  if(head == NULL) {
    head = tail;
    return;
  }
  while(temp -> next != NULL) {
    temp = temp -> next;
  }
  tail -> next = NULL;
  temp -> next = tail;
}

void insertAtposition(Node* &head, int pos, int val) {
  Node* temp = head;
  int current = 0;
  while(current != pos - 1) {
    temp = temp -> next;
    current++;
  }

  Node* node = new Node(val);
  node -> next = temp -> next -> next;
  temp -> next = node;
}

void display(Node* &head) {
  Node* temp = head;
  while(temp != NULL) {
    cout << temp -> data << "->";
    temp = temp -> next;
  }
  cout << "NULL" << endl;
}

void deleteAtHead(Node* &head) {
  Node* temp = head;
  head = temp -> next;
  free(temp);
}

void deleteAtEnd(Node* &head) {
  Node* temp = head;
  while(temp -> next -> next != NULL) {
    temp = temp -> next;
  }
  Node* temp1 = temp -> next;
  temp -> next = NULL;
  free(temp1);
}

void deleteAtPosition(Node* &head, int pos) {
  if(pos == 0) {
    deleteAtHead(head);
  }
  int current = 0;
  Node* temp = head;
  while(current != pos - 1) {
    temp = temp -> next;
    current++;
  }
  Node* temp1 = temp -> next;
  temp -> next = temp1 -> next;
  free(temp1);
}

int main() {

  Node* head = NULL;
  insertAtHead(head, 10);
  insertAtHead(head, 20);
  insertAtHead(head, 30);
  insertAtHead(head, 50);
  display(head);
  insertAtTail(head, 90);
  display(head);
  insertAtposition(head, 2, 2);
  display(head);

  // deleteAtHead(head);
  // display(head);

  // deleteAtEnd(head);
  // display(head);
  deleteAtPosition(head, 2);
  display(head);
  
  return 0;
}