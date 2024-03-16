#include <iostream>
using namespace std;

class Base
{
  int top;
  int capacity;
  char *arr;

public:
  Base(int size)
  {
    top = -1;
    capacity = size;
    arr = new char[size];
  }

  void push(char val)
  {
    if (top == capacity - 1)
    {
      cout << "Stack is overflow.";
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

  char pop()
  {
    if (isEmpty())
    {
      cout << "Stack is empty: ";
      return '\0';
    }
    else
    {
      char val = arr[top];
      top--;
      return val;
    }
  }
};

int main()
{

  string str;
  cout << "Enter string here to reverse: ";
  getline(cin, str);

  string reversed = "";
  Base base(str.length());
  for (int i = 0; i < str.length(); i++)
  {
    base.push(str[i]);
  }

  cout << "Reverse String is: ";
  for (int i = 0; i < str.length(); i++)
  {
    reversed += base.pop();
  }

  cout << reversed << endl;

  return 0;
}
