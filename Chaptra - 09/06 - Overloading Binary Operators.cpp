// Overloading Binary Operators
#include <iostream>
using namespace std;
class Complex {
    private:
        int a, b;
    public:
    Complex(int x, int y) {
        a = x;
        b = y;
    }
    void display() {
        cout << "Complex number: " << a << " + " << b << "i" << endl;
    }
    Complex operator +(Complex c) {
        return Complex(a + c.a, b + c.b);
    }
};
int main() {
        Complex c1(2, 3);
        Complex c2(3, 4);
        Complex c3 = c1 + c2; // c3 = c1.operator+(c2);
        c3.display();
        return 0;
}