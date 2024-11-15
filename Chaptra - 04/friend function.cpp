



#include <iostream>
using namespace std;

class students{
    private:
    int subject_one = 10;
    int subject_two = 100;
    public:
    friend void result (students);
};
void result(students total){
    int result = total.subject_one + total.subject_two;
    cout << result << endl;
};

int main() {
    students total;
    result(total);
    
    return 0;
}