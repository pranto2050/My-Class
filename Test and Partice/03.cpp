



#include <iostream>
using namespace std;

class students{
    private:
        int roll;
        string name;
    public:
students(){
    cout << "This Is Our School: " << endl;
};
students(int r, string n){
    roll = r;
    name = n;
    cout << "Roll: " << roll << " Name: " << name << endl;
};
students(int r);
};
students::students(int r){
    roll = r;
    cout << "Roll: " << roll << endl;
};

int main() {
    students student_one;
    students student_two(1, "Pranto");
    students student_three(23303101);
    
    return 0;
};

