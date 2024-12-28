


/*

Problem 4: Constructor Overloading
Create a class Box with private members length, width, and height. Implement:

    1. A default constructor that sets all dimensions to 1.
    2. A parameterized constructor to initialize the dimensions with user-specified values.
    3. A member function to calculate and display the volume of the box.

*/

#include <iostream>
using namespace std;
class Box{
    private:
        double length;
        double width;
        double height;

    public:
    // Default constructor
        Box(){
            length = 1;
            width = 1;
            height = 1;
        };
    // Parameterized constructor
    Box(double l, double w, double h){
            length = l;
            width = w;
            height = h;
        };
// Member function to calculate and display the volume of the box
        void volume(){
            cout << "Volume: " << length * width * height << endl;
        };
};


int main(){
    Box b1; // Default constructor
    b1.volume(); // Output: Volume: 1
    Box b2(10, 20, 30); // Parameterized constructor
    b2.volume(); // Output: Volume: 6000
    return 0;
};





