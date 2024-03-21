#include <iostream>
using namespace std;

class Custemer {
  public:
  string name;
  int balance;
  int account_number;

  public:
  Custemer(string name, int balance, int account_number) {
    this->name = name;
    this->balance = balance;
    this->account_number = account_number;
  }

  void deposite(int amount)
  {
    if (amount > 0)
    {
      balance += amount;
      cout << "Amount is credited successful" << endl;
    }
    else {
      throw "Amount should be greater than 0";
    }
  }

  void withdraw(int amount)
  {
    if (amount > 0 && amount <= balance)
    {
      amount -= amount;
      cout << "Amount is debited successful" << endl;
    }
    else {
      throw "Your balance is too low";
    }
  }
};

int main() {

  Custemer c1("Patric", 5000, 10);
  
  try {
    c1.deposite(233);
    c1.withdraw(40000);
    c1.deposite(0);
  }
  catch(const char *e) {
    cout << "Exception occured: " << e << endl;
  }
  catch(const char *e) {
    cout << "Exception occured: " << e << endl;
  }

  return 0;
}