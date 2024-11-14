



#include <iostream>
using namespace std;
int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    return n * factorial(n - 1);
};

int main() {
    int number;
    cout << "Inter a Number: ";
    cin >> number;
    int result = factorial(number);
    cout << "The factorial is " << result << endl;
    return 0;
}
