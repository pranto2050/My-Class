

// Reference Variables in C++


#include <iostream>
using namespace std;

int main() {
    int x = 10;
    int &ref = x;  // ref is a reference to x variable --> Here is ' & ' is a reference operator

    cout << "x: " << x << endl; // Print the value of x
    cout << "ref: " << ref << endl; // Print the value of ref

    ref = 20;  // Changing the value through the reference
    cout << "x after modifying ref: " << x << endl; // Print the value of x

    return 0;
}
