#include<iostream>
using namespace std;
class base {
    public:
    virtual void display(){
        cout<<"Base display \n";
    }
};
class derived : public base {
    public :
    void display() override {
        cout<<"Derived display \n";
    }
    void callbase(){
        base::display(); //calling base version explicitly through scope resolution 
    }
};
int main(){
    derived obj;
    obj.display();  //calls derived version (overriding)
    obj.callbase(); //calls base version
    base *pr=&obj;  
    pr->display();  //overriding /runtime polymorphism [via base class pointer ]
    ((base)obj).display();  // calls base version (object cast)
    ((base*)&obj)->display(); //calls derived version (pointer cast)
    return 0;
}