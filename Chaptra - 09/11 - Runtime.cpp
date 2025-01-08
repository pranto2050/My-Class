#include <iostream>
using namespace std;

class Product {
    protected:
        string name;
        double price;
    public:
        Product(string n, double p){
            name = n;
            price = p;
        }
        virtual void display() = 0;
        virtual void discount() = 0;
};

class Electronics : public Product {
    int warranty;
    public:
        Electronics(string n, double p, int w): Product(n, p){
            warranty = w;
            if (price > 5000){
                price = price * 0.80; // Apply 20% discount
            };
        };
        void discount() override {
            if (price > 5000){
                price = price * 0.80; // Apply 20% discount
            }
        }
        void display() override {
            cout << "Name: " << name << endl;
            cout << "Price: " << price << endl;
            cout << "Warranty: " << warranty << endl;
        }   
};


class Clothing : public Product {
    string size;
    double pricess;
    public:
    Clothing(string n, double p, string s): Product(n, p){
            size = s;
        };
        void discount () override {
            if(price > 3000){
                pricess  =   price*(25/100);
                price = price - pricess;
            }
        };
        void display () override {
            cout << "Name: " << name << endl;
            cout << "Price: " << price << endl;
            cout << "Sizes: " << size << endl;
        };
};

int main() {
    Electronics c("Router", 6000, 2);
    c.display();
    cout << endl;
    Clothing a("Jacket",5000,"M");
    a.display();
    return 0;
}