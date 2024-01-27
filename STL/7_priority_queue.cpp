#include <bits\stdc++.h>
using namespace std;

void explainPrioQueue()
{

  priority_queue <int> pq;

  pq.push(23);
  pq.push(4);
  pq.push(48);
  pq.push(8);

  cout << pq.top() << endl;

  pq.pop();

  cout << pq.top() << endl;

  priority_queue <int, vector<int>, greater<int>> pq;
  pq.push(89);
  pq.push(900);

  cout << pq.top() << endl;
}

int main()
{

  explainPrioQueue();

  return 0;
}