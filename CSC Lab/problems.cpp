#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    int a = 0, b = 1; 
    for (int i = 1; i <= N; ++i) {
        if (i == 1) {
            cout << a; 
        } else if (i == 2) {
            cout << " " << b; 
        } else {
            int next = a + b; 
            cout << " " << next; 
            a = b; 
            b = next;
        }
    }

    cout << endl;
    return 0;
}
