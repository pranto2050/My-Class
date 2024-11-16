

// Default Argument in C++

#include <iostream>
using namespace std;
int sum (int a, int b = 20){ // Default argument is 'b = 20'
    return a + b; // Return the sum of 'a' and 'b'
};
int main() { // Main function
    int x = 10;
    cout << sum(x) << endl; // Call the function with one argument 
    return 0;
}