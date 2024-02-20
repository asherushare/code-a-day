#include <iostream>
#include <stack>
#include <string>
using namespace std;

stack<int> st;

int prefixEvaluation(const string &Prefix)
{
  for (int i = Prefix.length() - 1; i >= 0; i--)
  {
    char c = Prefix[i];
    if (isdigit(c))
    {
      st.push(c - '0');
    }
    else if (c == '-' || c == '+' || c == '*' || c == '/')
    {
      int operand1 = st.top();
      st.pop();
      int operand2 = st.top();
      st.pop();

      switch (c)
      {
      case '-':
        st.push(operand1 - operand2);
        break;
      case '+':
        st.push(operand1 + operand2);
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
  string prefix;
  cout << "Enter your prefix expression here: ";
  getline(cin, prefix);

  int result = prefixEvaluation(prefix);

  cout << "Result is: " << result << endl;

  return 0;
}
