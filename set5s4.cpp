#include<iostream>
using namespace std;
class complex {
    public:
    int real;
    int imag;
    void input(){
        cout<<"Enter the real part ->"<<endl;
        cin>>real;
        cout<<"Enter the imaginary part ->"<<endl;
        cin>>imag;
    } 
    complex operator*(complex obj){  //(a+bi)(c+di)=(ac−bd)+(ad+bc)i
        complex tem;
        tem.real=real*obj.real-imag*obj.imag;
        tem.imag=real*obj.imag+imag*obj.real;
        return tem;
    }
    void show(){
        cout<<"(Multiplying) The complex number is ->"<<"\t"<<real<<"+"<<imag<<"i"<<endl;
    }
};
int main(){
    complex obj,obj2,obj3;
    obj.input();
    obj2.input();
    obj3=obj*obj2;
    obj3.show();
}