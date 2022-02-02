#include <iostream>
using namespace std;

class Account 
{
private:
    double balance;
public:
    Account(){
        balance = 1000.0;
    }

    int deposit(double amount) {
        if (amount > 0.0){
            balance += amount;
            return 0; // valid
        } else {
            cout << "Invalid amount" << endl;
            return 1; // invalid
        }  
    }

    int withdraw(double amount) {
        // If the balance is insufficient, then a warning message along with user’s balance is displayed. 
        if (balance - amount >= 0.0 && amount >= 0.0) {
            balance -= amount;
            return 0; // valid
        } else {
            cout << "Insufficient funds or invalid amount" << endl;
            cout << "$" << getBalance() << endl;
            return 1; // invalid
        }
    }

    double getBalance() { return balance; }

};