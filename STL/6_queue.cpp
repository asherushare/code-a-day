#include <bits\stdc++.h>
using namespace std;

void explainQueue() {

  queue <int> q;

  q.push(23);
  q.push(3);
  q.push(90);

  q.back() += 5;

  cout << q.back() << endl;
  cout << q.front() << endl;

  q.pop();

  cout << q.front() << endl;

}

int main() {

  explainQueue();

  return 0;
}