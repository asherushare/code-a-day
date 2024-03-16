#include <iostream>
// #include <string>
#include <stack>
using namespace std;


int main() {

  string str;
  cout << "Enter a string here: ";
  getline(cin, str);

  string s = "";
  stack <char> stk;

  for(int i = 0; i < str.length(); i++) {
    stk.push(str[i]);
  }

  while(!stk.empty()) {
    s += stk.top();
    stk.pop();
  }

  cout << "Reverse string is: " << s << endl;

  return 0;
}