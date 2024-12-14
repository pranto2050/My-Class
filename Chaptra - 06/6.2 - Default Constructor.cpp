#include <iostream>
using namespace std;
class Students {
private:
    string name;
    int age;
public:
    // Default Constructor
    Students() { // Default constructor
        name = "Md.Pranto";
        age = 20;
        cout << "Name: " << name << ", Age: " << age << endl;
    };
};
int main() {
    cout << "Name: MD.Pranto Ali" << endl << "ID: 23303101" << endl;
    Students p1; // Default constructor called
    return 0;
};