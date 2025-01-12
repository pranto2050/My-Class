

//Unary Operator Overloading.cpp

#include <iostream>
using namespace std;
class test{
    private:
        int a;
        public:
        test(){
            a = 8;
        };
        void operator --(){
            a = a - 2;
        };
        void display(){
            cout << "a = " << a << endl;
        };
};

int main() {
test t1;
--t1;
t1.display();
    return 0;
}
