#include <iostream>
using namespace std;

class Stack {
  public:
  int top;
  int Size;
  int* arr;
  
  Stack(int size) {
    Size = size;
    top = -1;
    arr = new int[size];
  }

  void push(int val) {
    if(top == Size - 1) {
      cout << "Stack is full";
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
      cout << "Stack is empty: ";
      return -1;
    }
    else {
      int value = arr[top];
      top--;
      return value;
    }
  }
};

int main() {

  int n;
  cout << "Enter the size of array: ";
  cin >> n;

  int arr[100];
  cout << "Enter elements here: ";
  for(int i = 0; i < n; i++) {
    cin >> arr[i];
  }

  Stack st(n);

  for(int i = 0; i < n; i++) {
    st.push(arr[i]);
  }

  for(int i = 0; i < n; i++) {
    arr[i] = st.pop();
  }

  cout << "Reverse elements are: ";
  for(int i = 0; i < n; i ++) {
    cout << arr[i] << " ";
  }

  return 0;
}