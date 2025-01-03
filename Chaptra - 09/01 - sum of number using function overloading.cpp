#include <iostream>
using namespace std;
class adition_numbers {
    public:
    void sum(int a, int b) {
        cout << a + b << endl;
    };
    void sum(double a, double b, double c) {
        cout << a + b + c << endl;
    };
    void sum(float a, float b, float c) {
        cout << a + b + c << endl;
    };
};
int main() {
    cout << "Name: Md.Pranto Ali" << "Id: 23303101" << endl; 
    adition_numbers obj;
    cout << "Call First Function:" << endl;
    obj.sum(5, 6);
    cout << "Call Secound Function:" << endl;
    obj.sum(5.5, 6.6, 7.7);
    cout << "Call Third Function:" << endl;
    obj.sum(8.5, 2.6, 88.7);
    return 0;
}