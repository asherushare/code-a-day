#include <iostream>
using namespace std;

class Sample {
  int a;
  int b;

  public:
  Sample(int a, int b) {
    this-> a = a;
    this-> b = b;
  }

  Sample(const Sample &obj) {
    a = obj.a;
    b = obj.b;
  }

  void print() {
    cout << a << b << endl;
  }
};

int main() {

  Sample obj(12, 90);

  Sample obj2(obj);

  obj.print();
  obj2.print();

  return 0;
}