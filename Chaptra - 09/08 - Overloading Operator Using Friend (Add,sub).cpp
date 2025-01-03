


// Overloading Operator Using Friend (Add,sub)
#include<iostream>
using namespace std;
class A{
    private:
    int a;
    public:
    A(){
        a=0;
    }
    void display(){
        cout<<"Value of a: "<<a<<endl;
    }
    friend void operator -(A &obj);
};
void operator -(A &obj){
    obj.a=-obj.a;
}
int main(){
    A obj;
    obj.display();
    -obj;
    obj.display();
    return 0;
}
