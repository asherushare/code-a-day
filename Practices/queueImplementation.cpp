#include <iostream>
#include <queue>
using namespace std;

class Queue {
  public:
  int front;
  int rear;
  int size;
  int* arr;

  Queue(int size) {
    front = -1;
    rear = -1;
    this -> size = size;
    arr = new int[size];
  }

  bool isEmpty() {
    if(front == -1 && rear == -1) {
      return true;
    }
    else {
      return false;
    }
  }

  void enqueue(int d) {
    if(rear == size - 1) {
      cout << "Queue is full.";
    }
    else {
      
    }
  }

  void dequeue() {

  }

  int frontElement() {

  }
};

int main() {

  return 0;
}