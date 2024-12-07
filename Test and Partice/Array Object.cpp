#include <iostream>
#include <string> // Include for the string data type
using namespace std;

class Students {
private:
    int id;
    string name;

public:
    void setValue(int idNumber, string studentName) {
        this->id = idNumber;
        this->name = studentName;
    }

    void displayValue() {
        cout << "ID: " << id << ", Name: " << name << endl;
    }
};

int main() {
    Students student_one[10];

    for (int i = 0; i < 10; i++) {
        int idNumber;
        string studentName;

        cout << "Enter ID for student " << i + 1 << ": ";
        cin >> idNumber;
        cin.ignore(); // To clear the input buffer

        cout << "Enter Name for student " << i + 1 << ": ";
        getline(cin, studentName);

        student_one[i].setValue(idNumber, studentName);
    }

    cout << "\nDisplaying Student Information:\n";
    for (int i = 0; i < 10; i++) {
        student_one[i].displayValue();
    }

    return 0;
}
