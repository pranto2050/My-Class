


// Scope resolution operator (::) is used to access global variables when there is a local variable with the same name.

#include <iostream>
using namespace std;

int x = 10;  // Global variable
int y = 20;  // Global variable

int main() {
    int x = 20;  // Local variable
    cout << "Local x: " << x << endl; // Access local variable
    cout << "Global x: " << ::x + ::y << endl;  // Access global variable and add get the sum of global variable
    return 0;
}