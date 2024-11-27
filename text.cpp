
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
    // Dynamic allocation
    MyClass* obj = new MyClass;

    obj->setValues(30, 40);
    obj->display();

    // মেমরি মুক্ত করতে delete ব্যবহার করুন
    delete obj;

    return 0;
}
