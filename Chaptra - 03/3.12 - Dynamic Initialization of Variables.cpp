




/*
উদাহরণ
১. ব্যবহারকারীর ইনপুট দিয়ে চলক প্রারম্ভিককরণ
*/

#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "একটি সংখ্যা দিন: ";
    cin >> num;

    // Dynamic initialization
    int square = num * num;

    cout << num << " এর বর্গক্ষেত্র: " << square << endl;
    return 0;
};

/*
বর্ণনা:
    এখানে, square চলকটি ব্যবহারকারীর প্রদত্ত num মানের উপর ভিত্তি করে runtime-এ প্রারম্ভিক করা হয়েছে।
*/




























