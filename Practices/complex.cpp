#include <iostream>
using namespace std;

class Complex
{
  float real;
  float imaginary;

public:
  Complex(float r = 0, float i = 0) : real(r), imaginary(i) {}

  Complex add(const Complex &c) const
  {
    return Complex(real + c.real, imaginary + c.imaginary);
  }

  Complex subtract(const Complex &c) const
  {
    return Complex(real - c.real, imaginary - c.imaginary);
  }

  Complex multiply(const Complex &c) const
  {
    float resultReal = real * c.real - imaginary * c.imaginary;
    float resultImaginary = real * c.imaginary + imaginary * c.real;
    return Complex(resultReal, resultImaginary);
  }

  Complex divide(const Complex &c) const
  {
    float denominator = c.real * c.real + c.imaginary * c.imaginary;
    float resultReal = (real * c.real + imaginary * c.imaginary) / denominator;
    float resultImaginary = (imaginary * c.real - real * c.imaginary) / denominator;
    return Complex(resultReal, resultImaginary);
  }

  void display() const
  {
    if (imaginary < 0)
      cout << real << " - " << -imaginary << "i";
    else
      cout << real << " + " << imaginary << "i";
  }
};

int main()
{
  float real1, imaginary1, real2, imaginary2;
  cout << "Enter real part of first complex number: ";
  cin >> real1;
  cout << "Enter imaginary part of first complex number: ";
  cin >> imaginary1;

  cout << "Enter real part of second complex number: ";
  cin >> real2;
  cout << "Enter imaginary part of second complex number: ";
  cin >> imaginary2;

  Complex num1(real1, imaginary1);
  Complex num2(real2, imaginary2);

  cout << "First complex number: ";
  num1.display();
  cout << endl;

  cout << "Second complex number: ";
  num2.display();
  cout << endl;

  Complex sum = num1.add(num2);
  Complex difference = num1.subtract(num2);
  Complex product = num1.multiply(num2);
  Complex quotient = num1.divide(num2);

  cout << "Sum: ";
  sum.display();
  cout << endl;

  cout << "Difference: ";
  difference.display();
  cout << endl;

  cout << "Product: ";
  product.display();
  cout << endl;

  cout << "Quotient: ";
  quotient.display();
  cout << endl;

  return 0;
}
