#include<iostream>
using namespace std;
class b {
    public:
    b(int a){
        cout<<"First the base class constructor gets called "<<endl;
        cout<<a<<"\t"<<endl;} //if the base class only has parameterized contructors(no default one),the derived class must call one explicitly in it's initializer first
};
class a : public b {
    public:
    //constructor of 'a' calls costructor of 'b' with 12
    a():b(12){cout<<"The derived class constructor gets called later";}//means any class that inherits from b must explicitly call b's constructor first(as constructor in class b is not default)
    //when you make an object of 'a',first call b(12),then do a's work
};
int main(){
    a obj;
    return 0;
}