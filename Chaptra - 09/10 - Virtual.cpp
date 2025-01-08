#include <iostream>
using namespace std;

class Employee {
protected:
    string name;
    int id;
    double salary;
public:
    Employee(string x, int y, double z){
        name = x;
        id = y;
        salary = z;
    }
    virtual void display() = 0; // Pure virtual function
};

class Manager : public Employee {
protected:
    double bonus;
    double total_salary;

public:
    Manager(string x, int y, double z, double b) : Employee(x, y, z){
        bonus = b;
        total_salary = salary + bonus; // Calculate total_salary in constructor
    }
    void display() override {
        cout << "Name: " << name << endl;
        cout << "ID: " << id << endl;
        cout << "Salary: $" << salary << endl;
        cout << "Bonus: $" << bonus << endl;
        cout << "Total Salary: $" << total_salary << endl;
    }
};

int main() {
    Manager manager1("John Doe", 101, 5000.0, 1500.0);
    manager1.display(); 

    return 0;
}
