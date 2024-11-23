#include <iostream>
#include <string>
using namespace std;
int addNumbers(int num1, int num2) {
    return num1 + num2;
}
int main() {
    cout << "Name: Mostak Shahriar" << endl << "Roll: 23303076"<< endl;
    int a, b;
    cout << "Enter the first number: ";
    cin >> a;
    cout << "Enter the second number: ";
    cin >> b;
    int sum = addNumbers(a, b);
    cout << "The sum of " << a << " and " << b << " is: " << sum << endl;
    return 0;
}

