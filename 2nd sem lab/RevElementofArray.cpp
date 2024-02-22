// #include <iostream>
// using namespace std;

// class Stack {
//   public:
//   int top;
//   int size;
//   int* arr;

//   Stack(int size) {
//     top = -1;
//     this -> size = size;
//     arr = new int [size];
//   }

//   bool isEmpty() {
//     if(top == -1) {
//       return true;
//     }
//     else {
//       return false;
//     }
//   }

//   void push(int val) {
//     if(top == size - 1) {
//       cout << "Stack is overflow.";
//       return;
//     }
//     else {
//       top++;
//       arr[top] = val;
//     }
//   }

//   void pop() {
//     if(isEmpty()) {
//       cout << "Stack is underflow";
//       return;
//     }
//     else {
//       top--;
//     }
//   }
// };

// void reverseArray(int arr[], int n, Stack &stack) {
//   cout << "Enter array elements here: ";
//   for(int i = 0; i < n; i++) {
//     stack.push(arr[i]);
//   }

//   for(int i = 0; i < n; i++) {
//     arr[i] = stack.pop();
//   }
// }


// int main() {
//   int n;
//   cout << "Enter the size of array: ";
//   cin >> n;
//   int arr[n];
//   Stack stack(n);

//   reverseArray(arr, n, stack);



//   return 0;
// }