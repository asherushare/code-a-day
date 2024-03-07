#include <iostream>
using namespace std;

class cArithmetic {
  float Real1;
  float Img1;
  float Real2;
  float Img2;

  public:
  cArithmetic(float r1, float i1, float r2, float i2) {
    Real1 = r1;
    Img1 = i1;
    Real2 = r2;
    Img2 = i2;
  }

  void addition() {
    float realPart = Real1 + Real2;
    float ImgPart = Img1 + Img2;

    cout << "Addition is: " << realPart << " + " << ImgPart << "i" << endl;
  }

  float subtraction() {
    float sub = Real1 - Real2;
    float sub3 = Img1 - Img2;

    cout << "Subtraction is: " << sub << "-" << sub3 << "i" << endl;
  }

  float multiplication() {
    float mul = Real1 * Real2;
    float mul2 = Img1 * Img2;

    cout << "Multiplication " << mul << "*" << mul2 << "i" << endl;
  }

  float division() {
    float div = Real1 / Real2;
    float div2 = Img1 / Img2;

    cout << "Division is: " << div << "/" << div2 << "i" << endl;
  }
};

int main() {

  float real1;
  float img1;

  float real2;
  float img2;

  cout << "Enter real part of first number: ";
  cin >> real1;
  cout << "Enter imagina imaginary part of first number: ";
  cin >> img1;

  cout << "Enter real part of second number: ";
  cin >> real2;
  cout << "Enter imaginary part of second numebr: ";
  cin >> img2;

  cArithmetic operation(real1, img1, real2, img2);

  operation.addition();
  operation.subtraction();
  operation.multiplication();
  operation.division();

  return 0;
}