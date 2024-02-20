#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main()
{
  string input, reversed;
  stack<char> s;

  // Input string from user
  cout << "Enter a string: ";
  getline(cin, input);

  // Push each character of the input string onto the stack
  for (int i = 0; i < input.length(); i++)
  {
    s.push(input[i]);
  }

  // Pop each character from the stack and append to the reversed string
  while (!s.empty())
  {
    reversed += s.top();
    s.pop();
  }

  // Output the reversed string
  cout << "Reversed string: " << reversed << endl;

  return 0;
}
