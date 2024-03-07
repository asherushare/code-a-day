#include <iostream>
using namespace std;

class Node{
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

void insertAtEnd(Node* &head, int val) {
  Node* temp = head;
  while(temp -> next != NULL) {
    temp = temp -> next;
  }
  Node* tail = new Node(val);
  temp -> next = tail;
}

void insertAtPosition(Node* &head,int pos, int val) {

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

void deleteHead(Node* &head) {
  Node* temp = head;
  head = temp -> next;
  free(temp);
}

void deleteTail(Node* &head) {
  Node* temp = head;
  while(temp -> next -> next != NULL) {
    temp = temp -> next;
  }
  Node* temp1 = temp -> next;
  temp -> next = NULL;
  free(temp1);
}

void deleteAtPosition(Node* &head, int pos) {
  Node* temp = head;
  int current = 0;
  while(current != pos - 1) {
    temp = temp -> next;
    current++;
  }
  Node* Temp = temp -> next;
  temp -> next = Temp -> next;
  free(Temp);
}

void display(Node* &head) {
  Node* temp = head;
  while(temp != NULL) {
    cout << temp -> data << "->";
    temp = temp -> next;
  }
  cout << "NULL" << endl;
}

int main() {

  Node* head = NULL;
  int choice, ele, pos;
  // ... (previous code up to the "main" function)

  do
  {
    cout << "\n1. Insert at head" << endl;
    cout << "2. Insert at end" << endl;
    cout << "3. Insert at position" << endl;
    cout << "4. Delete at head" << endl;
    cout << "5. Delete at end" << endl;
    cout << "6. Delete at position" << endl;
    cout << "7. Display" << endl;
    cout << "8. Exit" << endl;
    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice)
    {
    case 1:
      cout << "Enter element to insert: ";
      cin >> ele;
      insertAtHead(head, ele);
      break;

    case 2:
      cout << "Enter element to insert: ";
      cin >> ele;
      insertAtEnd(head, ele);
      break;

    case 3:
      cout << "Enter position and element to insert: ";
      cin >> pos >> ele;
      insertAtPosition(head, pos, ele);
      break;

    case 4:
      deleteHead(head);
      break;

    case 5:
      deleteTail(head);
      break;

    case 6:
      cout << "Enter position to delete: ";
      cin >> pos;
      deleteAtPosition(head, pos);
      break;

    case 7:
      display(head);
      break;

    case 8:
      // Exit case: No action needed
      break;

    default:
      cout << "Invalid choice!" << endl;
    }
  } while (choice != 8);

  return 0;
}