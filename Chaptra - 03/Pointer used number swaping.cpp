

// Pointer used number swaping

#include <iostream>
using namespace std;
// 
void swaping(int *a,int *b){
    int temp = 0;
    temp = *a;
    *a = *b;
    *b = temp;
}
int main() {
    int x = 10;
    int y = 20;
    swaping(&x,&y);
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;
    return 0;
}