//Default Constractor

#include<iostream>
using namespace std;
 class ms
 {
     int x,y;
 public:
    ms();
    void show();

 };
 ms :: ms()
 {
     x=0;
     y=0;
 }

 void ms ::  show()
 {
     cout<<"X="<<x<<endl;
     cout<<"Y="<<y<<endl;
 }

 int main()
 {
     ms p;
     p.show();

 }
