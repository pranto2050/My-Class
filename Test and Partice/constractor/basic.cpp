#include <iostream>
using namespace std;

class bank {
protected:
    int account;
    string name;
public:
    bank(int a, string n) {
        account = a;
        name = n;
    }
    void display() {
        cout << "Account: " << account << endl;
        cout << "Name: " << name << endl;
    }
};

class bank_two : public bank {
protected:
    int balance;
public:
    bank_two(int a, string n, int b) : bank(a, n) {
        balance = b;
    }
    void deposit(int d) {
        balance += d;
    }
    void display() {
        bank::display();
        cout << "Balance: " << balance << endl;
    }
};

int main() {
    bank_two b(12345, "John Doe", 1000);
    b.display();
    b.deposit(500);
    b.display();

    return 0;
}