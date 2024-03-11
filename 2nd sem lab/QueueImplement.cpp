#include <iostream>
#include <queue>
using namespace std;

class Queue {

  public:
  int * arr;
  int front;
  int rear;
  int size;
  
  public:
    Queue(int Size) {
      front = 0;
      rear = 0;
      size = Size;
      arr = new int[size];
    }

    void enqueue(int element) {
      if(rear == size - 1) {
        cout << "Queue is overflow.";
      }
      else {
        arr[rear] = element;
        rear++;
        }
      }

    bool isEmpty() {
      return front == 0 && rear == 0;
    }

    void dequeue() {
      if(isEmpty()) {
        cout << "Queue is underflow.";
      }
      else {
        front++;
        if(front == rear) {
          front = 0;
          rear = 0;
        }
      }
    }

    int inFront() {
      if(isEmpty()) {
        cout << "Ther is no element.";
        return -1;
      }
      else {
        return arr[front];
      }
    }
};

int main() {

  int n;
  cout << "Enter the array size: ";
  cin >> n;

  Queue q(n);
  
  q.enqueue(89);

  q.enqueue(2);

  q.enqueue(23);

  cout << "Cheking empty: " << q.isEmpty() << endl;

  cout << "Front element is: " << q.inFront() << endl;

  q.dequeue();
  q.dequeue();
  q.dequeue();
  q.dequeue();
  cout << endl;
  q.inFront();
  cout << endl;
  q.isEmpty();



  return 0;
}