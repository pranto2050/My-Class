// C++ program to illustrate Single Inheritance 
#include <iostream> 
using namespace std; 

class A { 
protected: 
    string name;
    int id;
public:  
    void display(){ 
        cout << "Name: " << name << endl; 
        cout << "ID: " << id << endl; 
    }
}; 
// Child classes inherit features of parent class
class B : public A { 
public: 
    B(){ 
        name = "Md. Pranto Islam"; 
        id = 23303101; 
    } 
}; 
// Main function for creating objects and calling functions 
int main() { 
    cout << "Name: MD.Pranto Ali" << endl << "ID: 23303101" << endl;
    B b1;          // Create object of derived class
    b1.display();  // Call the inherited display() function
    return 0; 
}
