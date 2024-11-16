


// Inline Function in C++
#include <iostream>
using namespace std;

inline int square(int x) { // Inline function definition use the keyword 'inline' before the return type
    return x + 1; // Function body and return statement
}

int main() { // Main function
    cout << "Square of 5: " << square(5) << endl; // Function call
    cout << "Square of 10: " << square(10) << endl; // Function call
    return 0;
}
