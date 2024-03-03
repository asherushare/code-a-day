#include <iostream>
using namespace std;

class Node {
  public:
  int data;
  Node* next;

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
  tail -> next = NULL;
  temp -> next = tail;
}

void insertAtPosition(Node* &head, int pos, int val) {

  if(pos == 0) {
    insertAtHead(head, val);
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

void deleteAtTail(Node* &head) {
  Node* temp = head;
  while(temp -> next -> next != NULL) {
    temp = temp -> next;
  }
  Node* temp1 = temp -> next;
  temp -> next = NULL;
}

void deleteAtPosition(Node* &head, int pos) {
  Node* temp = head;
  int current = 0;
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

  // insertAtHead(head, 10);
  // insertAtHead(head, 20);

  // display(head);

  // insertAtTail(head, 2220);
  // insertAtTail(head, 90);
  // display(head);

  // insertAtPosition(head, 2, 2);
  // display(head);

  // insertAtPosition(head, 3, 5);
  // display(head);

  // insertAtHead(head, 10);
  // insertAtHead(head, 20);

  // deleteAtHead(head);
  // display(head);

  // deleteAtTail(head);
  // display(head);

  // deleteAtPosition(head, 2);
  // display(head);

  int choice;

  cout << "1: insert at head" << endl;
  cout << "2: insert at tail" << endl;
  cout << "3: insert at position" << endl;
  cout << "4: delete at head" << endl;
  cout << "5: delete at position" << endl;
  cout << "6: delete at tail" << endl;

  cout << "Enter your choice: ";
  cin >> choice;
  switch(choice) {
    case 1:
    int num;
    cout << "enter the lement to insert: ";
    cin >> num;
    insertAtHead(head, num);
    break;
    case 3:
      int num2;
      int pos;
      cout << "enter the lement to insert: ";
      cin >> num2;
      cout << "Enter position: ";
      cin >> pos;
      insertAtPosition(head, pos, num2);
      break;

      case 2:
        int num3;
        cout << "enter the lement to insert: ";
        cin >> num3;
        insertAtTail(head, num3);
        break;

  }

  return 0;
}