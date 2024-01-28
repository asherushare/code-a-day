#include <bits\stdc++.h>
using namespace std;

int main() {

  int term;
  cout << "Enter number of terms of fibonacci series: ";
  cin >> term;

  int first = 0;
  int second = 1;

  for(int i = 0; i < term; i++) {
    cout << first << " ";
    
    int next = first + second;
    first = second;
    second = next; 
  }

  return 0;
}