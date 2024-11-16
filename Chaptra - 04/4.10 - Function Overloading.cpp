

// Function Overloading in C++

#include <iostream>
using namespace std;

// Overloaded functions is called same name but different parameters all the functions name --->'sum'
void sum(int num1, int num2) {
    cout << "Sum Is Two Number: " << num1 + num2 << endl;
};
// Overloaded functions is called same name but different parameters all the functions name --->'sum'
void sum(int num1, int num2, int num3) {
    cout << "Sum Is Three Number: " << num1 + num2 + num3 << endl;
};
// Overloaded functions is called same name but different parameters all the functions name --->'sum'
void sum(int num1, int num2, int num3, int num4) {
    cout << "Sum Is Four Number: " << num1 + num2 + num3 + num4 << endl;
};

int main() {
    sum(10,10);          // Calls the function with Two Integer parameter
    sum(20,20,20);        // Calls the function with Three Integer parameter
    sum(30,30,30, 30);    // Calls the function with Four Integer parameter
    return 0;
}
