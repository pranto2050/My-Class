

#include <iostream>
using namespace std;

class Car{
    private:
    string make;
    string model;
    int year;
    double mileage;
    public:
    Car(string mmk, string model, int year, double mileage){
        make = mmk;
        this->model = model;
        this->year = year;
        this->mileage = mileage;
    };
    void milesUpdated(double elapsed) {
        mileage += elapsed;
    };

    void displayCarInfo(){
        cout << "Make: " << make << endl;
        cout << "Model: " << model << endl;
        cout << "Year: " << year << endl;
        cout << "Mileage: " << mileage << " miles" << endl;
    };
};




int main() {
    Car myCar("Toyota", "Camry", 2021, 12000);
    myCar.displayCarInfo();
    myCar.milesUpdated(500);
    myCar.displayCarInfo();
    
    return 0;
}