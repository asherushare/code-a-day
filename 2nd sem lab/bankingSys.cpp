// #include <bits\stdc++.h>
// using namespace std;

// class bankingSys {

//   public:
//     double inBal;
//     double rateInt;

//   bankingSys(double inbal, double rateint) {
//     inBal = inbal;
//     rateInt = rateint;
//   }

//   void deposite(double amount) {
//     inBal = inBal + amount;
//     cout << "Deposit successful. New bal is: " << inBal << endl;
//   }

//   void withdraw(double withdr) {
//     if(inBal < withdr) {
//       cout << "Your balance is insufficient.";
//     }
//     else {
//       inBal = inBal - withdr;
//       cout << "New balance is: " << inBal << endl;
//     }
//   }

//   void compoundInterest() {

//   }

//   void displayBal() {
    
//   }

//   void menu() {
//     cout << "1. deposit" << endl;
//     cout << "2. withdraw" << endl;
//     cout << "3. find compund interest" << endl;
//     cout << "4. to display balance" << endl;
//     cout << "5. Exit" << endl;
//   }

//   void destroy() {

//   }

// };

// int main() {

//   double initialBal;
//   double rateofInt;

//   cout << "Enter initial balance: ";
//   cin >> initialBal;

//   cout << "Enter the rate of Interest: ";
//   cin >> rateofInt;

//   bankingSys Banking(initialBal, rateofInt);

//   int choice;
//   do {
//     bankingSys.menu() {
//       cout << "Enter your choice: ";
//       cin >> choice;
//     }

//     switch(choice) {
//       case 1: 
//       double depoAmount;
//       cout << "Enter deposit amount: ";
//       cin >> depoAmount;
//       bankingSys.deposit(depoAmount);
//       break;

//       case 2: 
//       double withdrwoAmount;
//       cout << "Enter withdrawl amount: ";
//       cin >> withdrwoAmount;
//       bankingSys.withdraw(withdrwoAmount);
//       break;
//     }
//   }

//   return 0;
// }