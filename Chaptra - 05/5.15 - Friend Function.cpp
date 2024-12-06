
#include <iostream>
using namespace std;

class Number {
private:
    int value;

public:
    Number(int v){
        value = v;
    }     
    friend int addNumbers(Number n1, Number n2);
};

// Define the friend function
int addNumbers(Number n1, Number n2) {
    return n1.value + n2.value;  // Accessing private members of both objects
}

int main() {
    Number num1(10);  // Create first Number object with value 10
    Number num2(20);  // Create second Number object with value 20

    int sum = addNumbers(num1, num2);  // Call friend function to get the sum
    cout << "The sum of the two numbers is: " << sum << endl;
    return 0;
}