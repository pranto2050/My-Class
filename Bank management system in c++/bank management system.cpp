/*

Using Class, Class name is “Bank_Account” and two attribute
 
1. String account holder Name.
2. Account Balance

Using parameter constructor input Balance and name.
Using method—
1. Display account details
2. Account withdraw and change vallue in main Balance
3. Add balance and change value in main Balance
*/
#include <iostream>
#include <string>
using namespace std;
class Bank_Account {
private:
    string account_holder_name;
    int account_balance;
public:
    // Parameterized constructor
    Bank_Account(string name, int balance) {
        account_holder_name = name;
        account_balance = balance;
    };
    // Display account details----------
    void displayAccountDetails() {
        cout << "Account Holder Name is: " << account_holder_name << endl;
        cout << "Account Balance: " << account_balance << endl << endl;
    };
    // Withdrow from account ------ --
    void withdraw(int amount) {
        if (amount > account_balance) {
            cout << " Insufficient balance!" << endl;
        } else {
            account_balance = account_balance - amount;
            cout << "Withdrawal successful!" << endl << "Your new balance is: " << account_balance << endl << endl;
        };
    };
    // Add balance------ 
    void addBalance(int amount) {
        account_balance = account_balance + amount;
        cout << "Balance added successfully!" << endl << "New balance: " << account_balance << endl << endl;
    };
    ~Bank_Account() {
        cout << "Account Holder Name ";
    };
};
int main() {
    // Object Bank_Account class ------>
    Bank_Account account("Md.Pranto Islam", 99999999);
    // Display account details ------>
    account.displayAccountDetails();
    // Withdraw function Call
    account.withdraw(1);
    // Add balance function Call
    account.addBalance(500);
    // Display letest or Update info
    account.displayAccountDetails();
    // Destructor call
    account.~Bank_Account();
    return 0;
};