


// Constructor -----

#include <iostream>
using namespace std;

class Students {
private:
    string name;
    int age;
public:
    // Default Constructor ----- in c++
    Students() { // Def---
        name = "Md.Pranto";
        age = 20;
        cout << "Default constructor called!" << endl;
    }

    // Parameterized Constructor ---- in c++
    Students(string n, int a) {
        name = n;
        age = a;
        cout << "Parameterized constructor called!" << endl;
    }

    // Copy Constructor ---- in c++
    Students(const Students &p) {  // & Is Mamory address -----
        name = p.name; // 
        age = p.age;
        cout << "Copy constructor called!" << endl;
    }

    void display() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

int main() {
    Students p1; // Default constructor ----- in c++
    p1.display(); // ------- For Output

    Students p2("Santo", 16); // Parameterized constructor 
    p2.display(); // ------- For Output

    Students p3 = p2; // Copy constructor
    p3.display(); // ------- For Output

    return 0;
}
