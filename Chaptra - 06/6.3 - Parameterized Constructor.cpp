

//  Parameter Constructor -- in c++

#include <iostream>
#include <string>
using namespace std;
class students {
    private:
        string name;
        int age;
        int id;
    public:
        students(string nam, int ag, int ro) {
            name = nam;
            age = ag;
            id = ro;
            cout << "Name: " << name << endl << "Age: " << age << endl;
            cout << "ID: " << id << endl;
        };
};

int main() {
    cout << "Name: MD.Pranto Ali" << endl << "ID: 23303101" << endl;
    students one("Md.Pranto Islam", 20, 23303101);
    return 0;
};




