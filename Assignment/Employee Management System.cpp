#include <iostream>
#include <string>
using namespace std;
class Employee{
protected:
    string Empoly_name;
    int employee_Id;
    double baseSalary;
public:
    Employee(string n, int id, double salary){
        Empoly_name=n;
        employee_Id=id;
        baseSalary=salary;
    }
    virtual double calculate_salary(){
        return baseSalary;
    }
    virtual void displayInfo()
    {
        cout << "Name: " << Empoly_name << endl;
        cout << "Employee ID: " << employee_Id << endl;
        cout << "Base Salary: " << baseSalary << endl;
    }
};


class Manager : public Employee
{
private:
    double bonus;

public:
    Manager(string n, int id, double salary, double b) : Employee(n, id, salary){
        bonus = b;
    }

    double calculate_salary() override{
        return baseSalary + bonus;
    }
    void displayInfo() override {
        cout << "Employee Information (Manager Section):" << endl;
        Employee::displayInfo();
        cout << "Bonus: " << bonus << endl;
        cout << "Total Compensation: " << calculate_salary() << endl;
    }
};

class Developer : public Employee{
private:
    int experienceLevel;
public:
    Developer(string n, int id, double salary, int expLevel) : Employee(n, id, salary){
        experienceLevel = expLevel;
    }
    double calculate_salary() override{
        return baseSalary + (1000 * experienceLevel);
    }
    void displayInfo() override {
        cout << "Employee Information (Developer Section):" << endl;
        Employee::displayInfo();
        cout << "Experience Level: " << experienceLevel << endl;
        cout << "Total: " << calculate_salary() << endl;
    }
};

class Salesperson : public Employee{
private:
    double salesAmount;
public:
 Salesperson(string n, int id, double salary, double sales) : Employee(n, id, salary), salesAmount(sales) {}

    double calculate_salary() override{
        return baseSalary + (0.05 * salesAmount);
    }
    void displayInfo() override{
        cout << "Employee Information (Salesperson Section):" << endl;
        Employee::displayInfo();
        cout << "Sales Amount: " << salesAmount << endl;
        cout << "Total Compensation: " << calculate_salary() << endl;
    }
};
int main(){
   cout << "Name: Md.Pranto Ali" << endl << "ID: 23303101" << endl << endl;
    Manager manager("Pranto", 23303101, 240494, 2332);
    Developer developer("Santo", 45623, 403300, 6);
    Salesperson salesperson("Rohan", 343, 7700, 100);

    Employee* employees[3];
    employees[0] = &manager;
    employees[1] = &developer;
    employees[2] = &salesperson;

    employees[0]->displayInfo();
    cout << endl;
    employees[1]->displayInfo();
    cout << endl;
    employees[2]->displayInfo();
    return 0;
}

