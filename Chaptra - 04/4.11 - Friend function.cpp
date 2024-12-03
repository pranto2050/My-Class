


// Friend function is a function that is not a member of a class but has access to the class's private and protected members. It is declared using the friend keyword. The friend function can be defined inside or outside the class
#include <iostream>
using namespace std;
// Class definition
class students{
    private: // Access specifier 
    int subject_one = 10;
    int subject_two = 100;
    public: // Access specifier
    friend void result (students); // Friend function
};

void result(students total){ // Function definition
    int result = total.subject_one + total.subject_two; // Add two subject marks
    cout << result << endl; // Print the result
};

int main() {
    students total; // Object of the class
    result(total); // Call the friend function
    return 0;
}