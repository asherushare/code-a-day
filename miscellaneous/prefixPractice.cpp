#include <iostream>
#include <string>

using namespace std;

class Stack
{
private:
  int *arr;
  int top;
  int capacity;

public:
  Stack(int size)
  {
    capacity = size;
    arr = new int[capacity];
    top = -1;
  }

  ~Stack()
  {
    delete[] arr;
  }

  void push(int value)
  {
    if (isFull())
    {
      cout << "Stack Overflow\n";
      return;
    }
    arr[++top] = value;
  }

  int pop()
  {
    if (isEmpty())
    {
      cout << "Stack Underflow\n";
      return -1;
    }
    return arr[top--];
  }

  int peek()
  {
    if (isEmpty())
    {
      cout << "Stack Underflow\n";
      return -1;
    }
    return arr[top];
  }

  bool isEmpty()
  {
    return top == -1;
  }

  bool isFull()
  {
    return top == capacity - 1;
  }
};

int evaluatePrefix(string expr)
{
  Stack stack(expr.length());

  for (int i = expr.length() - 1; i >= 0; i--)
  {
    if (isdigit(expr[i]))
    {
      stack.push(expr[i] - '0');
    }
    else
    {
      int operand2 = stack.pop();
      int operand1 = stack.pop();
      switch (expr[i])
      {
      case '+':
        stack.push(operand1 + operand2);
        break;
      case '-':
        stack.push(operand1 - operand2);
        break;
      case '*':
        stack.push(operand1 * operand2);
        break;
      case '/':
        stack.push(operand1 / operand2);
        break;
      }
    }
  }

  return stack.pop();
}

int main()
{
  string expr;
  cout << "Enter the prefix expression: ";
  getline(cin, expr);

  cout << "Result: " << evaluatePrefix(expr) << endl;
  return 0;
}
