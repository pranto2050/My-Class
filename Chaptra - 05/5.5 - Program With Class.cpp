
// Class and Object
#include <iostream>
using namespace std;
// Class ------
class item{ // class and class name
    public:
    int first_cost; // class object
    float secound_cost; // class object
    float total_cost; // class object

};
// Main Function -------
int main() {
    item item1; // Object One
    
    // Inter Value in Class Object
    item1.first_cost = 75;// First Cost
    item1.secound_cost = 220.5; // Secound Cost
    item1.total_cost = item1.first_cost + item1.secound_cost; // Total Cost of Object One
    cout << "First Cost: " << item1.first_cost << endl;
    cout << "Secound Cost: " << item1.secound_cost << endl;
    cout << "Total Cost: " << item1.total_cost << endl; // Total Cost of Object One/Fast Output

    item item2; // Object Two
    item2.first_cost = 100; // First Cost
    item2.secound_cost = 250.75; // Secound Cost
    item2.total_cost = item2.first_cost + item2.secound_cost; // Total Cost Secound Object
    cout << "First Cost: " << item2.first_cost << endl;
    cout << "Secound Cost: " << item2.secound_cost << endl;
    cout << "Total Cost: " << item2.total_cost << endl; // Total Cost of Object Two/Secound Output
    
    return 0;
}


