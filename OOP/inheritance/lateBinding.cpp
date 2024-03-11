#include <iostream>
using namespace std;

class A
{
public:
  void virtual show()
  {
    cout << "This is class A" << endl;
  }
};

class B : public A
{
public:
  void show()
  {
    cout << "This is class B" << endl;
  }
};

int main()
{
  A *ptr;
  B obj;
  ptr = &obj;

  ptr -> show();

  return 0;
}