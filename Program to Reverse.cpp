



#include <iostream>
using namespace std;
int main() {

    int n,a, sum = 0;

    cout << "Enter the number of items: ";
    cin >> n;

    while (n > 0) {
        a = n % 10; // a Stores the number of the last digit
        sum = sum * 10 + a;
        n = n / 10;
    }
    cout << sum << endl; // Output the reversed number
    
    return 0;
}


























