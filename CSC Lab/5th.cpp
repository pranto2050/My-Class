// Default Arguements
#include<iostream>
using namespace std;
 class ms
 {
     int x,y;
 public:
     ms();
    ms(int a, int b=6);
    void show();

 };
 ms :: ms()
 {
     x=0;
     y=0;
 }
 ms :: ms(int a, int b)
 {
     x=a;
     y=b;
 }

 void ms ::  show()
 {
     cout<<"X="<<x<<endl;
     cout<<"Y="<<y<<endl;
 }

 int main()
 {
     ms p;
     ms q(9);

     p.show();
     q.show();
     return 0;
 }
