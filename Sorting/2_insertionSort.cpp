#include <iostream>
using namespace std;

void insertionSort(int arr[], int size) {
  for(int i = 1; i < size; i++) {
    int temp = arr[i];
    int j = i - 1;
    while( j >= 0 && arr[j] > temp) {
      arr[j + 1] = arr[j];
      j--;
    }
    arr[j + 1] = temp;
  }

  for(int i = 0; i < size; i++) {
    cout << arr[i] << " ";
  }
}

int main() {

  int size; 
  cout << "Enter the size of the array: ";
  cin >> size;

  int arr[100];
  cout << "Enter the array elements: " << endl;
  for(int i = 0; i < size; i++) {
    cin >> arr[i];
  }

  insertionSort(arr, size);

  return 0;
}