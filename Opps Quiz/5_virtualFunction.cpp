#include <iostream>
using namespace std;

class Animals {
  public:
  virtual void speak() {
    cout << "Hello" << endl;
  }
};

class Dogs : public Animals {
  public:
  void speak() {
    cout << "Bark" << endl;
  }
};

int main() {

  Animals *p;
  // p = new Dogs();
  // p -> speak();

  return 0;
}