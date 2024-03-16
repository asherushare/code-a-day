#include <iostream>
#include <stack>
using namespace std;

int main()
{ // Corrected function name from manin to main

  string str;
  cout << "Enter here the expression: ";
  cin >> str;

  stack<int> stk; // Changed stack type to store integers

  for (int i = str.length() - 1; i >= 0; i--)
  { // Corrected loop condition
    if (str[i] >= '0' && str[i] <= '9')
    {                         // Check if character is a digit
      stk.push(str[i] - '0'); // Convert char to int and push to stack
    }
    else
    {
      int op2 = stk.top(); // Get the second operand first
      stk.pop();
      int op1 = stk.top(); // Get the first operand
      stk.pop();

      switch (str[i])
      {
      case '+':
        stk.push(op1 + op2);
        break;
      case '-':
        stk.push(op1 - op2);
        break;
      case '*':
        stk.push(op1 * op2);
        break;
      case '/':
        stk.push(op1 / op2);
        break;
      };
    }
  }

  cout << stk.top();

  return 0;
}
