

#include <iostream>
using namespace std;
// Inline function
inline int add(int a, int b) { // Inline function used to reduce the overhead of function call
    return a + b;
};
int main() {
    int a = 10, b = 20;
    cout << "Sum of " << a << " + " << b << " = " << add(a, b) << endl;
    return 0;
}