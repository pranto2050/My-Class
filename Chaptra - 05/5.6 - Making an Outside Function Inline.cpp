


// 5.6 - Making an Outside Function Inline

#include <iostream>
using namespace std;

// Inline function definition
inline int multiply(int a, int b) { // 'Inline' Keyword Then make general Function....
    return a * b;
};

int main() {
    int x = 5, y = 10; 
    int result = multiply(x, y);
    // Using the inline function
   cout << "Result is: " << result << endl;

    return 0;
};
