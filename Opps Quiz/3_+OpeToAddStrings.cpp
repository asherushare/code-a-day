#include <iostream>
#include <string> // Include this header for using string

using namespace std;

class Test
{
  string name;

public:
  void read()
  {
    cout << "Enter string: ";
    cin >> name; // Read input directly into 'name'
  }
  void show()
  {
    cout << name << endl;
  }

  Test operator+(const Test &t2)
  {
    Test t3;
    t3.name = name + " + " + t2.name;
    return t3;
  }
};

int main()
{
  Test t1, t2, t3;
  t1.read();
  t2.read();
  t3 = t1 + t2;
  t3.show();

  return 0;
}
