#include<iostream>
using namespace std;
#define size 5
int arr[size];

class queue{
  int front = -1;
  int rear = -1;
public:
  void enqueue(int data){
    if(rear == size -1){
      cout<<"Overflowed queue\n"<<endl;
      return;
    }
    if(front == -1) front++;
    arr[++rear] = data;
  }

  void dequeue(){
    if(front == -1){
      cout<<"Underflowed queue\n"<<endl;
      return;
    }
    if(front == rear){
      front = -1;
      rear = -1;
    }
    cout<<"Deleted element "<<arr[front++]<<endl;
  }

  void display(){
    if (front == -1)
    {
      cout << "Underflowed queue\n"<< endl;
      return;
    }
    cout<<"Elements in queue"<< endl;
    for(int i=front; i<=rear; i++){
      cout<<arr[i]<<" ";
    }
  }
};


int main(){

  return 0;
}