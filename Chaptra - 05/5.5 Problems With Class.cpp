

#include <iostream>
using namespace std;
// Class ------
class item{
    int first_cost; // class object
    float secound_cost; // class object
    float total_cost; // class object
public:
    void get_data(int n, float c){ // function and parameter
        first_cost = n;
        secound_cost = c;
    };
    void show_cost(){
        total_cost = first_cost + secound_cost;
        cout << "total Cost = " << total_cost << endl;
    };
};
// Main Function -------
int main() {
    item item1;
    
    int a;
    float b;
    cout << "Inter The Two input: ";
    cin >> a; // First input
    cin >> b; // Secound input
    item1.get_data(a,b); // Pass Argument----
    item1.show_cost();
    return 0;
}


