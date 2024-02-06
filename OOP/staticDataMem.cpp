#include <iostream>
using namespace std;

class demo {
  int x;
  int y;
  static int z;

  public:
  void getdata() {
    cout << "Enter two numbers: ";
    cin >> x >> y;
  }
};
int demo :: z;

int main() {

  return 0;
}