

// Defult Constructor ---- in c++
#include <iostream>
using namespace std;
class Students {
private:
    string name;
    int age;
    int roll;
public:
Students() {
    cout << "This Is Defult Constructor" << endl;
    };
};
int main() {
    Students one;
    return 0;
}