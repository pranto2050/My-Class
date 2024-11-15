


// User Define Data Type
/*
    Two type of user define data type:
    1. Structure
    2. Class
*/


// Structure -------------------> Structure is a user define data type which is used to define the properties of an object.
// #include <iostream>
// using namespace std;

// struct students {
//     int roll;
//     string name;
//     float marks;
// };// end of structure

// int main() {
//     students subur;
//     subur.roll = 101;
//     subur.name = "Subur";
//     subur.marks = 99.99;
//     cout << "Roll: " << subur.roll << endl; // Roll: 101
//     cout << "Name: " << subur.name << endl; // Name: Subur
//     cout << "Marks: " << subur.marks << endl; // Marks: 99.99
//     return 0;
// }


// Class -------------------> Class is a user define data type which is used to define the properties and behavior of an object.
#include <iostream>
using namespace std;
class students {
    public:
        int roll;
        string name;
        float marks;
};// end of class
int main() {
    students subur;
    subur.roll = 101;
    subur.name = "Subur";
    subur.marks = 99.99;
    cout << "Roll: " << subur.roll << endl; // Roll: 101
    cout << "Name: " << subur.name << endl; // Name: Subur
    cout << "Marks: " << subur.marks << endl; // Marks: 99.99
    return 0;
}
