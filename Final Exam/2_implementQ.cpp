#include <iostream>
using namespace std;

class que
{
public:
  int *arr;
  int size;
  int front;
  int rear;

  que(int Size)
  {
    front = 0;
    rear = 0;
    size = Size;
    arr = new int[Size];
  }

  void isEmpty()
  {
    if(front == rear) {
      cout << "Empty" << endl;
    }
    else {
      cout << "not empty" << endl;
    }
  }

  void enque(int val)
  {
    if (rear == size - 1)
    {
      cout << "size is full" << endl;
    }
    arr[rear] = val;
    rear++;
  }
  void deque()
  {
    if (front == rear)
    {
      cout << "Queue is empty" << endl;
    }
    else {
      front++;
      cout << "deque susses: " << endl;

      if (front == rear)
      {
        front = 0;
        rear = 0;
      }
    }
  }

  void frontE()
  {
    if (front == rear)
    {
      cout << "There is no element in que" << endl;
      return;
    }
    cout << "Front element is: " << arr[front] << endl;
  }
};

int main()
{

  int capacity;
  cout << "Enter the size of que: ";
  cin >> capacity;

  que q(capacity);
  int choice;

  do
  {
    cout << "1. to enque " << endl;
    cout << "2. to deque " << endl;
    cout << "3. to check is emptyness" << endl;
    cout << "4. to see front element" << endl;
    cout << "5. exit" << endl;
    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice)
    {
    case 1:
    {
      int data;
      cout << "Enter element to enque: " << endl;
      cin >> data;
      q.enque(data);
      break;
    }
    case 2:
    {
      q.deque();
      break;
    }
    case 3:
    {
      q.isEmpty();
      break;
    }
    case 4:
    {
      q.frontE();
      break;
    }
    default:
    {
      if(choice == 5) {
        break;
      }
      cout << "\nInvalid choice: " << endl;
      break;
    }
    };
  } 
  while (choice != 5);

  return 0;
}