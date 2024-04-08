#include <iostream>
using namespace std;

void bubbleSort(int arr[], int size) {
  for(int i = 1; i < size; i++) {
    for(int j = 0; j < size - i; j++) {
      if(arr[j + 1] < arr[j]) {
        swap(arr[j + 1], arr[j]);
      }
    }
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
  cout << "Enter the elements of the array: ";
  for(int i = 0; i < size; i++) {
    cin >> arr[i];
  }

  bubbleSort(arr, size);

  return 0;
}