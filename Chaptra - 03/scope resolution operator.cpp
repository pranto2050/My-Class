


#include <iostream>
using namespace std;

class students{
    public:
    void print();
};
// Scope resolution operator ' :: '
void students :: print(){  // Used Scope resolution operator ' :: ' access in print function
    cout << "I am Pranto" << endl;
};
int main() {
    students student_one; // Declare student class object ----> student_one
    student_one.print(); // Call print function of student class object ----> student_one.print()
    return 0;
};




