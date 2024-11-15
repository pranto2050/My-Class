

#include <iostream>
using namespace std;
// Class -------------------> Class is a user define data type which is used to define the properties and behavior of an object.
class sum {
    public: // Access Specifier (Public)
        int a, b; // Data Member
        void getdata() { // Member Function
            cout << "Enter two number: "; // Output
            cin >> a >> b; // Input
        }
        void display() { // Member Function
            cout << "Sum of " << a << " + " << b << " = " << a + b << endl;
        }
};

int main() { // Main Function
    sum s;
    s.getdata(); // Member Function Call
    s.display(); // Member Function Call
    return 0;
}