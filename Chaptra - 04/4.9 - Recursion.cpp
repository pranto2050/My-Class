

// C++ program to calculate factorial of a number using recursion

#include <iostream>
using namespace std;

// Function to calculate factorial using recursion
int factorial(int n) {
    if (n == 0) { // Base case
        return 1;
    }
    return n * factorial(n - 1); // Recursive call
}

int main() { // Main function
    int number = 5; // Number to calculate factorial
    cout << "Factorial of " << number << " is " << factorial(number) << endl;
    return 0;
}
// Output: Factorial of 5 is 120
