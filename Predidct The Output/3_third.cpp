#include <iostream>
using namespace std;

class A1 {
  public:
  void f1() {
    cout << "A1 - f1";
  }
};

class A2 {

  public:
  void f1(int a) {
    cout << "A2 - f1";
  }

};

class B: public A1, public A2 {

  public:

};

int main() {

  B obj;
  
  // obj.f1();
  // obj.f1(23);  // error

  return 0;
}