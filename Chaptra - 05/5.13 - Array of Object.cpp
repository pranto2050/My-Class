






// Array of Object --- in C++

#include <iostream>
using namespace std;
class arr{
    public:
        void print(int i){ // Print Function
            cout << "Hellow Pranto Your Count is: "<< i << endl; // Print section
        };
};

int main() { // Main Function
    arr arr1[10]; // Array of Object
    for (int i = 0; i < 12; i++)
    {
        arr1[i].print(i);
    }
    return 0;
}