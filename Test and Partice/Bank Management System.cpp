#include <iostream>
using namespace std;
// Base class for bank account
class BankBase {
protected:
    string name;
    int account_number;
    string account_type;
    double balance;
public:
    // Constructor for BankBase class
    BankBase(string n, int a, string t, double b) {
        name = n;
        account_number = a;
        account_type = t;
        balance = b;
    };
    // Function to display account details
    void print() {
        cout << "Name: " << name << endl;
        cout << "Account Number: " << account_number << endl;
        cout << "Account Type: " << account_type << endl;
        cout << "Balance: " << balance << endl;
    };
};
// Derived class for deposit operation
class DepositAccount : public BankBase {
private:
    double deposit_balance;
public:
    // Constructor for DepositAccount class
    DepositAccount(string n, int a, string t, double b, double deposit)
        : BankBase(n, a, t, b) {
        deposit_balance = deposit;
        balance += deposit_balance; // Adding deposit to balance
    };
    // Function to display deposit details
    void printd() {
        cout << "Deposit Successful!" << endl;
        cout << "Deposited Amount: " << deposit_balance << endl;
        print(); // Call base class print
    };
};
// Derived class for withdrawal operation
class WithdrawAccount : public BankBase {
private:
    double withdraw_amount;
public:
    // Constructor for WithdrawAccount class
    WithdrawAccount(string n, int a, string t, double b, double withdraw)
        : BankBase(n, a, t, b) {
        withdraw_amount = withdraw;
        if (withdraw_amount > balance) {
            cout << "Error: Insufficient Balance!" << endl;
            withdraw_amount = 0; // No withdrawal if insufficient balance
        }
        else {
            balance -= withdraw_amount; // Deduct withdrawal from balance
        };
    };
    // Function to display withdrawal details
    void printw() {
        cout << "Withdrawal Successful!" << endl;
        cout << "Withdrawn Amount: " << withdraw_amount << endl;
        print(); // Call base class print
    };
};
int main() {
    // Create a deposit account and display details
    DepositAccount account1("Alice", 101, "Savings", 1000, 500);
    account1.printd();
    cout << endl;
    // Create a withdrawal account and display details
    WithdrawAccount account2("Bob", 102, "Savings", 1000, 300);
    account2.printw();
    return 0;
};
