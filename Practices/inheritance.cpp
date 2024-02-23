#include <iostream>
using namespace std;

class Human{
  public:
  int height;
  int weight;
  int age;

  int getAge() {
    return age;
  }

  void setWeight(int m) {
    weight = m;
  }
};

class Male: public Human {
  public:
  string color;

  void sleep() {
    cout << "Male is sleeping.";
  }
};

int main() {

  Male abj;
  cout << abj.age << endl;
  abj.setWeight(21);
  cout << abj.weight << endl;
  cout << abj.height << endl;

  cout << abj.color << endl;
  abj.sleep();
  
  return 0;
}