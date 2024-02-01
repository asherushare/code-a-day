#include <bits\stdc++.h>
using namespace std;

class Stack {

  public:

  int top;
  int *arr;
  int size;

  Stack(int Size) {
    top = -1;
    size = Size;
    arr = new int[size];
  }

  void push(int element) {
    if(top == size - 1) {
      cout << "Stack is overflow";
    }
    else {
      top++;
      arr[top] = element;
    }
  }

  void pop() {
    if(top == -1) {
      cout << "Stack is empty";
    }
    else {
      top--;
    }
  }

  int peek() {
    if(top == -1) {
      cout << "Stack is empty";
      return -1;
    }
    else {
      return arr[top];
    }
  }

  bool isEmpty() {
    if(top == -1) {
      return true;
    }
    else {
      return false;
    }
  }



};

int main() {

  Stack st(8);
  st.push(23);

  cout << st.peek() << endl;
  cout << st.isEmpty() << endl;

  st.pop();
  st.pop();

  cout << st.peek() << endl;

  return 0;
}