#include <iostream>
#include <stack>
#include <string>
using namespace std;

class Stack
{
private:
  int top;
  int *arr;
  int capacity;

public:
  Stack(int size)
  {
    capacity = size;
    arr = new int[size];
    top = -1;
  }

  void push(int value)
  {
    if (top == capacity - 1)
    {
      cout << "Stack Overflow!" << endl;
      return;
    }
    arr[++top] = value;
  }

  int pop()
  {
    if (top == -1)
    {
      cout << "Stack Underflow!" << endl;
      return -1;
    }
    return arr[top--];
  }

  int peek()
  {
    if (top == -1)
    {
      cout << "Stack is empty!" << endl;
      return -1;
    }
    return arr[top];
  }

  bool isEmpty()
  {
    return top == -1;
  }
};

int evaluatePostfix(const string &expr)
{
  Stack st(expr.length());
  for (char c : expr)
  {
    if (isdigit(c))
    {
      st.push(c - '0');
    }
    else if (c == '+' || c == '-' || c == '*' || c == '/')
    {
      int operand2 = st.pop();
      int operand1 = st.pop();

      switch (c)
      {
      case '+':
        st.push(operand1 + operand2);
        break;
      case '-':
        st.push(operand1 - operand2);
        break;
      case '*':
        st.push(operand1 * operand2);
        break;
      case '/':
        st.push(operand1 / operand2);
        break;
      }
    }
  }
  return st.peek();
}

int main()
{
  string expr;
  cout << "Enter postfix expression: ";
  getline(cin, expr);

  int result = evaluatePostfix(expr);
  cout << "Result: " << result << endl;

  return 0;
}
