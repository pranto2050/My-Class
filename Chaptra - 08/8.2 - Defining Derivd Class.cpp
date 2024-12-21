

// 8.2 - Defining Derivd Class
#include <iostream>
using namespace std;
// Base Class
class Animal {
public:
    void display() { // Display function
        cout << "This is Animal Class." << endl;
    };
};
// Derived Class
class Dog : public Animal {
public:
    void print() { // Display function
        cout << "This is Dog Class" << endl;
    };
};

int main() {
    Dog dogObj;
    dogObj.display();  // Inherited from the base class
    dogObj.print(); // Defined in the derived class
    return 0;
};
