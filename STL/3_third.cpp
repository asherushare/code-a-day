#include <bits\stdc++.h>
using namespace std;

int main() {

  vector <int> v;
  v.push_back(23);
  v.push_back(90);
  v.push_back(233);

  for(int i = 0; i <= v.size(); i++) {
    cout << v[i] << " ";
  }

  v.insert(v.begin(), 2333);
  v.insert(v.begin() + 2, 3, 99);


  cout << endl;

  for (int i = 0; i <= v.size(); i++) {
    cout << v[i] << " ";
  }

  cout << endl;

  cout << v.empty();
  // for(int i = 0; i <= v.size(); i++) {
  //   cout << *v[i] << " ";
  // }


  return 0;
}