#include <iostream>
using namespace std;

int main() {
    int x, y;
    char z;

    cout << "Enter the value of x: ";
    cin >> x;
    cout << "Enter the operator (+, -, *, /): ";
    cin >> z;
    cout << "Enter the value of y: ";
    cin >> y;

    switch (z) {
        case '-':
            cout << "Result: " << (x - y) << endl;
            break;
        case '+':
            cout << "Result: " << (x + y) << endl;
            break;
        case '*':
            cout << "Result: " << (x * y) << endl;
            break;
        case '/':
            if (y != 0) {
                cout << "Result: " << (x / y) << endl;
            } else {
                cout << "Error: Division by zero" << endl;
            }
            break;
        default:
            cout << "Error: Invalid operator" << endl;
    };
}
