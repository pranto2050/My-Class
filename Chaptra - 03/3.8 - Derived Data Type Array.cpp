


/*
C++ এ Derived Data Type: Array (Bangla)
C++-এ Array একটি Derived Data Type, যা একাধিক একই ধরনের ডাটা (data) একটি ধারাবাহিক মেমোরি ব্লকে সংরক্ষণ করতে ব্যবহৃত হয়। 
এটি একাধিক ভেরিয়েবলের পরিবর্তে একটি নাম ব্যবহার করে ডাটা অ্যাক্সেস করতে সাহায্য করে।
*/


#include <iostream>
using namespace std;

int main() {
    int numbers[5] = {10, 20, 30, 40, 50}; // Array ' Int ' Data type ' numbers ' is Identifiers and " 5 " is arraySize: Array-এর আকার বা উপাদানের সংখ্যা।

    // Array প্রদর্শন
    cout << "Array elements are: ";
    for (int i = 0; i < 5; i++) { // Using for loop for Accage array inside value...
        cout << numbers[i] << " ";
    }

    return 0;
}
