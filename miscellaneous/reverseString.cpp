#include <iostream>
using namespace std;

class stack{
  public:
  int top;
  int size;
  char* arr;

  stack(int Size) {
    top = -1;
    size = Size;
    arr = new char [Size];
  }

  void push(char value) {
    if(top == size - 1) {
      cout << "Stack is empty";
    }
    else {
      top++;
      arr[top] = value;
    }
  }

  bool isEmpty() {
    return top == -1;
  }
  char pop() {
    if(isEmpty()) {
      cout << "Stack is underflow: ";
      return -1;
    }
    else {
      char value = arr[top];
      top--;
      return value;
    }
  }
};

int main() {

  string st;
  cout << "Enter string to reverse: ";
  getline(cin, st);

  stack s(st.length());
  for(int i = 0; i < st.length(); i++) {
    s.push(st[i]);
  }
  string name = "";
  for(int i = 0; i < st.length(); i++) {
    name += s.pop();
  }

  cout << name << endl;

  return 0;
}