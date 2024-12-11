

// Inheritance in c++

#include <iostream>
using namespace std;

class students{ // Base class
    public:
    string name;
    int age;
    int roll;

    void Display(){
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Roll: " << roll << endl;
    };
};
class stude: public students{ // Child class
    public:
   void Display(){
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "ID: " << roll << endl;
    };
};



int main() {
    stude s1;
    s1.name = "Pranto";
    s1.age = 21;
    s1.roll = 123456;
    s1.Display();
    
    return 0;
}














































