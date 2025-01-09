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
    protected:
    int warranty;
    double pricess;
    public:
        Electronics(string n, double p, int w): Product(n, p){
            warranty = w;
            pricess = p;
        };
        void discount() override {
            if (pricess > 5000){
                pricess = pricess * 0.80;
                price = pricess; // Apply 20% discount
            }
        }
        void display() override {
            cout << "Name: " << name << endl;
            cout << "Price: " << price << endl;
            cout << "Warranty: " << warranty << endl;
        }   
};
class Clothing : public Product {
    protected:
    string size;
    double pricess;
    public:
    Clothing(string n, double p, string s): Product(n, p){
            size = s;
            pricess = p;
        };
        void discount () override {
            if(pricess > 3000){
                price = pricess * 0.90; // Apply 10% discount
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
    c.discount();
    c.display();
    cout << endl;
    Clothing a("Jacket",5000,"M");
    a.display();
    a.discount();
    a.display();
    return 0;
}