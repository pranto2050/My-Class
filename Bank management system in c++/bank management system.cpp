#include <iostream>
#include <string>

using namespace std;

class Bank {
protected:
    string name;
    int balance;
public:
     Bank(string accName, int accBalance) {
        name = accName;
        balance = accBalance;
    }
    friend void displayAccountDetails(Bank account);
};
void displayAccountDetails(Bank account) {
    cout << "Account Holder: " << account.name << endl;
    cout << "Account Balance: " << account.balance << endl;
}

int main() {
    Bank account("John Doe", 1000);
    displayAccountDetails(account);

    return 0;
}