


// Nasting of Member Function
/* C++ এ Nasting of Member Function বলতে বোঝায় যখন একটি ক্লাসের একটি মেম্বার ফাংশন থেকে অন্য একটি মেম্বার ফাংশন কল করা হয়। এটি সাধারণত কোড পুনরায় ব্যবহার এবং কার্যকারিতা মডুলারাইজ করার জন্য ব্যবহার করা হয়।*/
#include <iostream>
using namespace std;

class Calculator {
private:
    int a, b;

public:
    // মান সেট করার ফাংশন
    void setValues(int x, int y) {
        a = x;
        b = y;
    }
    // যোগ করার ফাংশন
    int sum() {
        return a + b;
    }
    // গুণ করার ফাংশন
    int multiply() {
        return a * b;
    }

    // রেজাল্ট প্রদর্শনের ফাংশন, যেখানে অন্য ফাংশনগুলোকে কল করা হয়েছে
    /* 
      displayResults()  এটি একটি মেম্বার ফাংশন.. যখন এই মেম্বার ফাংশনের মধ্যে আরও 
      একের অধিক মেম্বার ফাংশন কল করা হয় বা এক বা 
      একাধিক ফাংশন কল করা হয় তখন তাকে বলা হয় Nasting of Member Function.... Bola
    */
    void displayResults() { // Member Function
        cout << "যোগফল: " << sum() << endl;           // add() ফাংশন কল করা হয়েছে
        cout << "গুণফল: " << multiply() << endl;     // multiply() ফাংশন কল করা হয়েছে
    }
};

int main() {
    Calculator calc; // Object Making --- 
    int x,y; 
    cout << "Enter first numbers: ";
    cin >> x;
    cout << "Enter second numbers: ";
    cin >> y;
    calc.setValues(x, y); // Set of Data function Call
    calc.displayResults(); // displayResults() মেথডটি কল করা হয়েছে
    return 0;
}
