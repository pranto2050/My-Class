


/*

Problem 6: Constructor with Default Arguments
Create a class Car with private members brand and price. 
Write a constructor that takes two arguments, with a default value of "Generic" 
for the brand and 10000 for the price. Display the details of the car using a member function.

*/
#include <iostream>
using namespace std;
class Car{
private:
    string brand;
    double price;
public:
    Car(string b, double p){
        brand = b;
        price = p;
    }
    void display(){
        cout << "Brand: " << brand << endl;
        cout << "Price: " << price << endl;
    }
};

int main(){

    Car myCar("Toyota", 20000);
    myCar.display();
    return 0;
}






















