#include <iostream>
using namespace std;
class Student {
private:
    string name;
    int age;

public:
    Student() {
        name = "Md.Pranto Islam";
        age = 20;
        cout << "Defaut " << name << ", Age: " << age << endl;
    };
    Student(string studentName) {
        name = studentName;
        age = 0;
        cout << "Name " << name << ", Age: " << age << endl;
    };
    Student(string studentName, int studentAge) {
        name = studentName;
        age = studentAge;
        cout << "Name and Age " << name << ", Age: " << age << endl;
    };
};
int main() {
    cout << "Name: MD.Pranto Ali" << endl << "ID: 23303101" << endl;
    Student student1;
    Student student2("Md.Pranto Islam");
    Student student3("Md.Pranto Islam", 20);
    return 0;
}
