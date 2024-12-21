

// C++ program for Hierarchical Inheritance 
#include<iostream> 
using namespace std; 
//superclass A 
class A{ 
    protected:
    int a = 10;
public: 
    void show_A() { 
	    cout<<"class A: " << a <<endl; 
    };
}; 
//subclass B of A
class B : public A{ 
    int b = 20;
public: 
    //Overriding show_A() method from superclass A
    int sum = a + b;
    void show_B() { 
	    cout<<"class B: " << sum <<endl; 
    };
}; 
//subclass C of A
class C : public A{ 
    int c = 30;
public: 
int total = a + c;
    void show_C() { 
int total = a + c;
	    cout<<"class C: "  << total << endl; 
    };
}; 
// Main function
int main() { 
    B b; // b is object of class B 
    cout<<"calling from B: "<<endl; 
    b.show_B(); 
    b.show_A(); 
    C c; // c is object of class C 
    cout<<"calling from C: "<<endl; 
    c.show_C(); 
    c.show_A(); 
return 0; 
};

