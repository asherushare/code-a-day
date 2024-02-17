#include <iostream>
using namespace std;

class A {
  int a;
  static int b;

  public:
    A(int x, int y) {
      a = x; 
      b = y;
    }

    void show() {
      cout << "a & b " << a << " " << b << endl; 
    }

    static void disp() {
      cout << "We can only static data member only so value of b is: " << b << endl;
    }
};

int A :: b = 0;

int main() {

  A obj(23, 89);
  A obj2(233, 100);

  obj.show();

  obj2.show();

  A :: disp();

  obj.show();

  return 0;
}