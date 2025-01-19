

// Docktor management system it's Input data and stor in array and display use function for display data
#include <iostream>
using namespace std;
class Doctor
{
    private:
        int id;
        string name;
        string department;
    public:
    void setDoctorData(int id, string name, string department)
    {
        this->id = id;
        this->name = name;
        this->department = department;
    }
    void getDoctorData()
    {
        cout << "ID: " << id << " Name: " << name << " Department: " << department << endl;
    }
};

int main()
{
    Doctor doc[5];
    int id;
    string name;
    string department;
    for (int i = 0; i < 5; i++)
    {
        cout << "Enter ID: ";
        cin >> id;
        cout << "Enter Name: ";
        cin.ignore(); // To clear the input buffer
        getline(cin, name);
        cout << "Enter Department: ";
        getline(cin, department);
        doc[i].setDoctorData(id, name, department);
    }
    for (int i = 0; i < 5; i++)
    {
        doc[i].getDoctorData();
    }
    return 0;
}