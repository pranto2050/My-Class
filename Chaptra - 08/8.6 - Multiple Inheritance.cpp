

// C++ program to illustrate Multiple Inheritance 

#include <iostream> 
using namespace std; 
// First Bass Class
class A { 
protected: 
	int a; 
public: 
	void get_a(int n){
         a = n; 
    };
}; 
// Second Bass class
class B { 
protected: 
	int b; 
public: 
	void get_b(int n){
         b = n; 
    };
}; 
// This class inheritance two Bass classes
// Child Class
class C : public A, public B { 
public: 
	void display() { 
		cout << "The value of a is : " << a << endl;  // First Bass Class
		cout << "The value of b is : " << b << endl;  // Second Bass Class
		cout << "Product of a and b is : " << a * b;  // Multiplication of a and b and Display
	};
}; 
// Main function
int main() { 
    cout << "Name: MD.Pranto Ali" << endl << "ID: 23303101" << endl;
	C output; 
	output.get_a(10); 
	output.get_b(20); 
	output.display(); 
	return 0; 
}
