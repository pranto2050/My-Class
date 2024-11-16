


#include <iostream>
using namespace std;

// Function returning a reference
int& getValue(int &x) {
    return x; // Return reference to x
}

int main() {
    int a = 10;
    // Print the value of 'a' before modification
    cout << "Before: a = " << a << endl;
    //Out put: Before: a = 10

    // Modify the value of 'a' through the returned reference
    getValue(a) = 20;
    // Print the value of 'a' after modification 
    
    cout << "After: a = " << a << endl;
    // Out put: After: a = 20

    return 0;
};
