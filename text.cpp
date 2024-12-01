







#include <iostream>
using namespace std;
void factorial(int items){
    int a = 0;
    int b = 1;

    cout << a << " ";
    cout << b << " ";
    for (int i = 2; i < items; i++){
        int c = a + b;
        cout << c << " ";
        a = b;
        b = c;
    };
};
int main() {
    int items;
    cout << "Enter the number of items: ";
    cin >> items;
    factorial(items);
    
    return 0;
}
































