



/*

Problem 1: Default Constructor ---- 
Write a class Rectangle that has two private members: 
length and width. Create a default constructor that initializes both values to 0.
Write a member function to calculate and display the area of the rectangle.

*/

#include <iostream>
using namespace std;
class Rectangle{   
    private:
        double length;
        double width;
    public:
        Rectangle()
        {
            length = 0;
            width = 0;
        }
        void area()
        {
            cout << "Area: " << length * width << endl;
        }
};

int main(){
    Rectangle r;
    r.area();
    return 0;
}