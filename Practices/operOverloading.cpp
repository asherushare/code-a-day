// #include <iostream>
// using namespace std;

// class Test {
//   int a;
//   public:
//   void get() {
//     cin >> a;
//   }

//   void compare(Test t2) {
//     if(a == t2.a) {
//       cout << "Objects are equal";
//     }
//     else {
//       cout << "Object are not equal";
//     }
//   }

// };

// int main() {

//   Test t1, t2;

//   cout << "Enter t1 object a value: ";
//   t1.get();

//   cout << "Enter t2 object a value: ";
//   t2.get();

//   t1.compare(t2);

//   return 0;
// }


#include <iostream>
using namespace std;

class Test {
  int a;
  public:

  void get() {
    cin >> a;
  }

  void operator == (Test t2) {
    if(a == t2.a){
      cout << "Equal";
    }
    else {
      cout << "Not equal";
    }
  }
};

int main() {

  Test t1, t2;

  cout << "Enter a number here: ";
  t1.get();

  cout << "Enter number 2:";
  t2.get();

  t1 == t2;

  return 0;
}