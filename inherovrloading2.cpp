#include<iostream>
using namespace std;
class a{
    public:
    void fun(){
        cout<<"First class function "<<endl;
    }
    public:
    void fun(int r){
        cout<<"First class int function ->"<<"\t"<<r<<endl;
    }
};
class b:public a {
    public:
    void fun(){
        cout<<"Second class function "<<endl;}
        using a::fun; //bring back all fun()'s from base class

    //give a::fun() [no arg(default one)] a new name,as it's for the default one(no arg) [wrapping one of the base versions (fun) under a new name]
    void wrap(){a::fun();}
    
};
int main(){
    b og;
    og.fun();
    og.wrap();
    og.fun(25);
    return 0;
}