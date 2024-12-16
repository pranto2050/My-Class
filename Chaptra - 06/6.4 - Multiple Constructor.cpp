/* 
Multiple : This is known as constructor overloading, 
           which means that a class can have more than one constructor.
 */
#include <iostream>
using namespace std;
class Student {
private:
    string name;
    int age;
public:
    // Default constructor
    Student() { // Default constructor
        name = "Md.Pranto Islam";
        age = 20;
        cout << "Default constructor called: " << name << ", Age: " << age << endl;
    };

    // Parameterized constructor with one argument
    Student(string studentName) { 
        name = studentName;
        age = 0;
        cout << "Constructor with name called: " << name << ", Age: " << age << endl;
    };

    // Parameterized constructor with two arguments
    Student(string studentName, int studentAge) { 
        name = studentName;
        age = studentAge;
        cout << "Constructor with name and age called: " << name << ", Age: " << age << endl;
    };
};


int main() {
    cout << "Name: MD.Pranto Ali" << endl << "ID: 23303101" << endl;
    // Using the default constructor
    Student student1;
    // Using the constructor with one argument
    Student student2("Md.Turjo islam, Pranto"); 
    // Using the constructor with two arguments
    Student student3("Turjo", 200);
    return 0;
};
