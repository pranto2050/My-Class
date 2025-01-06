

// Run time Polymorphism sum of two numbers
#include <iostream>
using namespace std;
class Base {
    public:
        virtual void display() {
            cout << "Display of Base" << endl;
        }
};
class Derived: public Base {
    public:
        void display() {
            cout << "Display of Derived" << endl;
        }
};
int main() {
    Base *b;
    Derived d;
    b = &d;
    b->display();
    return 0;
};