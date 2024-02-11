#include <iostream>
#include <stack>
using namespace std;

class Queue {
  int size;
  int front;
  int rear;
  int *arr;

  public:
  Queue(int Size) {
    front = 0;
    rear = 0;
    size = Size;
    arr = new int[size];
  }

  int enqueu(int element) {
    if(rear == size - 1) {
      cout << "There is no element to enqueue.";
    }
    else {
      arr[rear] = element;
      rear++;
    }
  }

  void dequeue() {
    if(front == 0 && rear == 0) {
      cout << "The queue is empty.";
    }
    else {
      front++;
      if(front == rear) {
        front = -1;
        rear = -1;
      }
    }
  }

  int inQueue() {
    if(front == 0 && rear == 0) {
      cout << "Queue is empty";
      return -1;
    }
    else {
      return arr[front];
    }
  }
  
  bool isEmpty() {
    if(front == 0 && rear == 0) {
      return true;
    }
    else {
      return false;
    }
  }
};

int main() {

  Queue q(5);

  q.enqueu(34);

  cout << "top element is: " << q.inQueue() << endl;

  cout << "empty checking: " << q.isEmpty() << endl;

  q.dequeue();
  q.dequeue();
  q.dequeue();

  return 0;
}