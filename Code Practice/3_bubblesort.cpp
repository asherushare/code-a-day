#include <iostream>
using namespace std; 

void bubbleSort(int size, int arr[]) {
  for(int i = 0; i < size; i++) {
    for(int j = 0; j < size - i - 1; j++) {
      if(arr[j + 1] < arr[j]) {
        swap(arr[j + 1], arr[j]);
      }
    }
  }

  cout << "sorted elements are: ";
  for(int i = 0; i < size; i++) {
    cout << arr[i] << " ";
  }
}

int main() {

  int size; 
  cout << "Enter the size of array: ";
  cin >> size;

  int arr[100];
  for(int i = 0; i < size; i++) {
    cout << "Enter " << i + 1 << " element here: ";
    cin >> arr[i];
  }

  bubbleSort(size, arr);

  return 0;
}