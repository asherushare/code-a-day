#include <iostream>
#include <stack>
using namespace std;

int main() {

  string str;

  cout << "Enter a string here: ";
  getline(cin, str);

  stack <char> stk;

  string reverse = "";

  for(int i = 0; i < str.length(); i++) {
    stk.push(str[i]);
  }

  while(!stk.empty()) {
    reverse +=  stk.top();
    stk.pop();
  }

  cout << "Reverse string is: " << reverse << endl;

  return 0;
}