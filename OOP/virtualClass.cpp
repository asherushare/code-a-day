#include <iostream>
using namespace std;

class A {
  public:
  void afunc() {
    cout << "This is base class" << endl;
  }
};

class B: public virtual A {
  public:
  void bfunc() {
    cout << "This is derived from A" << endl;
  }
};

class C: public virtual A{
  public:
  void cfunc() {
    cout << "Thisi derived from A" << endl;
  }
};

class D: public B, public C {
  public:
  void dfunc() {
    cout << "This is derived from A and B";
  }
};

int main() {

  D obj;
  obj.afunc();
  // obj.bfunc();
  // obj.cfunc();
  // obj.dfunc();

  return 0;
}