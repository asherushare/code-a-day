#include <iostream>
using namespace std;

class Node {
  public:
  int data;
  Node* next = NULL;

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
  temp -> next = tail;
}

void display(Node* &head) {
  Node* temp = head;
  while(temp != NULL) {
    cout << temp -> data << "->";
    temp = temp->next;
  }
  cout << "NULL" << endl;
}

void insertAtPosition(Node* &head, int pos, int val) {
  if(pos == 0) {
    insertAtHead(head, val);
    return;
  }

  else {
    Node* newNode = new Node(val);
    Node* temp = head;
    int position = 0;
    while(position != pos - 1) {
      temp = temp -> next;
      position++;
    }

    newNode -> next = temp -> next;
    temp -> next = newNode;
  }

}

void deleteAthead(Node* &head) {
  Node* temp = head;
  head = head -> next;
  free(temp);
}

void deleteAtEnd(Node* head) {
  Node* secondLast = head;
  while(secondLast -> next -> next != NULL) {
    secondLast = secondLast -> next;
  }
  Node* temp = secondLast -> next;
  secondLast -> next = NULL;
  free(temp);
}

void deleteAtposition(Node* &head, int pos) {
  if(pos == 0) {
    deleteAthead(head);
    return;
  }
  Node* prev = head;
  int count = 0;
  while(count != pos - 1) {
    prev = prev -> next;
    count++;
  }
  Node* temp = prev -> next;
  prev -> next = prev -> next -> next;
  free(temp);
}

int main() {

  Node* head = new Node(3);
  cout << head -> data << endl;
  cout << head -> next << endl;

  insertAtHead(head, 12);
  display(head);
  insertAtHead(head, 89);
  display(head);

  insertAtTail(head, 1);
  display(head);

  insertAtPosition(head, 2, 22);
  display(head);

  // deleteAthead(head);
  // display(head);

  // deleteAtEnd(head);
  // display(head);

  deleteAtposition(head, 0);
  display(head);

  return 0;
}