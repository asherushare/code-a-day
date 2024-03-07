// #include <iostream>
// using namespace std;

// class Stack {
//   public:
//   int top;
//   int* arr;
//   int size;

//   public:
//   Stack(int Size) {
//     top = -1;
//     arr = new int[Size];
//     size = Size;
//   }

//   void push(int val) {
//     if(top == -1) {
//       cout << "Stack is overflow.";
//     }
//     else {
//       top++;
//       arr[top] = val;
//     }
//   }

//   bool isEmpty() {
//     return top == -1;
//   }

//   char pop() {
//     if(isEmpty()) {
//       cout << "Stack is underflow";
//     }
//     else {
//       char value = arr[top];
//       top --;
//     }
//     return value;
//   }
// };

// int main() {

//   char input;
//   cout << "Enter postfix expression: ";
//   cin >> input;

//   for(char i = 0; i < input.lenth(); i++) {

//   }

//   return 0;
// }