
#include <iostream>
#include <string>
#include <vector>

using namespace std;

// Base Employee class
class Employee {
protected:
    string name;
    int employeeId;
    double baseSalary;

public:
    Employee(string n, int id, double salary) : name(n), employeeId(id), baseSalary(salary) {}
    
    virtual double calculateCompensation() = 0;
    virtual void displayInfo() = 0;
    virtual ~Employee() {}
};

// Manager class
class Manager : public Employee {
private:
    double bonus;

public:
    Manager(string n, int id, double salary, double b) 
        : Employee(n, id, salary), bonus(b) {}

    double calculateCompensation() override {
        return baseSalary + bonus;
    }

    void displayInfo() override {
        cout << "Employee Information (Manager):" << endl;
        cout << "Name: " << name << endl;
        cout << "Employee ID: " << employeeId << endl;
        cout << "Base Salary: " << baseSalary << endl;
        cout << "Bonus: " << bonus << endl;
        cout << "Total Compensation: " << calculateCompensation() << endl;
    }
};

// Developer class
class Developer : public Employee {
private:
    int experienceLevel;

public:
    Developer(string n, int id, double salary, int exp) 
        : Employee(n, id, salary), experienceLevel(exp) {}

    double calculateCompensation() override {
        return baseSalary + (experienceLevel * 1000);
    }

    void displayInfo() override {
        cout << "Employee Information (Developer):" << endl;
        cout << "Name: " << name << endl;
        cout << "Employee ID: " << employeeId << endl;
        cout << "Base Salary: " << baseSalary << endl;
        cout << "Experience Level: " << experienceLevel << endl;
        cout << "Total Compensation: " << calculateCompensation() << endl;
    }
};

// Salesperson class
class Salesperson : public Employee {
private:
    double salesAmount;

public:
    Salesperson(string n, int id, double salary, double sales) 
        : Employee(n, id, salary), salesAmount(sales) {}

    double calculateCompensation() override {
        return baseSalary + (salesAmount * 0.05); // 5% commission
    }

    void displayInfo() override {
        cout << "Employee Information (Salesperson):" << endl;
        cout << "Name: " << name << endl;
        cout << "Employee ID: " << employeeId << endl;
        cout << "Base Salary: " << baseSalary << endl;
        cout << "Sales Amount: " << salesAmount << endl;
        cout << "Total Compensation: " << calculateCompensation() << endl;
    }
};

int main() {
    // Create employee objects using base class pointers
    Employee* manager = new Manager("ABC", 123, 5000, 2000);
    Employee* developer = new Developer("DEF", 456, 4000, 3);
    Employee* salesperson = new Salesperson("GHI", 789, 3000, 10000);

    // Display information using polymorphism
    manager->displayInfo();
    cout << endl;
    developer->displayInfo();
    cout << endl;
    salesperson->displayInfo();

    // Clean up memory
    delete manager;
    delete developer;
    delete salesperson;

    return 0;
}
