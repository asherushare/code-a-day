#include <iostream>
using namespace std;

class cq
{
  int front;
  int rear;
  int *arr;
  int size;

  cq(int Size)
  {
    front = -1;
    rear = -1;
    size = Size;
    arr = new int[Size];
  }
  void isEmpty()
  {
    if (front == -1)
    {
      cout << "Queue is empty" << endl;
    }
    else
    {
      cout << "Not empty" << endl;
    }
  }

  void enque(int val)
  {
    if ((front == 0 && rear == size - 1) || (rear == (front - 1) % (size - 1)))
    {
      cout << "Queue is full" << endl;
    }
    else if(front == size - 1) {
      front = rear = 0;
      arr[rear] = val;
    }
    else if(rear == size - 1 && front != 0) {
      rear = 0;
      arr[rear] = val;
    }
    else {
      rear++;
      arr[rear] = val;
    }
  }

  void deque()
  {
    if (front == -1)
    {
      cout << "Queue is empty" << endl;
    }
    else
    {
    }
  }
};

int main()
{

  return 0;
}