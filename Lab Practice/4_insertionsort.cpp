#include <iostream>
using namespace std;

void insertionSort(int size, int arr[]) {
  for(int i = 0; i < size; i++) {
    int j = i;
    while(arr[j - 1] > arr[j] && j > 0) {
      swap(arr[j - 1], arr[j]);
      j--;
    }
  }
  cout << "Sorting elements are: ";
  for(int i = 0; i < size; i++) {
    cout << arr[i] << " ";
  }
}

int main() {

  int size; 
  cout << "Enter the size of the array: ";
  cin >> size;

  int arr[100];

  cout << "Enter the array elements here: ";
  for(int i = 0; i < size; i++) {
    cin >> arr[i];
  }

  insertionSort(size, arr);

  return 0;
}