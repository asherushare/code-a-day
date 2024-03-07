// #include <iostream>
// #include <string>
// using namespace std;

// class Stack {
//   public:
//   int top;
//   int* arr;
//   int size;

//   Stack(int Size) {
//     top = -1;
//     size = Size;
//     arr = new int[Size];
//   }

//   void push(int val) {
//     if(top == size - 1) {
//       cout << "The stack is full";
//     }
//     else {
//       top++;
//       arr[top] = val;
//     }
//   }
  
//   bool isEmpty() {
//     if(top == -1) {
//       return true;
//     }
//     else {
//       return false;
//     }
//   }

//   int pop() {
//     if(isEmpty()) {
//       cout << "Stack underflow";
//       return -1;
//     }
//     else {
//       int value = arr[top];
//       top--;
//       return value;
//     }
//   }

//   int peek() {
//     if(isEmpty()) {
//       cout << "Stack is underflow";
//       return -1;
//     }
//     else {
//       return arr[top];
//     }
//   }
// };

// int main() {

//   string input;
//   cout << "Enter your postfix expression: ";
//   getline(cin, input);

//   Stack st(input.length());
//   for(int i = 0; i < input.length(); i++) {
//     if(isdigit(input[i])) {
//       st.push(input[i] - '0');
//     }
//     else {
//       int operand1 = st.peek();
//       st.pop();
//       int operand2 = st.peek();
//       st.pop();

//       switch(input[i]) {
//         case '+':
//         st.push(operand1 + operand2);
//         break;

//         case '-':
//         st.push(operand2 - operand1);
//         break;

//         case '*':
//         st.push(operand1 * operand2);
//         break;

//         case '/':
//         st.push(operand2 / operand1);
//         break;
//       }
//     }
//   }
//   cout << st.peek() << endl;
//   return 0;
// }

#include <iostream>
using namespace std;

class Stack
{
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

  void push(int val)
  {
    if (top == size - 1)
    {
      cout << "The stack is full" << endl;
    }
    else
    {
      top++;
      arr[top] = val;
    }
  }

  bool isEmpty()
  {
    return top == -1;
  }

  int pop()
  {
    if (isEmpty())
    {
      cout << "Stack underflow" << endl;
      return -1;
    }
    else
    {
      int value = arr[top];
      top--;
      return value;
    }
  }

  int peek()
  {
    if (isEmpty())
    {
      cout << "Stack is overflow" << endl;
      return -1;
    }
    else
    {
      return arr[top];
    }
  }
};

int main()
{

  string input;
  cout << "Enter your postfix expression: ";
  getline(cin, input);

  Stack st(input.length());
  for (int i = 0; i < input.length(); i++)
  {
    if (isdigit(input[i]))
    {
      st.push(input[i] - '0');
    }
    else
    {
      int operand1 = st.peek();
      st.pop();
      int operand2 = st.peek();
      st.pop();

      switch (input[i])
      {
      case '+':
        st.push(operand1 + operand2);
        break;
      case '-':
        st.push(operand2 - operand1);
        break;
      case '*':
        st.push(operand1 * operand2);
        break;
      case '/':
        st.push(operand2 / operand1);
        break;
      }
    }
  }
  cout << st.peek() << endl;
  return 0;
}
