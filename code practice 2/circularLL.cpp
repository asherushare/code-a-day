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

class CircularLinkedList {
  public:
  Node* head;
  
  CircularLinkedList() {
    head = NULL;
  }

  void display() {
    Node* temp = head;
    do {
      cout << temp -> val << "->";
      temp = temp -> next;
    }
    while(temp != head);
    cout << endl;
  }

  void insertAtHead(int val)
  {
    Node *new_node = new Node(val);
    if (head == NULL)
    {
      head = new_node;
      new_node->next = head;
      return;
    }

    Node* tail = head;
    while(tail -> next != head) {
      tail = tail -> next;
    }

    tail -> next = new_node;
    new_node -> next = head;
    head = new_node;
  }
};

int main() {

  CircularLinkedList cll;
  cll.insertAtHead(3);
  cll.display();

  return 0;
}