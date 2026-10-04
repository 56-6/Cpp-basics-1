#include<iostream>
using namespace std;
class gg {
    private :
    int a,b,c; //private members can't be accessed in the main function through object (variables) or through dot operators,however they are available throughout the whole class so other member functions can access them and use them
    public :
    void triangle() {
            cout <<"Enter the values "<<endl; //input has to be inside a member function as class can either have data members or member functions
    cin>>a>>b>>c;
        if(a==b && b==c) {
            cout<<"This is an equilateral triangle ";
        }
        else if(a==b || b == c) {
            cout<<"This is an isosceles triangle ";
        }
        else if (a!=b && b!=c && a!=c) {
            cout<<"This is a scalene triangle ";
        }
    }
};
int main() {
    gg obj;
    obj.triangle();
    return 0;
}