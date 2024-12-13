


#include <iostream>
using namespace std;

class Students
{
protected:
    string name;
    string address;
    int phone;
    int ID;
public:
    // Constructor
    Students(string n, string addr, int ph, int id)
    {
        this -> name = n;
        this -> address = addr;
        this -> phone = ph;
        this -> ID = id;
    };

    // Method to display data
    void displayData()
    {
        cout << "Name: " << name << endl;
        cout << "Address: " << address << endl;
        cout << "Phone: " << phone << endl;
        cout << "ID: " << ID << endl;
    }
};
class Student : public Students
{
private:
    string subject;
public:
    // Constructor that calls the base class constructor
    Student(string n, string addr, int ph, int id, string mj)
        : Students(n, addr, ph, id), subject(mj) {}

    // Override displayData to include the major
    void show()
    {
        displayData(); // Call base class displayData
        cout << "subject Is: " << subject << endl;
    }
};

class Pranto : public Students
{
private:
    string dept;
public:
    // Constructor that calls the base class constructor
    Pranto(string n, string addr, int ph, int id, string dept)
        : Students(n, addr, ph, id), dept(dept) {}

    // Override displayData to include the major
    void show()
    {
        displayData(); // Call base class displayData
        cout << "Dept Is: " << dept << endl;
    }
};

int main()
{
    // Create an object of the derived class
    Student s1("Alice", "123 Main St", 1234567890, 101, "Computer Science");

    // Display the data
    s1.show();

    Pranto p1("Pranto", "123 Main St", 1234567890, 101, "Computer Science");

    p1.show();

    return 0;
}