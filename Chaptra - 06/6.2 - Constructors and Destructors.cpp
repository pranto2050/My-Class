


// Constructor -----

#include <iostream>
using namespace std;

class Person {
private:
    string name;
    int age;
public:
    // Default Constructor
    Person() {
        name = "Unknown";
        age = 0;
        cout << "Default constructor called!" << endl;
    }

    // Parameterized Constructor
    Person(string n, int a) {
        name = n;
        age = a;
        cout << "Parameterized constructor called!" << endl;
    }

    // Copy Constructor
    Person(const Person &p) {
        name = p.name;
        age = p.age;
        cout << "Copy constructor called!" << endl;
    }

    void display() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

int main() {
    Person p1; // Default constructor
    p1.display();

    Person p2("John", 25); // Parameterized constructor
    p2.display();

    Person p3 = p2; // Copy constructor
    p3.display();

    return 0;
}
