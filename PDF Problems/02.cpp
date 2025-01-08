

#include <iostream>
using namespace std;
class Account{
    private:
    int accountNumber;
    string accountHolderName;
    double balance;
    public:
    Account(int number, string name, double initialBalance){
        accountNumber = number;
        accountHolderName = name;
        balance = initialBalance;
    };
    void depositAccount(double amount){
        balance += amount;
        cout << "Deposit successful. New balance is: $" << balance << endl;
    };
    void withdrawAccount(double amount){
        if(balance < 0 && balance < amount){
            cout << "Invalid" << endl;
        }
        else{
            balance -= amount;
            cout << "Withdrawal successful. New balance is: $" << balance << endl;
        };
    };
    void displayAccountInfo(){
        cout << "Account Number: " << accountNumber << endl;
        cout << "Account Holder Name: " << accountHolderName << endl;
        cout << "Current Balance: $" << balance << endl;
    };
};





int main() {
    Account myAccount(12345, "John Doe", 1000.00);
    myAccount.displayAccountInfo();
    cout << endl << endl;
    myAccount.depositAccount(500.00);
    cout << endl << endl;
    myAccount.withdrawAccount(2000.00);
    cout << endl << endl;
    myAccount.displayAccountInfo();
    cout << endl << endl;
    
    return 0;
}