

// Memory allocation


#include <iostream>
using namespace std;
class Memory{
    int x, y;
    public:
    void Set_value(int x, int y){
        this->x = x;
        this->y = y;
    };
    void Get_value(){
        cout << "x = " << x << endl;
        cout << "y = " << y << endl;
    };


};
int main() {
    Memory *obj = new Memory;
    obj->Set_value(30, 40);
    obj->Get_value();
    delete obj;
    return 0;
}