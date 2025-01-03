


// Operator Overloading (Decrement)

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
        Complex operator --(){
            a--;
            b--;
            return Complex(a, b);
        }
};
int main() {
    cout << "Name: Md.Pranto Ali" << "Id: 23303101" << endl; 
    Complex c1(2, 3);
    Complex c2 = --c1; // c2 = c1.operator--();
    c2.display();
    return 0;
};
