#include <iostream>
using namespace std;

class node
{
public:
  int data;
  node *next;

  node(int val)
  {
    data = val;
    next = NULL;
  }
};

void insertAtHead(node *&head, int val)
{
  node *newNode = new node(val);
  newNode->next = head;
  head = newNode;
}

void insertAtTail(node *&head, int val)
{
  node *temp = head;
  while (temp->next != NULL)
  {
    temp = temp->next;
  }
  node *tail = new node(val);
  temp -> next = tail;
}

void insertAtPosition(node *&head, int val, int pos)
{
  if (pos == 0)
  {
    insertAtHead(head, val);
    return;
  }
  node *temp = head;
  int current = 0;
  while (current != pos - 1)
  {
    temp = temp->next;
    current++;
  }
  node *newNode = new node(val);
  newNode->next = temp->next;
  temp->next = newNode;
}

void display(node *&head)
{
  node *temp = head;
  while (temp != NULL)
  {
    cout << temp->data << "->";
    temp = temp->next;
  }
  cout << "NULL" << endl;
}

void deleteAthead(node *&head)
{
  node *temp = head;
  head = temp->next;
  delete (temp);
}

void deleteAtTail(node *&head)
{
  node *temp = head;
  while (temp->next->next != NULL)
  {
    temp = temp->next;
  }
  node *temp1 = temp->next;
  temp->next = NULL;
  delete (temp1);
}

void deleteAtPosition(node *&head, int pos)
{
  if (pos == 0)
  {
    deleteAthead(head);
  }
  int current = 0;
  node *temp = head;
  while (current != pos - 1)
  {
    temp = temp->next;
    current++;
  }
  node *temp1 = temp->next;
  temp->next = temp1->next;
  delete (temp1);
}

int main()
{

  node *head = NULL;

  int choice;
  do
  {
    cout << "1. insert at Head" << endl;
    cout << "2. insert at tail" << endl;
    cout << "3. insert at anyposition" << endl;
    cout << "4. display list" << endl;
    cout << "5. delete at head" << endl;
    cout << "6. delete at tail" << endl;
    cout << "7. delete at any position" << endl;
    cout << "8. exit" << endl;
    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice)
    {
    case 1:
    {
      int data;
      cout << "Enter element to store data: " << endl;
      cin >> data;
      insertAtHead(head, data);
      break;
    }
    case 2:
    {
      int data;
      cout << "Enter element to store data: " << endl;
      cin >> data;
      insertAtTail(head, data);
      break;
    }
    case 3:
    {
      int data;
      int pos;
      cout << "Enter element, enter position to store:  " << endl;
      cin >> data >> pos;
      insertAtPosition(head, data, pos);
      break;
    }
    case 4:
    {
      display(head);
      break;
    }
    case 5:
    {
      deleteAthead(head);
      break;
    }
    case 6:
    {
      deleteAtTail(head);
      break;
    }
    case 7:
    {
      int pos;
      cout << "Enter the position to delete: ";
      cin >> pos;
      deleteAtPosition(head, pos);
      break;
    }
    default:
    {
      if (choice == 8)
      {
        break;
      }
      cout << "Invalid choice" << endl;
      break;
    }
    };
  } while (choice != 8);

  return 0;
}