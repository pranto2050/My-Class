


#include <iostream>
using namespace std;
// int subject = 5;
class students{
    private:
    int id;
    string name;
    int age;
    int mark[5];
    public:
    void setStudentValue();
    void displayStudent();
};

void students :: setStudentValue(){
    cout<<"Enter Student ID : ";
    cin>>id;
    cout << "Inter Student Name: ";
    cin >> name;
    cout << "Inter Student Age: ";
    cin >> age;
    for(int i = 0; i < 5; i++){
        cout<<"Enter Student Marks " << i + 1 << " :";
        cin >> mark[i];
    };
};
void students :: displayStudent(){
    int total_mark = 0;
    cout << "Student ID : " << id <<endl;
    cout << "Student Name : " << name <<endl;
    cout << "Student Age : " << age <<endl;
    for (int i = 0; i < 5; i++)
    {
        total_mark = total_mark + mark[i];
    }
    cout << "Student Total Mark Is : " << total_mark <<endl;  
};
int main(){
    students fast;
    fast.setStudentValue();
    fast.displayStudent();

    return 0;
};

















// GPT Way -------

// #include <iostream>
// #include <vector> // Include for dynamic arrays
// using namespace std;

// class Students {
// private:
//     int id;
//     string name;
//     int age;
//     vector<int> marks; // Dynamic array for marks
// public:
//     void setStudentValue(int subject); // Pass the number of subjects
//     void displayStudent();
// };

// void Students::setStudentValue(int subject) {
//     cout << "Enter Student ID: ";
//     cin >> id;
//     cout << "Enter Student Name: ";
//     cin >> name;
//     cout << "Enter Student Age: ";
//     cin >> age;

//     marks.resize(subject); // Resize the vector based on the number of subjects
//     for (int i = 0; i < subject; i++) {
//         cout << "Enter Marks for Subject " << i + 1 << ": ";
//         cin >> marks[i];
//     }
// }

// void Students::displayStudent() {
//     int total_mark = 0;
//     cout << "\nStudent Details:\n";
//     cout << "Student ID: " << id << endl;
//     cout << "Student Name: " << name << endl;
//     cout << "Student Age: " << age << endl;

//     for (int mark : marks) {
//         total_mark += mark;
//     }
//     cout << "Total Marks: " << total_mark << endl;
// }

// int main() {
//     int subject;
//     cout << "Enter Number of Subjects: ";
//     cin >> subject;

//     Students student;
//     student.setStudentValue(subject);
//     student.displayStudent();

//     return 0;
// }
