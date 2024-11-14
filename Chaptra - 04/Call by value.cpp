

#include <iostream>
using namespace std;
void valeu (int a, int b){
    a = 100;
    b = 200;
    cout << a << endl << b << endl;
};
// Main function -----
int main() {
    
    int x = 10;
    int y = 20;

    valeu(x,y);
    cout << x << endl << y;

    return 0;
}


