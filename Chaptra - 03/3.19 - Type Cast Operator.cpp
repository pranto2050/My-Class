

// Type of type cast operator in C++
// 1. Implicit Cast
// 2. Explicit Cast

/*
    Explicit Cast--- 
    int a = 10;
    double b = 20.5;
    int sum = a + (int)b; // Explicit cast double to int
*/

// Type Cast Operator in C++ (Implicit Cast)

#include <iostream>
using namespace std;
int main() {
    int a = 10;
    double b = 20.5;
    int sum = a + b; // Implicit cast double to int 
    float c = a + b; // Implicit cast double to float
    cout << "Sum = " << sum << endl;
    cout << "C = " << c << endl;
    // Explicit cast double to int
    int sum1 = a + (int)b; // Explicit cast double to int
    cout << "Sum1 = " << sum1 << endl;
    
    return 0;
}





