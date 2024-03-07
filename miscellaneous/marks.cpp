#include <iostream>
#include <string>
using namespace std;

class Student
{
public:
  int regNo;
  string name;
  int marks[5];
  int totalMarks;

  void calculateTotalMarks()
  {
    totalMarks = 0;
    for (int i = 0; i < 5; i++)
    {
      totalMarks += marks[i];
    }
  }
};

int main()
{
  int n;
  cout << "Enter the number of students: ";
  cin >> n;
  cin.ignore();

  Student students[100];

  for (int i = 0; i < n; i++)
  {
    cout << "Enter details for student " << i + 1 << ":\n";
    cout << "Reg. No.: ";
    cin >> students[i].regNo;
    cin.ignore();
    cout << "Name: ";
    getline(cin, students[i].name);
    cout << "Marks in 5 subjects: ";
    for (int j = 0; j < 5; j++)
    {
      cin >> students[i].marks[j];
    }
    cin.ignore();
    students[i].calculateTotalMarks();
  }

  for (int i = 0; i < n; i++)
  {
    cout << "\nDetails for student " << i + 1 << ":\n";
    cout << "Reg. No.: " << students[i].regNo << "\n";
    cout << "Name: " << students[i].name << "\n";
    cout << "Total Marks: " << students[i].totalMarks << "\n";
  }

  return 0;
}
