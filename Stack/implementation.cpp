// #include <bits\stdc++.h>
// using namespace std;

// class Stack {

//   // Properties
//   public:
//     int top;
//     int *arr;
//     int size;

//     Stack(int Size) {
//       top = -1;
//       size = Size;
//       arr = new int[Size];
//     }

//     bool isEmpty() {
//       if(top == -1) {
//         return true;
//       }
//       else {
//         return false;
//       }
//     }

//     void push(int element) {
//       if(top == size - 1) {
//         cout << "Stack is Full.";
//       }
//       else {
//         top++;
//         arr[top] = element;
//       }
//     }

//     void pop() {
//       if(isEmpty()) {
//         cout << "Stack is Empty.";
//       }
//       else {
//         top--;
//       }
//     }

//     int peek() {
//       if(isEmpty()) {
//         cout << "Stack is Empty." << endl;
//         return -1;
//       }
//       else {
//         return arr[top];
//       }
//     }
// };

// int main() {
  
//   Stack s1(7);

//   s1.push(23);

//   cout << s1.isEmpty() << endl;

//   cout << s1.peek() << endl;

//   s1.pop();

//   cout << s1.peek() << endl;

//   return 0;
// }

#include <bits\stdc++.h>
using namespace std;

class Stack
{

  // Properties
public:
  int top;
  int *arr;
  int size;

  Stack(int Size)
  {
    top = -1;
    size = Size;
    arr = new int[Size];
  }

  bool isEmpty()
  {
    if (top == -1)
    {
      return true;
    }
    else
    {
      return false;
    }
  }

  void push(int element)
  {
    if (size - top > 1)
    {
      top++;
      arr[top] = element;
    }
    else
    {
      cout << "Stck Overflow.";
    }
  }

  void pop()
  {
    if (top >= 0)
    {
      top --;
    }
    else
    {
      cout << "Stack is underflow.";
    }
  }

  int peek()
  {
    if(top >= 0) {
      return arr[top];
    }
    else {
      cout << "Stack is empty." << endl;
      return -1;
    }
  }
};

int main()
{

  Stack s1(6);

  s1.push(23);
  s1.push(44);

  cout << s1.peek() << endl;

  cout << s1.isEmpty() << endl;

  s1.pop();
  s1.pop();

  cout << s1.peek() << endl;

  return 0;
}
