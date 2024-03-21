#include <iostream>
using namespace std;

int main() {

  try {
    int a, b;
    cout << "Enter values for a and b: ";
    cin >> a >> b;
    if(b != 0) {
      cout << "Result is: " << a / b << endl;
    }
    else {
      throw(b);
    }
  }
  catch(int e) {
    cout << "Error: " << e << endl;
  }
  return 0;
}