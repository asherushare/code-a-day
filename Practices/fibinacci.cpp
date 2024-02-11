#include <iostream>
using namespace std;

int main() {

  int num;
  cout << "Enter the number of terms: ";
  cin >> num;

  int first = 0;
  int second = 1;
  int next;

  cout << "Fibonacci series is: ";
  for(int i = 0; i < num; i++) {
    cout << first <<" ";
    next = first + second;
    first = second;
    second = next;
  }

  return 0;
}