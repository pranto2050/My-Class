

// Pointer as function argument
#include <iostream>
using namespace std;

void refereance(int* a, int* b){
    *a = 100;
    *b = 200;
};
int main() {


    int x = 10;
    int y = 20;
// before call by reference
    cout << x << endl;
    cout << y << endl;
// After call by refere
    refereance(&x,&y);
    cout << x << endl;
    cout << y << endl;

    
    return 0;
}

