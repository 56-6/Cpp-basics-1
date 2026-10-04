#include<iostream>
using namespace std;
class siu {
    private :
    int a;
    public:
    void get(int m){  //getter-setter method
        a=m;
    }
    siu operator*(siu &obj){
        siu te;
        te.a=a*obj.a;
        return te;
    }
    void show(){
        cout<<"the multiplication is ->"<<a<<endl;
    }
};
int main(){
    siu obj,obj2,obj3;
    obj.get(5);
    obj2.get(7);
    obj3=obj*obj2;
    obj3.show();
    return 0;
}