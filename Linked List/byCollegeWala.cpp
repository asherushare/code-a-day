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
  Node* new_node = new Node(val);
  new_node -> next = head;
  head = new_node;
}

void insertAtEnd(Node *&head, int val) {
  Node* lastNode = new Node(val);

  Node* temp = head;
  while(temp -> next != NULL) {
    temp = temp -> next;
  }

  // temp has reached last node
  temp -> next = lastNode;
}

void insertAtPosition(Node* &head, int val, int pos) {
  if(pos == 0) {
    insertAtHead(head, val);
    return;
  }
  else {
    Node* new_node = new Node(val);
    Node *temp = head;
    int current_pos = 0;
    while (current_pos != pos - 1) {
      temp = temp->next;
      current_pos++;
    }

    // temp is pointing to node at pos - 1
    new_node -> next = temp -> next;
    temp -> next = new_node;
  }
}

void display(Node* head) {
  Node* temp;
  temp = head;
  while(temp != NULL) {
    cout << temp -> val << "->";
    temp = temp -> next;
  }
  cout << "NULL" << endl;
}

void deleteAthead(Node* &head) {
  Node* temp = head;
  head = head -> next;
  free(temp);
}

void deleteAtEnd(Node* &head) {
  Node* second_last = head;
  while(second_last -> next -> next != NULL) {
    second_last = second_last -> next;
  }

  //now second_last points to second last node
  Node* temp = second_last -> next; // node to be deleted
  second_last -> next = NULL;
  free(temp);
  
}

void deleteAtposition(Node* &head, int pos) {
  if(pos == 0) {
    deleteAthead(head);
    return;
  }
  
  int curr_pos = 0;
  Node* prev = head;
  while(curr_pos != pos-1) {
    prev = prev -> next;
    curr_pos++;
  }

  // prev is pointing to node at pos - 1
  Node* temp = prev -> next;
  prev -> next = prev -> next -> next;
  free(temp);
}

int main() {

  Node* head = NULL;
  insertAtHead(head, 5);

  display(head);

  // insertAtEnd(head, 2);

  // insertAtPosition(head, 7, 1);
  

  // insertAtHead(head, 6);
  

  // insertAtEnd(head, 9);

  // insertAtHead(head, 7);

  // insertAtPosition(head, 4, 1);

  // deleteAthead(head);

  // deleteAtEnd(head);

  // deleteAtposition(head, 1);

  // deleteAtposition(head, 3);
  // display(head);

  return 0;
}