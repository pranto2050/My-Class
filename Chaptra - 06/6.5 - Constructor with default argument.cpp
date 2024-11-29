


// Constructor with default argument -- in c++


#include <iostream>
using namespace std;

class Student {
private:
    string name;
    int age;

public:
    // Constructor with default arguments
    Student(string studentName = "Md.Pranto Islam", int studentAge = 20) {
        name = studentName; // Parameter name is assigned to the name variable
        age = studentAge; // Parameter age is assigned to the age variable
        cout << "Constructor called: " << name << ", Age: " << age << endl;
    }
};

int main() {
    // Using default values
    Student student1; // Default constructor called: Unknown, Age: 0

    // Providing only the name, age will use the default value
    Student student2("Md.Ikbal Hossain"); // Constructor called: Md.Ikbal Hossain, Age: NULL

    // Providing both name and age
    Student student3("MD.Irfan Islam", 18); // Constructor called: MD.Irfan Islam, Age: 18

    return 0;
}






















