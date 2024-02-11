#include <iostream>
#include <queue>
using namespace std;

class Queue {
  int front;
  int rear;
  int *arr;
  int size;

  public:
  Queue(int Size) {
    front = -1;
    rear = -1;
    size = Size;
    arr = new int[Size];
  }

  void enqueue(int element) {
    if(rear == size - 1) {
      cout << "Queue is full.";
    }
    else {
      rear++;
      arr[rear] = element;
    }
  }

  void dequeue() {
    if(rear == -1 && front == -1) {
      cout << "Queue is empty.";
    }
    else {
      front++;
      if(front > rear) {
        front = -1;
        rear = -1;
      }
    }
  }

  int inQueue() {
    if(rear == size - 1) {
      cout << "There is no element in queue.";
      return -1;
    }
    else {
      return arr[front];
    }
  }

  bool isEmpty() {
    if(front == -1 && rear == -1) {
      return true;
    }
    else {
      return false;
    }
  }
};

int main() {

  int capacity;
  cout << "Enter the size of queue: ";
  cin >> capacity;

  Queue q(capacity);

  q.enqueue(23);
  q.enqueue(33);
  q.enqueue(90);

  cout << "Front element: " << q.inQueue() << endl;
  cout << "Is empty: " << q.isEmpty() << endl;

  return 0;
}