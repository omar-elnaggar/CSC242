#include <iostream>
#include "account.h"
using namespace std;

void printMenu();
void displayBalance(Account a);
void deposit(Account *a);
void withdraw(Account *a);

int main() {

    // (b)	We assume that this ATM machine holds account for only 10 people.
    // So, use an array to store client’s account balance. Suppose all accounts start with an initial balance of $1000.
    Account accounts[10];
    bool flag = false; // control for program loop
    int input = 0;
    int accountNumber = -1;
    double amount = 0.0;
    bool signedIn = false;

    while (!flag) {
        printMenu();
        cin >> input;
        switch (input){
            case 1: // Sign in
                cout << "Enter your account number: ";
                cin >> accountNumber;
                // If the user enters an incorrect account number the system should give a warning message and display the menu again.
                if (accountNumber > 9 || accountNumber < 0){
                    cout << "Invalid account number" << endl;
                    signedIn = false;
                } else {
                    signedIn = true;
                }
                break;
            case 2: // Balance
                if (!signedIn) {
                    cout << "Sign in to display your current balance" << endl;
                    break;
                }
                displayBalance(accounts[accountNumber]);
                break;
            case 3: // Deposit
                if (!signedIn) {
                    cout << "Sign in to deposit" << endl;
                    break;
                }
                deposit(&accounts[accountNumber]);
                break;
            case 4: // Withdraw
                if (!signedIn) {
                    cout << "Sign in to withdraw" << endl;
                    break;
                }
                withdraw(&accounts[accountNumber]);
                break;
            case 5: // Exit
                if (signedIn) {
                    cout << "Good Bye" << endl;
                    signedIn = false;
                    accountNumber = -1;
                    break;
                } else {
                    cout << "Exiting..." << endl;
                    flag = true;
                    break;
                }
            default:
                cout << "Unknown entry" << endl;
        }
    }

    return 0;
}

// (a)	The system should show the following top menu.
void printMenu() {
    const string menu = 
    "\t1. Sign in\n"
    "\t2. Balance\n"
    "\t3. Deposit\n"
    "\t4. Withdraw\n"
    "\t5. Exit\n";

    cout << menu;
}

void displayBalance(Account a){
    // The system displays the current balance.
    cout << "Balance: $" << a.getBalance() << endl;
    // If balance is below $100, the system should display the message “Low Balance”.
    if (a.getBalance() < 100.0) {
        cout << "Low Balance" << endl;
    }
}

void deposit(Account *a){
    double amount = 0.0;
    int tries = 0;
    // If option menu 3, which is Deposit is selected, write a function to compete the task
    // the system should prompt the user to enter the amount.
    // The ATM machine validates the input by verifying that the input is positive.
    // If not a warning message is displayed “invalid amount”, and the user is prompted to try again,
    do {
        cout << "Enter the amount to deposit: ";
        cin >> amount;
        tries++;
    // if amount is negative again, the deposit operation is terminated and the top menu is displayed again.  
    } while (a->deposit(amount) && tries < 2);
}

void withdraw(Account *a){
    double amount = 0.0;
    int tries = 0;
    do {
        cout << "Enter the amount to withdraw: ";
        cin >> amount;
        tries++;
    } while (a->withdraw(amount)  && tries < 2);
}