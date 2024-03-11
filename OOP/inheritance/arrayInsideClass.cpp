#include <iostream>
using namespace std;

class Stu {
  int id;
  int sub[6];
  char name[20];

  public:
  void getstu();
  void result();
};

void Stu :: getstu() {
  cout << "Enter student id, name";
  cin >> id >> name;
  cout << "Enter 6 subjects marks: ";
  for(int i = 0; i < 6; i++) {
    cin >> sub[i];
  }
}

void Stu :: result() {
  int total = 0;
  float avg;
  for(int i = 0; i < 6; i++) {
    total += sub[i];
  }
  avg = total/6.0;
  cout << "Total " << total << endl;
  cout << "Avg " << avg << endl;
  cout << "Result " << 
}

int main() {

  return 0;
}