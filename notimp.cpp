#include <iostream>
using namespace std;
class Complex {
public:
    int real, imag;
    Complex(int r=0, int i=0) {
        real = r;
        imag = i;
    }

    void display() {
        cout << real << " + " << imag << "i" << endl;
    }
};

// Normal function to add two Complex numbers
Complex add(Complex a1, Complex a2) {   // complex acts as a template function [return type complex]
    return Complex(a1.real + a2.real, a1.imag + a2.imag);
}

int main() {
    Complex c1(3,4);
    Complex c2(1,2);

    // function call instead of operator+
    Complex c3 = add(c1, c2);  

    c3.display(); // Output: 4 + 6i
    return 0;
}