#include <iostream>
#include <cmath>
using namespace std;

class Bank
{
public:
  float inbal;
  float Ror;

  Bank(float bal, float r)
  {
    inbal = bal;
    Ror = r;
  }

  void depo()
  {
    float dep;
    cout << "Current balance is: " << inbal << endl;
    cout << "How much do you want to deposit: ";
    cin >> dep;

    inbal += dep;
    cout << "Current balance is: " << inbal << endl;
  }

  void interest()
  {
    int y;
    cout << "Enter the number of years: ";
    cin >> y;
    float cp = inbal * pow((1 + (Ror / 100)), y) - inbal;
    cout << "Compound interest is: " << cp << endl;
  }

  void with()
  {
    float with;
    cout << "Current balance is: " << inbal << endl;
    cout << "How much do you want to withdraw: ";
    cin >> with;

    if (inbal < with)
    {
      cout << "Insufficient balance" << endl;
    }
    else
    {
      inbal = inbal - with;
      cout << "Current balance is: " << inbal << endl;
    }
  }

  void balance()
  {
    cout << "Current balance is: " << inbal << endl;
  }

  void menu()
  {
    cout << "1: Deposit" << endl;
    cout << "2: Withdraw" << endl;
    cout << "3: Interest" << endl;
    cout << "4: Balance" << endl;
    cout << "5: Menu" << endl;
    cout << "6: Exit" << endl;
  }

  void exit()
  {
    cout << "Exit" << endl;
  }
};

int main()
{
  float inBal;
  float ror;

  cout << "Enter the initial balance: ";
  cin >> inBal;
  cout << "Enter the rate of interest: ";
  cin >> ror;

  Bank sys(inBal, ror);

  int choice;
  

  do

  {
    sys.menu();
    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice)
    {
    case 1:
      sys.depo();
      break;

    case 2:
      sys.with();
      break;

    case 3:
      sys.interest();
      break;

    case 4:
      sys.balance();
      break;

    case 5:
      sys.menu();
      break;

    case 6:
      sys.exit();
      break;

    default:
      cout << "Invalid choice" << endl;
    }
  } while (choice != 6);

  return 0;
}
