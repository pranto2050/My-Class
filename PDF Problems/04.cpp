#include <iostream>
#include <string>
using namespace std;

class Book {
public:
    string title;
    string author;
    Book(){
        title = "Santo";
        author = "Pranto";
    }
    void update(string t, string a) {
        title = t;
        author = a;
    }
    void borrowed() {
        title = " ";
        author = " ";
    }
    void returned() {
        title = "Add";
        author = "Add";
    }
    void display() {
        cout << "Title: " <<  title << ", Author: " <<  author << endl;
    }
};
int main() {
    Book b;
    b.display();
    b.borrowed();
    b.display();
    b.update("Book2", "Author2");
    b.display();
};