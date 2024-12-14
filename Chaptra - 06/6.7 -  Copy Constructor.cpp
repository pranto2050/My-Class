/*
In C++, a Copy Constructor is a special type of constructor used to create a new object 
as a copy of an existing object. 
The syntax for a copy constructor is similar to that of a normal constructor, 
but it takes a reference to an object of the same class as its parameter.
*/
#include <iostream>
using namespace std;
// Copy Constructor Example in C++
class Example {
    int x;
public:
    Example(int val){
        x = val;
    }; // Parameterized constructor
    // Copy Constructor
    Example(Example &obj){
        x = obj.x;
        cout << "Copy Constructor Called" << endl;
    };
    void display() {
        cout << "Value of x: " << x << endl;
    };
};
// Main function
int main() {
    cout << "Name: MD.Pranto Ali" << endl << "ID: 23303101" << endl;
    Example obj1(10);  // Calls parameterized constructor
    Example obj2 = obj1;  // Calls copy constructor
    cout << "Object 1: " << endl;
    obj1.display();
    cout << "Object 2: " << endl;
    obj2.display();
    return 0;
}
