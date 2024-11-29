



// C++ program to demonstrate multiple constructors
/*
C++-এ multiple constructors:  ব্যবহার করে একটি ক্লাসের জন্য বিভিন্ন ধরণের initialization করা যায়। 
এটিকে constructor overloading বলা হয়। একাধিক কনস্ট্রাক্টর থাকার ফলে আমরা একই ক্লাসের জন্য ভিন্ন ভিন্ন প্যারামিটার দিয়ে অবজেক্ট তৈরি করতে পারি।
*/

#include <iostream>
using namespace std;

class Student {
private:
    string name;
    int age;

public:
    // ডিফল্ট কনস্ট্রাক্টর (কোনো প্যারামিটার নেই)
    Student() {
        name = "Md.Pranto Islam";
        age = 20;
        cout << "ডিফল্ট কনস্ট্রাক্টর চালু: " << name << ", বয়স: " << age << endl;
    }

    // এক প্যারামিটারের কনস্ট্রাক্টর
    Student(string studentName) {
        name = studentName;
        age = 0;
        cout << "নামের কনস্ট্রাক্টর চালু: " << name << ", বয়স: " << age << endl;
    }

    // দুই প্যারামিটারের কনস্ট্রাক্টর
    Student(string studentName, int studentAge) {
        name = studentName;
        age = studentAge;
        cout << "নাম এবং বয়সের কনস্ট্রাক্টর চালু: " << name << ", বয়স: " << age << endl;
    }
};

int main() {
    // ডিফল্ট কনস্ট্রাক্টর ব্যবহার
    Student student1;

    // এক প্যারামিটার দিয়ে কনস্ট্রাক্টর ব্যবহার
    Student student2("Md.Pranto Islam");

    // দুই প্যারামিটার দিয়ে কনস্ট্রাক্টর ব্যবহার
    Student student3("Md.Pranto Islam", 20);

    return 0;
}
