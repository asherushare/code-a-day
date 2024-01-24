#include <iostream>
using namespace std;

int main()
{

  int arr[4] = {2, 5, 33, 4};

  cout << "Elements are: ";
  for (int i = 0; i < 4; i++)
  {
    cout << arr[i] << " ";
  }

  cout << endl;

  int key;
  cout << "Which element do you want to find: ";
  cin >> key;

  int flag = -1; // Initialize flag to -1 to indicate not found
  for (int i = 0; i < 4; i++)
  {
    if (arr[i] == key)
    {
      flag = i; // Set flag to the index of the found element
      break;
    }
  }

  if (flag != -1)
  {
    cout << "Element found at index: " << flag << endl;
  }
  else
  {
    cout << "Element not found in the array." << endl;
  }

  return 0;
}
