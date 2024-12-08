#include <iostream>
using namespace std;

class Students {
    int count;
    string name;

public:
    Students(int c = 0, string n = ""){
        count = c;
        name = n;
    };
    friend int add(int i, Students s);
};
int add(int i, Students s) {
    return i + s.count; 
}

int main() {
    Students s1(10, "John");
    int result = add(5, s1);
    cout << "Result: " << result << endl;

    return 0;
}
