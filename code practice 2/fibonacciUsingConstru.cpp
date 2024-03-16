#include <iostream>
using namespace std;

void fibonacci(int n) {
  int first = 0;
  int second = 1;

  cout << "Fibonacci series is: ";

  for(int i = 0; i < n; i++) {
    cout << first << " ";
    int next = first + second;
    first = second;
    second = next;
  }
}

int main() {

  int n;
  cout << "Enter the number of terms in fibanacci series: ";
  cin >> n;

  if(n <= 0) {
    cout << "Please enter a positive number: ";
    return 1;
  }

  fibonacci(n);

  return 0;
}