#include <iostream>
using namespace std;

int main() {

  int Numbers[] = {2, 4, 8, 10};
  int *ptr = Numbers;
  for(int c = 0; c < 3; c++) {
    cout << *ptr << "@";
    ptr++;
  }
  cout << endl;
  for(int c = 0; c < 4; c++) {
    (*ptr) = 2;
    --ptr;
  }
  for(int c = 0; c < 4; c++)
  cout << Numbers[c] << "#";
  cout << endl;

  return 0;
}