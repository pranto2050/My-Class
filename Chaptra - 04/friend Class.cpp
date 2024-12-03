

// Friend  Class Definition
#include <iostream>
using namespace std;
class students{ // class members
    private:
    int id = 10;
    int roll = 23222;
    public:
    friend class student;
};
class student{ // class members
    public:
    void display(students single_student){
        cout << single_student.id << endl;
        cout << single_student.roll << endl;
    };
};
int main() {
    students one;
    student two;
    two.display(one);
    return 0;
}