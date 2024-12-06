
#include <iostream>
using namespace std;

class Calculator {
private:
    int num1, num2;

public:
    Calculator(int a, int b) {
        num1 = a;
        num2 = b;
    }

    // Friend function declaration
    friend int sum(Calculator calc);
};

// Friend function definition
int sum(Calculator calc) {
    return calc.num1 + calc.num2;
}

int main() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    Calculator calc(a, b);
    cout << "Sum: " << sum(calc) << endl;

    return 0;
}