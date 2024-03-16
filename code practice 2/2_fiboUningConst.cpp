#include <iostream>
using namespace std;

class fibo {

  int nums;

  public:
  fibo (int num) {
    nums = num;
  }

  void fiboseries() {
    int first = 0;
    int second = 1;

    cout << "Series is: ";
    for(int i = 0; i < nums; i++) {
      cout << first << " ";
      int next = first + second;
      first = second;
      second = next;
    }
  }

};

int main() {

  int num;
  cout << "Enter the number of terms in fibonacci series: ";
  cin >> num;

  if(num <= 0) {
    cout << "Enter a positive number here: ";
    return 1;
  }

  fibo findingfibo(num);

  findingfibo.fiboseries();

  return 0;
}

