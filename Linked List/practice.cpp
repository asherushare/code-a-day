#include <iostream>
using namespace std;

class Node {
  public:
  int val;
  Node* next;

  Node(int data) {
    val = data;
    next = NULL;
  }
};

void insertAtHead(Node* &head, int val) {
  Node* newNode = new Node(val);
  newNode -> next = head;
  head = newNode;
}

void insertAtEnd(Node* &head, int val) {
  Node* temp = head;
  while(temp -> next != NULL) {
    temp = temp -> next;
  }
  Node* newNode = new Node(val);
  temp -> next = newNode;
}

void insertAtPosition(Node* &head, int pos, int val) {
  if(pos == 0) {
    insertAtHead(head, val);
    return;
  }

  Node* temp = head;
  int current = 0;
  while(current != pos - 1) {
    temp = temp -> next;
    current++;
  }
  Node* newNode = new Node(val);
  newNode -> next = temp -> next;
  temp -> next = newNode;
}

void display(Node* &head) {
  Node* temp = head;
  while(temp != NULL) {
    cout << temp -> val << "->";
    temp = temp -> next;
  }
  cout << "NULL";
}

void deleteAthead(Node* &head) {
  Node* temp = head;
  head = head -> next;
  free(temp);
}

void deleteAtEnd(Node* &head) {
  Node* secondLast = head;
  while(secondLast -> next -> next != NULL) {
    secondLast = secondLast -> next;
  }
  Node* temp = secondLast -> next;
  secondLast -> next = NULL;
  free(temp);
}

void deleteAtposition(Node* &head, int pos) {
  // Node* temp = head;
  // Node* prevNode = head;
  // while(prevNode != pos - 1) {
  //   prevNode = prevNode -> next;
  // }

}

int main() {

  Node* head = NULL;
  insertAtHead(head, 4);
  display(head);

  return 0;
}