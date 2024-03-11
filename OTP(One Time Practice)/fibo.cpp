#include <iostream>
using namespace std;

class fibo
{
  int s;

public:
  fibo(int size)
  {

    s = size;
    int first = 1;
    int second = 1;
    int next = 0;

    for (int i = 0; i < s; i++)
    {
      cout << first << " ";
      next = first + second;
      first = second;
      second = next;
    }
  }
};

int main()
{

  int terms;
  cout << "Enter the number of terms: ";
  cin >> terms;

  fibo f(terms);

  return 0;
}