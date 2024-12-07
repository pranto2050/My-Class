


#include <iostream>
using namespace std;
class students{
    private:
    int marks[5];
    public:
    void setmark(int mark[]) {
        for(int i=0; i<5; i++){
            this->marks[i] = mark[i];
        };
    };
    void getmark(){
        cout << "Marks of the student: ";
        for(int i=0; i<5; i++){
            cout << marks[i] << " ";
        };
    };
};
int main() {
    students student_one;
    int marks[5] = {10, 20, 30, 40, 50};
    student_one.setmark(marks);
    student_one.getmark();
    
    return 0;
};