
#include <iostream>
using namespace std;
class camera{
    public:
    void photo(){
        cout<<"clicking a photo"<<endl;
    };
};
class battry{
    public:
    void charging(){
        if(20<100){
            cout<<"charging"<<endl;
        }
        else{
            cout<<"not charging"<<endl;
        };
    };
    void checkBattery(){
        cout<<"battery status: "<< 10 <<"%"<<endl;
    };
};
class display : public camera, public battry{
    public:
    void show(){
        charging();
        photo();
        checkBattery();
    };
};
int main() {
    display d;
    d.show();
    return 0;
}