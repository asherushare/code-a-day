// syntax = return type operator symbol (argument) {
//   return type;
// }


// Example of comparison operator

#include <iostream>
using namespace std;

class Test {
  int a;
  public:

  void get() {
    cin >> a;
  }

  void compare(Test t2) {
    if(a == t2.a) {
      cout << "Objects are equal" << endl;
    }
    else {
      cout << "Objects are not equal" << endl;
    }
  }
};

int main() {

  Test t1, t2;
  cout << "Enter t1 object a value: " << endl;
  t1.get();

  cout << "Enter t2 object a value: " << endl;
  t2.get();

  t1.compare(t2);  // member function calling

  return 0;
}