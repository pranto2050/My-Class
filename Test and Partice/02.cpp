
#include <iostream>
using namespace std;
class students{ // Class 
    private:
        int roll;
        string name;
    public:
    void set(int rolls, string names){
        roll = rolls;
        name = names;
    };
    void get(){
        cout << "Roll: " << roll << " Name: " << name << endl;
    };
};
int main() {
    students student_one;
    student_one.set(1, "Rahul");
    student_one.get();
    return 0;
}