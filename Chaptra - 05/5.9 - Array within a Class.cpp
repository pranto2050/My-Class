


// Array within a Class in C++
// C++-এ একটি ক্লাসের মধ্যে অ্যারে ব্যবহার করা সাধারণ বিষয়। এটি সাধারণত ডেটা স্ট্রাকচার তৈরি করার জন্য বা একাধিক তথ্য সংরক্ষণের জন্য ব্যবহৃত হয়। এই ধরণের অ্যারে ব্যবহার করে একটি ক্লাস তৈরি করতে হলে অ্যারেটি প্রাইভেট হতে হবে। এই প্রোগ্রামে একটি ক্লাস তৈরি করে একটি অ্যারে ব্যবহার করা হয়েছে।
// একটি ক্লাস তৈরি করে একটি অ্যারে ব্যবহার করার প্রোগ্রাম লিখতে হবে যেটি নিচে দেয়া হলো।

#include <iostream>
using namespace std;

// একটি ক্লাস তৈরি করা হলো
class Student {
private:
    int marks[5]; // ৫টি সাবজেক্টের নম্বর সংরক্ষণ করার জন্য অ্যারে
public:
    // মার্কস সেট করার ফাংশন
    void setMarks(int mmark[]) {
        for (int i = 0; i < 5; i++) {
            marks[i] = mmark[i];
        };
    };
    // মার্কস দেখানোর ফাংশন
    void displayMarks() {
        cout << "Marks of the student: ";
        for (int i = 0; i < 5; i++) {
            cout << marks[i] << " ";
        };
        cout << endl;
    };
};
int main() {
    Student s1; // একটি Student অবজেক্ট তৈরি করা হলো
    // মার্কস ডাটা
    int myMarks[5] = {85, 90, 78, 88, 76};
    // মার্কস সেট করা
    s1.setMarks(myMarks);
    // মার্কস দেখানো
    s1.displayMarks();
    return 0;
};










