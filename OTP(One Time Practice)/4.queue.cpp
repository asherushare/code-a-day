#include <iostream>
#include <queue>
using namespace std;

class Queue
{

public:
  int *arr;
  int front;
  int rear;
  int size;

public:
  Queue(int Size)
  {
    front = 0;
    rear = 0;
    size = Size;
    arr = new int[size];
  }

  void enqueue(int element)
  {
    if (rear == size - 1)
    {
      cout << "Queue is overflow." << endl;
    }
    else
    {
      arr[rear] = element;
      rear++;
    }
  }

  bool isEmpty()
  {
    return front == 0 && rear == 0;
  }

  void dequeue()
  {
    if (isEmpty())
    {
      cout << "Queue is underflow." << endl;
    }
    else
    {
      front++;
      if (front == rear)
      {
        front = 0;
        rear = 0;
      }
    }
  }

  int inFront()
  {
    if (isEmpty())
    {
      cout << "There is no element." << endl;
      return -1;
    }
    else
    {
      return arr[front];
    }
  }
};

int main()
{

  int n;
  cout << "Enter the array size: ";
  cin >> n;

  Queue q(n);

  int choice;
  do
  {
    cout << "Enter your choice:" << endl;
    cout << "1. Enqueue" << endl;
    cout << "2. Dequeue" << endl;
    cout << "3. Check if empty" << endl;
    cout << "4. Display front element" << endl;
    cout << "5. Exit" << endl;
    cin >> choice;

    switch (choice)
    {
    case 1:
      int element;
      cout << "Enter element to enqueue: ";
      cin >> element;
      q.enqueue(element);
      break;
    case 2:
      q.dequeue();
      break;
    case 3:
      cout << "Queue is " << (q.isEmpty() ? "empty." : "not empty.") << endl;
      break;
    case 4:
      cout << "Front element is: " << q.inFront() << endl;
      break;
    case 5:
      cout << "Exiting..." << endl;
      break;
    default:
      cout << "Invalid choice. Please try again." << endl;
    }
  } while (choice != 5);

  return 0;
}
