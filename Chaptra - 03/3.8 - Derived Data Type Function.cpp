


// C++ এ Derived Data Type: Function (Bangla)
/*
Function কী?
    Function হলো এমন একটি কোডের অংশ, যা প্রোগ্রামে একাধিকবার ডাকা (call) যেতে পারে। 
    Function সাধারণত ইনপুট নেয় (প্যারামিটার হিসেবে), কোনো কাজ সম্পাদন করে এবং ফলাফল (আউটপুট) প্রদান করতে পারে।


*/


/*
Function এর প্রকারভেদ (User-defined):
     Void Function:
        কোনো মান ফেরত দেয় না।

    Integer Function:
        মান ফেরত দেয়।
*/


//  Function এর গঠন: 
/*
    returnType functionName(parameters) {    // returnType / data type : 1. int 2. void
    // Function body -----
    // Statements -----
    return value; // Optional
}

*/

// উদাহরণ:
#include <iostream>
using namespace std;

int display1(int num) { // Integer Type return type
    int x = 10 + num;
    return x; // Return " x " Is sum
};

void display2(double num) { // void Type no return
    cout << "Your Inter Number is: " << num << endl;
};

int main() {
    cout << "Integer Type Data Return : " << display1(5) << endl;      // Integer version
    display2(10);  
    return 0;
}






