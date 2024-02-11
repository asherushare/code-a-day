#include <iostream>
using namespace std;

class Fibo {
  public:

  Fibo(int n) {
    int first = 0;
    int second = 1;
    int next;

    for(int i = 0; i < n; i++) {
      cout << first << " ";
      next = first + second;
      first = second;
      second = next;
      
    }
  }
};

int main() {

  int num;
  cout << "Enter number of terms: ";
  cin >> num;

  Fibo fibo(num);


  
  return 0;
}