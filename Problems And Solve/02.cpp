/*

Problem 2: Parameterized Constructor
Create a class Circle with a private member radius. 
Write a parameterized constructor to initialize the radius. 
Add a member function to calculate and display the circumference of the circle
 (Circumference = 2 * π * radius).

*/

#include <iostream>
using namespace std;
class Circle{
private:
    double radius;
public:
    Circle(double i){
        radius = i;
    };
    void display(){
        double result = 2 * 3.1416 * radius;
        cout << "circumference of the circle: " << result << endl;
    };
};

int main(){
    Circle i(10.5);
    i.display();
    return 0;
};