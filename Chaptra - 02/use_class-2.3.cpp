// Used Class C++

#include <iostream>
using namespace std;
// Class-----
class Student{
    public: // Object Type
    string name; // Object
    int id; // Object
    int age; // Object
};
// Main Function---
int main() {
    Student student1;
    student1.id = 10;
    student1.name = "John";
    student1.age = 18;
    cout << student1.name << endl << student1.id << student1.age <<endl;
    
    return 0;
}