#include <iostream>
using namespace std;

class Test {
  int a;
  public:

  void get() {
    cin >> a;
  }

  void operator == (Test t2) {
    if(a == t2.a) {
      cout << "Objects are equal";
    }
    else {
      cout << "Objects are not equal";
    }
  }
};

int main() {

  Test t1, t2;
  cout << "Enter the value for a of object t1: ";
  t1.get();

  cout << "Enter the value for a of object t2: ";
  t2.get();

  t1 == t2;

  return 0;
}