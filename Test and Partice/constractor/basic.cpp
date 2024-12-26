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

int main() {
    bank b(12345, "John Doe");
    b.display();

    return 0;
}