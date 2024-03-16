#include <iostream>
using namespace std;

class A {
  public:
  void f1() {

  }
};

class B: public A {
  public:
  void f1() {

  }
  void f2(){

  }
};

int main() {

  A *p, o1;
  p = &o1;

  return 0;
}