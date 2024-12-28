//Parameterized Constractor
#include<iostream>
using namespace std;
 class ms
 {
     int x,y;
 public:
    ms(int a, int b);
    void show();

 };
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
     ms p(7,9);

     p.show();
     return 0;

 }

