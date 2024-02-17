#include <iostream>
using namespace std;

class complex
{

  float num1;
  float num2;
  float num3;
  float num4;

public:
  complex(float one, float two, float three, float four)
  {
    num1 = one;
    num2 = two;
    num3 = three;
    num4 = four;
  }

  void addition()
  {
    cout << "Addition is: " << num1 + num3 << " + " << num2 + num4 << "i" << endl;
  }

  void subtraction() {
    cout << "Subtraction is: " << num1 - num3 << " - " << num2 - num4 << "i" << endl;
  }

  void multiplication()
  {
    cout << "Addition is: " << num1 * num3 << " + " << num2 * num4 << "i" << endl;
  }

  void division()
  {
    cout << "Subtraction is: " << num1 / num3 << " - " << num2 / num4 << "i" << endl;
  }
};

int main()
{

  float com1;
  float com2;
  float com3;
  float com4;

  cout << "Enter first part of first complex number: ";
  cin >> com1;

  cout << "Enter second part of first complex number: ";
  cin >> com2;

  cout << "Enter first part of second complex number: ";
  cin >> com3;

  cout << "Enter second part of second complex number: ";
  cin >> com4;

  complex arith(com1, com2, com3, com4);

  arith.addition();
  arith.subtraction();
  arith.multiplication();
  arith.division();

  return 0;
}
