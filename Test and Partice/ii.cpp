#include <iostream>
using namespace std;

int c = 45; // Global variable

int main() {
    int a, b, c; // Local variables
    cout << "Enter the value of a: " << endl;
    cin >> a;
    cout << "Enter the value of b: " << endl;
    cin >> b;
    c = a + b; // Local `c` is assigned
    cout << "The value of local c (a + b): " << c << endl;
    cout << "The value of global c: " << ::c << endl; // Access global `c`
    return 0;
}
