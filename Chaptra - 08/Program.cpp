

// Encapsulation in C++ (ক্লাসের মেথড গুলোকে সরাসরি ব্যবহার করা) ---
#include <iostream>
using namespace std;

class Student {
private:
    string name;
    int age;

// এখানে সকল ফাংশন গুলোকে সরাসরি ব্যবহার করা হয়েছে ---- 
public:
    // Setter মেথড (ডেটা সেট করার জন্য)
    void setName(string n) {
        name = n;
    }
    void setAge(int a) {
        if (a > 0) {
            age = a;
        } else {
            cout << "Invalid age!" << endl;
        }
    }
    // Getter মেথড (ডেটা পড়ার জন্য)
    string getName() {
        return name;
    }

    int getAge() {
        return age;
    }
};


// এখানে চাইলে স্কোপ রেজুলেশন অপারেটর ব্যবহার করে করা যায় যেটা বইয়ে দেওয়া আছে --- ' :: ' This is Scope Resolution Operator
/*
void Student::setName(string n) {
    name = n;
}

void Student::setAge(int a) {
    if (a > 0) {
        age = a;
    } else {
        cout << "Invalid age!" << endl;
    }
}

*/




int main() {
    Student s;

    // ডেটা সেট করা (Setter মেথড ব্যবহার করে)
    s.setName("Md. Pranto Islam");
    s.setAge(22);

    // ডেটা পড়া / Reed (Getter মেথড ব্যবহার করে)
    cout << "Name: " << s.getName() << endl;
    cout << "Age: " << s.getAge() << endl;

    return 0;
}
