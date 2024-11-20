
// Call by value in C++
#include <iostream>
using namespace std;
void valeu (int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
};
// Main function -----
int main() {
    
    int x = 10;
    int y = 20;
    // Print the value of x and y before swapping
    cout << x << endl << y;
    // Print the value of x and y after swapping
    valeu(x,y);
    cout << x << endl << y;
    return 0;
}


