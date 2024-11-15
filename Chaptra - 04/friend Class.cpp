


#include <iostream>
using namespace std;




class students{
    private:
    int id = 10;
    int roll = 23222;
    public:
    friend class student;

};

class student{
    public:
    void display(students dtl){
        cout << dtl.id << endl;
        cout << dtl.roll << endl;
    };
};
int main() {
    students one;
    student two;
    two.display(one);
    
    return 0;
}