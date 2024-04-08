#include <iostream>
using namespace std;

class node {
  public:
  int data;
  node* next;

  node(int data) {
    this -> data = data;
    this -> next = NULL;
  }
};

void insertAtHead(node* &head, int val) {
  node* newNode = new node(val);
  newNode -> next = head;
  head = newNode;
}

void insertAtTail(node* &head, int val) {
  node* temp = head;
  while(temp -> next != NULL) {
    temp = temp->next;
  }
  node* tail = new node(val);
  temp -> next = tail;
}

void insertAtposition(node* &head, int val, int pos) {
  if(pos == 0) {
    insertAtHead(head, val);
    return;
  }
  node* temp = head;
  int prev = 0;
  while(prev != pos - 1) {
    temp = temp->next;
    prev++;
  }
  node* newNode = new node(val);
  newNode -> next = temp -> next;
  temp -> next = newNode;
}

void display(node* &head) {
  node* temp = head;
  while(temp != NULL) {
    cout << temp -> data << "->";
    temp = temp -> next;
  }
  cout << "NULL" << endl;
}

int main() {

  node* head = NULL;

  insertAtHead(head, 12);
  insertAtHead(head, 45);
  insertAtHead(head, 89);
  display(head);

  insertAtTail(head, 88);
  insertAtTail(head,899);
  display(head);

  insertAtposition(head, 89, 3);
  display(head);
  insertAtposition(head, 1, 1);
  display(head);

  return 0;
}