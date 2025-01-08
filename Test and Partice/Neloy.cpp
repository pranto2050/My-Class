#include<iostream>
using namespace std;

class BankAccount {
protected:
    int acc_num;
    string acc_name;
    double balance;
public:
    BankAccount(int n, string a, double b = 100) {
        acc_num = n;
        acc_name = a;
        balance = b;
    }
    void deposit() {
        double x;
        cout << "Enter deposit amount: ";
        cin >> x;
        balance += x;
    }
    void display() {
        cout << "Account Number: " << acc_num << endl;
        cout << "Account Name: " << acc_name << endl;
        cout << "Balance: " << balance << endl;
    }
};

int main() {
    BankAccount obj(233, "Niloy", 2000);
    obj.deposit();
    obj.display();
    return 0;
}