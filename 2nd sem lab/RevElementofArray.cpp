#include <iostream>
using namespace std;

class Stack
{
  int top;
  int capacity;
  int *arr;

public:
  Stack(int size)
  {
    capacity = size;
    top = -1;
    arr = new int[size];
  }

  void push(int val)
  {
    if (top == capacity - 1)
    {
      cout << "Stack overflow";
    }
    else
    {
      top++;
      arr[top] = val;
    }
  }

  int pop()
  {
    if (top == -1)
    {
      cout << "Stack is undeflow";
      return -1;
    }
    else
    {
      int val = arr[top];
      top--;
      return val;
    }
  }

  bool Isempty()
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
};

void reverseEle(int arr[], int size)
{
  Stack stack(size);
  for (int i = 0; i < size; i++)
  {
    stack.push(arr[i]);
  }

  for (int i = 0; i < size; i++)
  {
    arr[i] = stack.pop();
  }
}

int main()
{

  int Size;
  cout << "Enter the size of array: ";
  cin >> Size;

  int arr[Size];
  cout << "Enter array element here: ";
  for (int i = 0; i < Size; i++)
  {
    cin >> arr[i];
  }

  reverseEle(arr, Size);

  cout << "Reverse elements are: ";
  for (int i = 0; i < Size; i++)
  {
    cout << arr[i] << " ";
  }

  return 0;
}