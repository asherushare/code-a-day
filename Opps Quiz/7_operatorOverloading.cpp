#include <iostream>
using namespace std;

class Base {
  int num;
  public:

  void getNum() {
    cout << "Enter num" << endl;
    cin >> num;
  }

  Base operator + (Base two) {
    Base three;
    three.num = num + two.num;
    cout << three.num << endl;
  }

};

int main() {

  Base one, two, three;
  one.getNum();
  two.getNum();
  three = one + two;

  return 0;
}