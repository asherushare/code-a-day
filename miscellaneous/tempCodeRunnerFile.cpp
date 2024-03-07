#include <iostream>
#include <string>
using namespace std;

class Stack{
  public:
  int size;
  int top;
  int* arr;

  Stack(int Size) {
    size = Size;
    top = -1;
    arr = new int [Size];
  }

  void push(int val) {
    if(top == size - 1) {
      cout << "Stack is overflow";
    }
    else {
      top++;
      arr[top] = val;
    }
  }

  bool isEmpty() {
    return top == -1;
  }

  int pop() {
    if(isEmpty()) {
      cout << "Stack is underflow";
      return -1;
    }
    else {
      int value = arr[top];
      top--;
      return value;
    }
  }

  int peek() {
    if(isEmpty()) {
      cout << "Stack is underflow";
      return -1;
    }
    else {
      return arr[top];
    }
  }
};

int main() {

  string input;
  cout << "Enter your prefix expression: ";
  getline(cin, input);

  Stack st(input.length());
  for(int i = input.length(); i > 1; i--) {
    if(isdigit(input[i])) {
      st.push(input[i] - '0');
    }
    else {
      int operand1 = st.peek();
      st.pop();
      int operand2 = st.peek();
      st.pop();

      switch(input[i]) {
        case '+':
        st.push(operand1 + operand2);
        break;

        case '-':
          st.push(operand2 + operand1);
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