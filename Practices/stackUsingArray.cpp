#include <iostream>
using namespace std;

class Stack
{
  int top;
  int size;
  int *arr;

public:
  // Constructor to initialize the stack
  Stack(int Size)
  {
    top = -1;
    size = Size;
    arr = new int[Size];
  }

  // Destructor to free the dynamically allocated memory
  ~Stack()
  {
    delete[] arr;
  }

  // Check if the stack is empty
  bool isEmpty()
  {
    return top == -1;
  }

  // Push an element onto the stack
  void push(int data)
  {
    if (top == size - 1)
    {
      cout << "Stack overflow." << endl;
      return; // Added return to exit the function early
    }
    top++;
    arr[top] = data;
  }

  // Pop an element from the stack
  void pop()
  {
    if (isEmpty())
    {
      cout << "Stack underflow." << endl;
      return; // Added return to exit the function early
    }
    top--;
  }

  // Peek at the top element of the stack
  int peek()
  {
    if (isEmpty())
    {
      cout << "Stack underflow." << endl;
      return -1;
    }
    return arr[top];
  }
};

int main()
{
  int n;
  cout << "Enter the size of stack: ";
  cin >> n;

  Stack st(n);

  st.push(23);
  st.push(33);

  cout << "Top element is: " << st.peek() << endl;

  st.pop();
  st.pop();
  st.pop(); // This will trigger a stack underflow error

  cout << "Is empty: " << st.isEmpty() << endl;

  return 0;
}
