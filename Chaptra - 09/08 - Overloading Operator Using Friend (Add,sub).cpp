// Overloading Operator Using Friend (Add,sub) 10 and 20
#include<iostream>
using namespace std;
class A
{
    int x, y;
public:
    A(int a, int b) { x = a; y = b; }
    void display() { cout << "x = " << x << " y = " << y << endl; }
    friend A operator+(A, A);
    friend A operator-(A, A);
};
A operator+(A a, A b)
{
    A temp(0, 0);
    temp.x = a.x + b.x;
    temp.y = a.y + b.y;
    return temp;
}
A operator-(A a, A b){
    A temp(0, 0);
    temp.x = a.x - b.x;
    temp.y = a.y - b.y;
    return temp;
}
int main()
{
    A a1(10, 20), a2(20, 30), a3(0, 0);
    a1.display();
    a2.display();
    a3 = a1 + a2;
    a3.display();
    a3 = a1 - a2;
    a3.display();
    return 0;
}