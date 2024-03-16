#include <iostream>
using namespace std;

class Customer {
  public:
  string name;
  int balance;
  int acc_number;

  public:
  Customer(string name, int balance, int acc_number) {
    this -> name = name;
    this -> balance = balance;
    this -> acc_number = acc_number;
  }

  void Deposite(int bal);
  void withdraw(int amount);
};

// Deposite

void Customer :: Deposite(int bal) {
  if(bal > 0) {
    balance += bal;
    cout << bal << " is credited successfully" << endl;
  }
}

// withdraw 

void Customer:: withdraw(int amount) {
  if(amount > 0 && amount <= balance) {
    balance -= amount;
    cout << amount << " is debited and current balance is: " << balance << endl;
  }
}

int main() {

  Customer p("Patra Kirsani", 5000, 1010);
  p.Deposite(100);
  p.withdraw(50);

  return 0;
}