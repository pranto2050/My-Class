

// C++ program for Hierarchical Inheritance 
#include<iostream> 
using namespace std; 
//superclass A 
class A{ 
public: 
    void show_A() { 
	    cout<<"class A"<<endl; 
    };
}; 
//subclass B of A
class B : public A{ 
public: 
    void show_B() { 
	    cout<<"class B"<<endl; 
    };
}; 
//subclass C of A
class C : public A{ 
public: 
    void show_C() { 
	    cout<<"class C"<<endl; 
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

