#include <iostream>
using namespace std;

class A {
  public:
  void show() {
    cout << "This is class A" << endl;
  }
};

class B: public A {
  public:
  void show() {
    cout << "This is class B" << endl;
  }
};

int main() {

  B obj;
  obj.show();
  // obj.A::show();
  obj.show();

  return 0;
}