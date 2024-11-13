


#include <iostream>
using namespace std;

class students{
    public:
    void print();
};
// Scope resolution operator ' :: '
void students :: print(){ 
    cout << "I am Pranto" << endl;
};
int main() {
    students student_one; // declare student
    student_one.print();
    return 0;
}
