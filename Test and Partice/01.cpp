


#include <iostream>
using namespace std;

class Numbers {

    private:
    int number_one, number_two;
    public:
    void setNumber(int num_one, int num_two){ {
        number_one = num_one;
        number_two = num_two;
    };
    friend void total (int num_one, int num_two);
};
void total(int num_one, int num_two){
    cout << "The sum of the two numbers is: " << num_one + num_two << endl;
};
int main() {
    
    return 0;
}