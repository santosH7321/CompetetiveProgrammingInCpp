#include <iostream>
using namespace std;

class BankAccount {
private:
    string accountNumber;
    double balance;  // Private attribute

public:
    // Constructor
    BankAccount(string accNum, double bal) {
        accountNumber = accNum;
        balance = bal;
    }

    // Public method to access the private balance attribute
    double getBalance() {
        return balance;
    }

    // Public method to modify the private balance attribute
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
        } else {
            cout << "Invalid deposit amount!" << endl;
        }
    }

    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
        } else {
            cout << "Invalid or insufficient funds!" << endl;
        }
    }
};

int main() {
    // Create an object of BankAccount
    BankAccount account("123456789", 1000);

    // Access balance using getter method
    cout << "Balance: " << account.getBalance() << endl;  // Output: 1000

    // Deposit money
    account.deposit(500);
    cout << "Balance: " << account.getBalance() << endl;  // Output: 1500

    // Withdraw money
    account.withdraw(300);
    cout << "Balance: " << account.getBalance() << endl;  // Output: 1200

    // Direct access to balance is not allowed
    // cout << account.balance;  // This will cause a compile-time error

    return 0;
}
