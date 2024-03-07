#include <iostream>
using namespace std;

class Fibo{
  int n;
  public:
  Fibo(int size) {
    n = size;

    int first = 1;
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

  int term;
  cout << "Enter the number of fibonacci terms do you want: ";
  cin >> term;

  Fibo series(term);

  return 0;
}