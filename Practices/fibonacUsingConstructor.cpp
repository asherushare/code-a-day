#include <iostream>
using namespace std;

class Fibo {
  int num;
  public:
    Fibo(int n) {
      num = n;
      int first = 0;
      int second = 1;
      int next = 0;

      for(int i = 0; i < n; i++) {
        cout << first << " ";
        next = first + second;
        first = second;
        second = next;
        
        
      }
    }
};

int main() {

  int n;
  cout << "Enter the number of terms of fibonacci series: ";
  cin >> n;

  Fibo obj(n);

  return 0;
}