#include <iostream>
using namespace std;

int add(int a, int b) {
  return a + b;
}

int add(int a, int b, int c) {
  return a + b + c;
}

int volume(double r, int h) {
  return (3.14 * r * r * h);
}

int volume(int a) {
  return a * a * a;
}

int volume(int l, int b, int h) {
  return (l * b * h);
}

int main() {

  cout << "The sum of 3 and 6 is: " << add(3, 6) << endl;
  cout << "The sum of 3, 9 and 89 is: " << add(3, 9, 89) << endl;
  cout << "The volume of cuboid of 3, 7 and 6 is: " << volume(3, 7, 6) << endl;
  cout << "The vomume of cylinder of radius e and height 7 is:" << volume(3, 6) << endl;

  return 0;
}