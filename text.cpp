
#include <iostream>
using namespace std;

class MyClass {
    int x, y;

public:
    void setValues(int a, int b) {
        x = a;
        y = b;
    }

    void display() {
        cout << "x: " << x << ", y: " << y << endl;
    }
};

int main() {
    cout << "Hello, World!" << endl;
    MyClass obj;
    obj.setValues(10, 20);
    obj.display();
    return 0;
// Output
// Hello, World!
// x: 10, y: 20
int sum = 0;
for (int i = 0; i < 10; i++) {
    sum += i;
    }
    cout << "Sum: " << sum << endl;
    // Output
}
