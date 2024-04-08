#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int key)
{
  int start = 0;
  int end = size - 1;
  while (start <= end)
  {
    int mid = start + (end - start) / 2;
    if (arr[mid] == key)
    {
      return mid;
    }
    else if (arr[mid] < key)
    {
      start = mid + 1;
    }
    else
    {
      end = mid - 1;
    }
  }
  return -1;
}

int main()
{
  int size;
  cout << "Enter the size of the array: ";
  cin >> size;

  int arr[100];
  cout << "Enter the elements of the array: ";
  for (int i = 0; i < size; i++)
  {
    cin >> arr[i];
  }

  cout << "Which element do you want to search: ";
  int key;
  cin >> key;
  int index = binarySearch(arr, size, key);
  if (index != -1)
  {
    cout << "Element found at index number: " << index << endl;
  }
  else
  {
    cout << "Element not found";
  }

  return 0;
}