#include<iostream>
using namespace std;
class aa {
    public:
    virtual void ah(){
        cout<<"This will get overridden "<<endl;
    }
};
class bb : public aa {
    public:
    void ah() override {
        cout<<"This will override aa::ah() "<<endl;
    }
};
int main() {
    bb obje;
    aa *ptr;
    ptr=&obje;
    ptr->ah();
    return 0;
}
// This is overriding (runtime polymorphism / dynamic dispatch)