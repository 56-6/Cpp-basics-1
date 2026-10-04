#include<iostream>
using namespace std;
class two;  //forward declaration of class
class one {
    public :
    void display (two object);
};
class two {
    private :
    int a;
    public :
    two () {
        a=30;
    }
    friend void one :: display (two obj1);
};
void one :: display (two object) {
    cout<<object.a;
}
int main() {
    one obj;
    one obj1;
    two obj2;
    obj1.display(obj2);
}