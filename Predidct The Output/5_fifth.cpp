#include <iostream>
using namespace std;

class A1
{
public:
  void f1()
  {
    cout << "A1 - f1";
  }
};

class A2
{

public:
  void f1(int a)
  {
    cout << "A2 - f1";
  }
};

class B : public A1, public A2
{

public:
  void f1(int y)
  {
    cout << "B - f1";
  }
};

int main()
{

  // A1 *p
  // p* new B;
  // p -> f1();

  return 0;
}