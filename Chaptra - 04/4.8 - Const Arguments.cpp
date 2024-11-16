


// Const Arguments in C++
// In C++, you can pass arguments to a function as const. This means that the function cannot modify the value of the argument.
#include <iostream>
using namespace std;

void display(const int num) { // Function definition with a const argument
    // num = num + 10; // Error: Cannot modify a const variable
    cout << "Number: " << num << endl;
};

int main() { // Main function
    int x = 5;
    display(x);
    return 0;
}
// Output: Number: 5