


/*
বর্ণনা:
    অ্যারের আকার ব্যবহারকারীর ইনপুট থেকে নির্ধারণ করা হয়েছে এবং runtime-এ অ্যারেটি মান বরাদ্দ করা হয়েছে।

*/

#include <iostream>
using namespace std;

int main() {
    int size;
    cout << "অ্যারের আকার দিন: ";
    cin >> size;

    // Dynamic initialization
    int* arr = new int[size];

    for (int i = 0; i < size; ++i) {
        arr[i] = i + 1; // মান সেট করা 
    }

    cout << "অ্যারের উপাদান: ";
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    delete[] arr; // মেমরি মুক্ত করা
    return 0;
}
