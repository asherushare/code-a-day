#include <iostream>
using namespace std;

class Stack
{
public:
  int top;
  int size;
  int *arr;

  Stack(int Size)
  {
    top = -1;
    size = Size;
    arr = new int[Size];
  }

  void push(int value)
  {
    if (top == size - 1)
    {
      cout << "Stack is overflow";
    }
    else
    {
      top++;
      arr[top] = value;
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
      cout << "Stack is underflow";
      return -1;
    }
    else
    {
      int val = arr[top];
      top--;
      return val;
    }
  }

  int peek()
  {
    if (isEmpty())
    {
      cout << "Stack is empty";
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

  int capacity;
  cout << "Enter the size of array: ";
  cin >> capacity;

  Stack st(capacity);
  int arr[100];
  cout << "Enter elemenets in array: ";
  for (int i = 0; i < capacity; i++)
  {
    cin >> arr[i];
  }

  for (int i = 0; i < capacity; i++)
  {
    st.push(arr[i]);
  }

  for (int i = 0; i < capacity; i++)
  {
    arr[i] = st.pop();
  }

  cout << "reverse array elements are: ";
  for (int i = 0; i < capacity; i++)
  {
    cout << arr[i] << " ";
  }

  return 0;
}