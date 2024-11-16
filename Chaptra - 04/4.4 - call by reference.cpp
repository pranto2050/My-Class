



 // Use of call by reference in C++
#include <iostream>
using namespace std;

// Function to swap two numbers using call by reference
void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int x = 10, y = 20;

    cout << "Before swapping:"<< endl << " x = " << x << endl << " y = " << y << endl << endl;


    // Call the swap function
    swap(x, y);

    cout << "After swapping: " << endl << " x = " << x << endl << " y = " << y << endl;

    return 0;
}
