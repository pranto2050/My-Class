



#include <iostream>
using namespace std;
int main() {
    int number = 1000;  
    // A pointer ..... variable that stores the memory address
    int* number2 = &number;    
    cout << *number2 << endl;
    cout << number << endl;

//    Memory Address ( If we Used '&' then we get Memory Address)
//    Memory address of a variable by using the '&' operator
    cout << &number << endl;
    cout << number2 << endl;
    return 0;
}


