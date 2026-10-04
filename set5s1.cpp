#include<iostream>
using namespace std;
class shape {
    public:
    void area(int side){
    cout<<"The area of square ->"<<side*side<<endl;
    }
};
class rectangle:public shape {
    
    public:
    void area(int length,int width){
        cout<<"The area of rectangle ->"<<length*width<<endl;
    }
};
int main() {
    rectangle obj;
    obj.shape::area(10);
    obj.area(20,10);
    return 0;
}