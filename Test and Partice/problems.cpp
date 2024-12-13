
// Sum Of two numbers 1 + 10 = 11
// What is the Dinamic memiry allocation
// What is the static memory allocation

#include <iostream>
using namespace std;

int x = 10;  // Global variable
int y = 20;  // Global variable

int main() {
    int x = 20;  // Local variable
    cout << "Local x: " << x << endl;
    cout << "Global x: " << ::x + ::y << endl;  // Access global variable
    return 0;
};
