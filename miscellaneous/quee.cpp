// #include <iostream>
// using namespace std;

// class Que{
//   public:
//   int front;
//   int rear;
//   int size;
//   int* arr;

//   Que(int Size) {
//     front = -1;
//     rear = -1;
//     size = Size;
//     arr = new int [Size];
//   }

//   void enque(int val) {
//     if(front == -1 && rear == -1) {
//       cout << "Que is full";
//     }
//     else {
//       rear++;
//       arr[rear] = val;
//     }
//     if(front == -1) {
//       front++;
//     }
//   }

//   bool isEmpty() {
//     return front == -1;
//   }

//   void deque() {
//     if(isEmpty()) {
//       cout << "Queue is empty: ";
//     }
//     else {
//       front++;
//     }
//   }

//   int frontele() {
//     if(isEmpty()) {
//       cout << "There is no elements";
//       return -1;
//     }
//     else {
//       return arr[rear];
//     }
//   }

// };

// int main() {

//   int n;
//   cout << "Enter the size of queue";
//   cin >> n;

//   Que q(n);

//   q.enque(12);
//   q.deque();
//   q.deque();

//   return 0;
// }