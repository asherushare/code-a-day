#include <bits\stdc++.h>
using namespace std;

void explainStack() {

  stack <int> st;
  st.push(23);

  cout << "The size is: " << st.size() << endl;

  st.push(23);
  st.push(4);

  st.emplace(998);

  cout << st.top() << endl;

  st.pop();

  cout << st.top() << endl;

  cout << st.empty() << endl;

}

int main() {

  explainStack();

  return 0;
}