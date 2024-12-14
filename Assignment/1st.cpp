#include<iostream>
using namespace std;
class ms
{
    int a,b;
      int sum;
public:
    void getdata(int x, int y);
    void display();
    ms();
    ~ms();

};
void ms :: getdata(int x, int y)
{
     a=x;
    b=y;

     sum=a+b;
}
void ms :: display()
{
    cout<<"Summation is="<<sum<<endl;
}
ms :: ms()
{

 cout<<"Constractor is created"<<endl;
}
ms :: ~ms()

{
 cout<<"Desstractor is created"<<endl;
}



int main()
{
    ms p;
    p.getdata(5,6);
    p.display();
    return 0;
}
