#include<iostream>
using namespace std;
class parent { //this is the parent class
    protected :
    void bird () {
        cout<<"a crow is calling "<<endl;
    }
};
class derived : public parent {  //child class(derived) inheriting from parent class(parent)
    public :
    void animal() {
        cout<<"Lonesome cattle call "<<endl;
    }
};
int main () {
    derived dawg;
    //dawg.bird();   //shows error[protected] //comes from parent class ->parent 
    dawg.animal();  //comes from child class  ->derived
    return 0;
}