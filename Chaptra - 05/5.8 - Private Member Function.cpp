




/*
C++-এ একটি প্রাইভেট মেম্বার ফাংশন হলো একটি ফাংশন যা একটি ক্লাসের ভিতরে ঘোষণা করা হয় এবং শুধুমাত্র সেই ক্লাসের অন্যান্য মেম্বার ফাংশন বা বন্ধু ফাংশন (friend functions) দ্বারা অ্যাক্সেসযোগ্য। এটি ক্লাসের বাইরে সরাসরি অ্যাক্সেস করা যায় না।

প্রাইভেট মেম্বার ফাংশন ব্যবহার করে ক্লাসের অভ্যন্তরীণ কার্যপ্রণালী গোপন রাখা হয়, যা এনক্যাপসুলেশন (Encapsulation) এর একটি উদাহরণ।
*/

#include <iostream>
using namespace std;

class Calculator {
private:
    // প্রাইভেট মেম্বার ফাংশন
    int square(int numm) { // প্রাইভেট মেম্বার ফাংশন
        return numm * numm;
    }

public:
    // পাবলিক মেম্বার ফাংশন
    void displaySquare(int num) {
        cout << "The square of " << num << " is " << square(num) << endl;
    }
};

int main() {
    Calculator calc;

    // শুধুমাত্র পাবলিক মেম্বার ফাংশনের মাধ্যমে প্রাইভেট ফাংশনে অ্যাক্সেস করা সম্ভব
    calc.displaySquare(5);

    // নিচের লাইনটি ত্রুটি তৈরি করবে কারণ square() প্রাইভেট
    // calc.square(5); 

    return 0;
}








