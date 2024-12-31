
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
    int roll;
    string name;
    cout << "Enter roll number: ";
    cin >> roll;
    cout << "Enter name: ";
    cin >> name;
    
    students student_two;
    student_two.set(roll, name);
    student_two.get();
    return 0;
}