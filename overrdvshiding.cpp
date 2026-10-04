#include<iostream>
using namespace std;
class a {
    public :   //allows overriding
    virtual void one (){
        cout<<"Base class a -> virtual "<<endl;
    }
    void shush () {
        cout<<"Base class a -> non-virtual (will only get hidden(class b))"<<endl;
    }

};
class b:public a{
    public :
    void one() override {  //overriding [same signature,virtual in base]
        cout<<"derived class b -> overriding "<<endl;
    } 
    void shush (){  //name hiding [same name->the only credential]
        cout<<"derived class b -> hiding"<<endl;
    }
};
int main(){
    b obj;  //derived pointer
    a *ptr=&obj;
    cout<<"Using base pointer ->"<<endl;
    ptr->one();    //overriding ->run-time polymorphism [overrides base class function]
    ptr->shush();  //name -hiding or function hiding (compile-time binding or static binding)  [shows base class function and hides derived]
    cout<<"using derived object directly ->"<<endl;
    obj.one();    //overriding 
    obj.shush(); //name-hiding (hides base class fun. ,shows derived fun. ) [shows b::shush()]
} 
// virtual -> runtime override [dynamic polymorphism]
//non-virtual-> compile-time hiding [static binding]