

// 
// 5.4 - Defining Member Function

#include <iostream>
using namespace std;

// Class ------
class Students {
public:

    int roll_no;
    string name;

    // Inside Class Definition
    void display() {
        cout << "Roll No: " << roll_no << endl; // Display Roll No
        cout << "Name: " << name << endl;       // Display Name
    }

    // Declare Outside Class Definition
    void displayss();
};

// Outside Class Definition
void Students::displayss() {
    cout << "Roll No (from displayss): " << roll_no << endl;
    cout << "Name (from displayss): " << name << endl;
};

// Main Function -------
int main() {
    cout << "Md.Pranto Ali" << endl;
    cout << "23303101" << endl;
    Students student1;
    Students student2;
    student1.roll_no = 1; // Data input in roll_no
    student1.name = "Ali"; // Data input in name 
    student1.display();  // Display data of student2 (inside class function)

    // Used Scop Rasulation Operator
    student2.roll_no = 2; // Data input in roll_no
    student2.name = "Ahmed"; // Data input in name
    student2.displayss();  // Display data of student1 (outside class function)

    return 0;
}
