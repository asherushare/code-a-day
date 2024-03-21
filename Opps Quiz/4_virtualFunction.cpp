#include <iostream>
using namespace std;

class A {
  public:
  void show() {
    cout << "A" << endl;
  }
};

class B: public A {
  public:
  void show() {
    cout << "B" << endl;
  }
};

int main() {

  A aa;
  aa.show();
  B bb;
  bb.show();
  bb.A :: show();


  return 0;
}