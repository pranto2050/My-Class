

//  Parameter Constructor -- in c++

#include <iostream>
#include <string>
#include <sum.h>
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
    students one("Rahim", 20, 23303101);
    return 0;
};




