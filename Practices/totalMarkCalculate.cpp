#include <bits/stdc++.h>
using namespace std;

class Bank {
  float bal;
  float interest;

  public:
    Bank(float Bal, float Interest) {
      bal = Bal;
      interest = Interest;
    }

    void deposite() {
      float money;
      cout << "How much do want to deposite? ";
      cin >> money;

      int currentBal = bal + money;
      cout << "Current balance is: " << currentBal << endl;
    }

    void withdraw() {
      cout << "balance is: " << bal << endl;
      float with;
      cout << "How much do you want to withdraw? ";
      cin >> with;

      cout << "Current balance is: " << bal - with << endl;
    }

    void compound() {
      int n;
      cout << "Enter no of years: ";
      cin >> n;

      float com = bal * pow((1 + (interest/100)), n) - bal;

      cout << "compund interest is: " << com << endl;
    }

    void disBal() {
      cout << "Current balance is: " << bal << endl;
    }

    void menu() {
      cout << "1. make a deposite."<< endl;
      cout << "2. to withdraw." << endl;
      cout << "3. to find compund interest." << endl;
      cout << "4. To display amount." << endl;
      cout << "5. to show menu card." << endl;
    }
};

int main() {

  float initialBal;
  float initialRor;

  cout << "Enter initial balance here: ";
  cin >> initialBal;

  cout << "Enter rate of interest here: ";
  cin >>initialRor;

  Bank banksys(initialBal, initialRor);

  int choice;

  banksys.menu();

  cout << "Enter you choice: ";
  cin >> choice;

  switch(choice) {
    case 1:
    cout << "To deposite: ";
    banksys.deposite();
    break;

    case 2:
    banksys.withdraw();
    break;

    case 3: 
    banksys.compound();
    break;

    case 4: 
    banksys.disBal();
    break;

    case 5: 
    cout << "To display menu: ";
    banksys.menu();
    break;
  }

  return 0;
}