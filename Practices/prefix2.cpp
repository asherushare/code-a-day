#include <iostream>
#include <string>
using namespace std;

class Stack {
  int* arr;
  int top; 
  int capacity;

  public:

  Stack (int size) {
    top = -1;
    capacity = size;
    arr = new int[size];
  }

  void push(int val) {
    if(top == -1) {
      cout << "Stack is full.";
      return;
    }
    else {
      top++;
      arr[top] = val;
    }
  }

  bool isEmpty() {
    return top == -1;
  }

  void pop() {
    if(isEmpty()) {
      cout << "Stack is underflow.";
    }
    else {
      char val = arr[top];
      top--;
    }
  }
};

int main() {

  string prefix;
  cout << "Enter prefix expression: ";
  getline(cin, prefix);

  for(char i = 0; i < prefix.length(); i++) {
    Stack st(prefix.length());
    if(isdigit(i)) {
      st.push(prefix[i]);
    }
    else {
      
    }
  }

  return 0;
}