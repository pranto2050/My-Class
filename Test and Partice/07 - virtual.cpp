


#include<iostream>
using namespace std;
class Product{
protected:
    string name;
    double price;
    double total_bill;
public:
    Product(string n, double p, double tb){
        name=n;
        price =p;
        total_bill=tb;
    }
    virtual void calculate_discount()=0;
    virtual void show_details(){
        cout<<"Product name is="<<name<<endl;
        cout<<"Price of the product="<<price<<endl;
    };
};

class Electronics : public Product{
    int warrenty_period;
public:
    Electronics(string n, double p, int wp): Product( n,p,p){
        warrenty_period=wp;
    }
    void calculate_discount(){
        if (price>5000){
            total_bill=price-price*10/100;
        }
        else{
            total_bill=price;
        }
          cout<<"After  10% Discount Total Price="<<total_bill<<endl<<endl;
    };

    void show_details(){
        cout<<"For Electronics:"<<endl;
        Product :: show_details();
        cout<<"Warrenty Days:"<<warrenty_period<<endl;
    };
};

class Clothing : public Product{
    string Size;
public:
    Clothing(string n, double p, string sz): Product( n, p,p){
        Size=sz;
    }

    void calculate_discount(){
        if (price>4000){
            total_bill=price-price*20/100;
        }
        else{
            total_bill=price;
        }
         cout<<"After 20% Discount Total Price="<<total_bill<<endl<<endl;
    }

      void show_details(){
        cout<<"For Clothing:"<<endl;
        Product :: show_details();
        cout<<"Size of the cloth:"<<Size<<endl;
    }
};

class Books : public Product{
    string author;
public:
    Books(string n, double p, string a): Product( n, p,p){
        author=a;
    }

    void calculate_discount(){
        if (price>300){
            total_bill=price-price*15/100;
        }
        else{
            total_bill=price;
        }
         cout<<"After 15% Discount Total Price="<<total_bill<<endl;
    }

      void show_details(){
        cout<<"For Books:"<<endl;
        Product :: show_details();
        cout<<"Author of the book:"<<author<<endl;
    }
};

int main(){
    Electronics e("ABC",6000.50,120);
    Clothing c("DEF",5000.60,"M");
    Books b("GHI",1000.8,"A");

    Product *q[3];
    q[0]=&e;
    q[1]=&c;
    q[2]=&b;

    q[0]->show_details();
    q[0]->calculate_discount();
    q[1]->show_details();
    q[1]->calculate_discount();
    q[2]->show_details();
    q[2]->calculate_discount();

}