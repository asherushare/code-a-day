#include <bits/stdc++.h>
using namespace std;

void print() {
  cout << "This is Patra";
}

int main() {

  print();
  cout << endl;

  pair <int, int> p = {23, 3};
  cout << p.first << " " << p.second;

  pair <int, pair <int, int>> d = {23, {3, 4}};
  cout << d.first << " " << d.second.second;
  cout << endl;
  cout << d.second.first << endl;

  pair <int, int> arr[] = {{2, 90}, {23, 3}, {33, 4}};

  cout << arr[2].first << " " << arr[0].second;
  return 0;
}