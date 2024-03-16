#include <iostream>
#include <vector>
#include <algorithm> // Include the algorithm header for std::copy
using namespace std;

class Student
{

private:
  int regNo;
  string name;
  vector<int> marks;

public:
  Student(int reg, const string &studentName, const vector<int> &studentMarks) : regNo(reg), name(studentName), marks(studentMarks) {}

  void declareResult() const
  {
    int totalMarks = 0;
    for (int mark : marks)
    {
      totalMarks += mark;
    }

    cout << "Registration Number: " << regNo << ", Name: " << name << ", Total Marks: " << totalMarks << ", Result: ";

    // Assuming a passing threshold of 200 for demonstration purposes
    if (totalMarks >= 200)
    {
      cout << "Pass";
    }
    else
    {
      cout << "Fail";
    }

    cout << endl;
  }
};

int main()
{
  int n;
  cout << "Enter the number of students: ";
  cin >> n;

  vector<Student> students(n);

  for (int i = 0; i < n; i++)
  {
    int regNo;
    string name;
    vector<int> marks(5);

    cout << "Enter Registration Number for student " << i + 1 << ": ";
    cin >> regNo;

    cout << "Enter Name for student " << i + 1 << ": ";
    cin.ignore(); // Ignore newline left in the buffer
    getline(cin, name);

    cout << "Enter Marks for 5 subjects for student " << i + 1 << ": ";
    for (int j = 0; j < 5; ++j)
    {
      cin >> marks[j];
    }

    students[i] = Student(regNo, name, marks);
  }

  for (int i = 0; i < n; ++i)
  {
    students[i].declareResult();
  }

  return 0;
}
