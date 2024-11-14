


// Sum Of Two number
#include <iostream>
using namespace std;
void sum (int a, int b = 1){ // there is two parameter but received one argument... b = 1 is Defult Argument
    cout << a + b << endl;  // If the user pass value than b = user input or argument b = 1 on this time not work
};
int main() {
    int x = 30; 
    sum(x); // Pass only One value ----- 
    
    return 0;
}