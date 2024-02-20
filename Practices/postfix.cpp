#include <iostream>
#include <stack>
#include <string>

using namespace std;

int evaluatePostfix(const string &expr)
{
  stack<int> st;

  for (int i = 0; i < expr.length(); ++i)
  {
    char c = expr[i];
    if (isdigit(c))
    {
      st.push(c - '0');
    }
    else if (c == '+' || c == '-' || c == '*' || c == '/')
    {
      int operand2 = st.top();
      st.pop();
      int operand1 = st.top();
      st.pop();

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

  return st.top();
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
