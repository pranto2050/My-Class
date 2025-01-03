


// Finding Area of Circle , Rectangle and square Using Polymorphism

#include<iostream>
using namespace std;
class Area {
    public:
    void find_area(double r) {
        cout << "Area of Circle: " << 3.14 * r * r << endl;
    };
    void find_area(double l, double b) {
        cout << "Area of Rectangle: " << l * b << endl;
    };
    void find_area(double s, double s1, double s2) {
        cout << "Area of Square: " << s * s1 * s2 << endl;
    };
};
int main() {
    cout << "Name: Md.Pranto Ali" << "Id: 23303101" << endl; 
    Area obj;
    cout << "Call First Function:" << endl;
    obj.find_area(5);
    cout << "Call Secound Function:" << endl;
    obj.find_area(5, 6);
    cout << "Call Third Function:" << endl;
    obj.find_area(5, 5, 5);
    return 0;
};