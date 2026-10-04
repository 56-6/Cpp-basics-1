#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
int main() {
    float pi=3.1416;
    string name="Eyad rahman";
    cout<<"the default value of pi is "<<pi<<endl;
    cout<<"The value of pi with 4 decimal point and total 8 width"<<setw(8)<<3.1416<<endl; //extra spaces are to be added beforehand
    cout<<"The value of pi with 4 decimal point and total 10 width"<<setw(10)<<3.1416<<endl;
    cout<<setfill('-')<<setw(8)<<pi<<endl;//extra spaces are to be filled with a special character
    cout<<setw(10)<<pi<<endl;  //setfill('_') still active
    cout<<setfill(' '); //setfill disrupted(inserted space char)
    cout<<left<<setw(10)<<"alice"<<setw(5)<<"age"<<endl; //left applies for both[both sidelined to left]
    cout<<right<<setw(10)<<"rob"<<setw(5)<<"dee"<<endl; //right applies for both[both sidelined to right]
    //setprecision(n) but not fixed -> shows n total digits (before and after decimal->total digits of n)
    cout<<"with setprecision() but not fixed :"<<setprecision(4)<<pi<<endl;
    //setprecision(n) but fixed -> shows n total digits (after decimal) 
    cout<<"with setprecision() but fixed :"<<fixed<<setprecision(4)<<pi<<endl;
    cout<<"The value of pi in scientific format is "<<scientific<<pi<<endl;// scientific value of float variable pi
    //length() -> string size or character count including spaces
    cout<<"The length of the string ->"<<name<<" is :"<<name.length()<<endl;
    return 0;
}