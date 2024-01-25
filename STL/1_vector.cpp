#include <bits\stdc++.h>
using namespace std;

int main() {

  vector <int> a;
  a.push_back(23);
  a.push_back(90);

  a.emplace_back(33);

  vector <pair<int, int>> v;
  v.push_back({23, 9});
  v.emplace_back(23, 3);

  cout << "Size is: " << v.size() << endl;

  cout << "The size of vector a is: " << a.size() << endl;

  vector <int> v2(4, 89);
  vector <int> c(v2);
  cout << "size is: " << v2.size() << endl;

  cout << v2[3];
  v2.push_back(45);
  cout << endl;
  cout << v2[v2.size() - 1];

  vector <int> :: iterator it = v2.begin();

  // vector <int> ar[] = 

  // for(auto i = v2.begin(); i != v.end(); i++) {
  //   cout << *(i) << " ";
  // }


  return 0;
}