

#include <iostream>
using namespace std;

class Complex {
private:
    float real, imag;
public:
    Complex(float r = 0, float i = 0){
        real = r;
        imag = i;
    };

    // Overloading the + operator
    Complex operator + (Complex& obj) {
        return Complex(real + obj.real, imag + obj.imag);
    }

    void display() {
        cout << real << " + " << imag << "i" << endl;
    }
};

int main() {
    Complex c1(3.5, 2.5), c2(1.5, 4.5);
    Complex c3 = c1 + c2;  // Calls overloaded +
    c3.display();           // Output: 5 + 7i
    return 0;
}
