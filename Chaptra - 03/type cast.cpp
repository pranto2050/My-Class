


#include <iostream>
using namespace std;
int main() {
    // Here Is x is a float type variable and y is an integer type variable
    float x = 10.99;
    int y = (int)x; // Type casting float to int '(int)x'---(int) is a type casting operator
    cout << y << endl;
    //Output: 10 --- Because of type casting float to int
    return 0;
}