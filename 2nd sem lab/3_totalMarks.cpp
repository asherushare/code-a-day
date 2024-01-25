// #include <iostream>
// using namespace std;

// class Student {

//   private:
//     int regNo;
//     string name;
//     int marks[5];

//   public:
//     Student(int reg, const string& stude)

// };

// int main() {

//   int n;
//   cout << "Enter the number of student: ";
//   cin >> n;

//   Student students[n];

//   for(int i = 0; i < n; i++) {
//     int regNo;
//     string name;
//     int marks[5];

//     cout << "Enter registration number for student " << i + 1 << ": ";
//     cin >> regNo;

//     cout << "Enter name for student " << i + 1 << ": ";
//     cin.ignore();
//     getline(cin, name);

//     cout << "Enter marks for 5 subjects for student " << i + 1 << ": ";
//     for(int j = 0; j < 5; j++) {
//       cin >> marks[j];
//     }

//     students[i] = Student(regNo, name, marks);
//   }

//   for(int i = 0; i < n; i++) {
//     student[i].declareResult();
//   }

//   return 0;
// }