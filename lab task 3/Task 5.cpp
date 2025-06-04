#include <iostream>
using namespace std;

class BankAccount {
private:
    string accountNumber;
    double balance;

public:
    BankAccount(string accNum, double initialBalance) {
        accountNumber = accNum;
        if (initialBalance >= 0) {
            balance = initialBalance;
        } else {
            balance = 0;
            cout << "Invalid initial balance. Setting to 0." << endl;
        }
    }

    double getBalance() {
        return balance;
    }

    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposited: " << amount << endl;
        } else {
            cout << "Deposit amount must be positive!" << endl;
        }
    }

    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "Withdrawn: " << amount << endl;
        } else {
            cout << "Invalid withdrawal amount or insufficient balance!" << endl;
        }
    }
};

int main() {
    BankAccount myAccount("123456", 500);

    cout << "Initial Balance: " << myAccount.getBalance() << endl;

    myAccount.deposit(100); // Valid deposit
    cout << "Balance: " << myAccount.getBalance() << endl;

    myAccount.deposit(-50); // Invalid deposit
    cout << "Balance: " << myAccount.getBalance() << endl;

    myAccount.withdraw(200); // Valid withdrawal
    cout << "Balance: " << myAccount.getBalance() << endl;

    myAccount.withdraw(600); // Over-withdrawal attempt
    cout << "Balance: " << myAccount.getBalance() << endl;

    return 0;
}

