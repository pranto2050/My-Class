//Constractor overloading
#include<iostream>
using namespace std;
 class ms
 {
     int x,y;
 public:
      ms();
    ms(int a, int b);
    ms(ms &m);
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
  ms :: ms(ms &m)
  {
      x=m.x;
      y=m.y;
  }

 void ms ::  show()
 {
     cout<<"X="<<x<<endl;
     cout<<"Y="<<y<<endl;
 }

 int main()
 {
     ms p;
     ms q(7,9);
     ms s(q);


     p.show();
     q.show();
     s.show();
     return 0;

 }
