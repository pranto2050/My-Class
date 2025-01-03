

// Overloading Operators addition using Friend

#include <iostream>
using namespace std;
class Complex{
    private:
        int a, b;
    public:
    Complex(int x, int y){
            a = x;
            b = y;
        }
    void display(){
            cout << "Complex number: " << a << " + " << b << "i" << endl;
        }
    friend Complex operator +(Complex c1, Complex c2);
};
Complex operator +(Complex c1, Complex c2){
    return Complex(c1.a + c2.a, c1.b + c2.b);
}
int main() {
    Complex c1(3, 2);
    Complex c2(4, 5);
    Complex c3 = c1 + c2; // c3 = operator+(c1, c2);
    c3.display();
    return 0;
}