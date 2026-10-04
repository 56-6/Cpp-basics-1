#include<iostream>
using namespace std;
class box{
    public:
    int length;
    int height;
    int width;
    box(){
        length=1;
        height=1;
        width=1;
        cout<<"The area of the box (default) ->"<<length*height*width<<endl;
    }
    box(int x){
        length=x,height=x,width=x;
        cout<<"Area (single parameter) ->"<<length*height*width<<endl;
    }
    box(int x,int y,int z){
        length=x,height=y,width=z;
        cout<<"Area (different parameters) ->"<<length*height*width<<endl;
    }
};
int main(){
    box obj,obj1(7),obj2(6,7,10);
    return 0;
}