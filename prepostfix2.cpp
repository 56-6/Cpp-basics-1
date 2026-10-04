//Postfix with return-object version → the real C++-like behavior → returns old value, increments afterwards.Also prefix with return object version
#include<iostream>
using namespace std;
class prepost {
    private :
    int m;
    public:
    prepost(int x){
        m=x;
    }
    prepost operator++(){  //This is prefix
        ++m;
        return *this;
    }
    prepost operator++(int){  //A dummy int which differentiate between the operator++ function for prefix and postfix
        prepost temp=*this;
        m++;
        return temp;
    }
    void display(){
        cout<<"The Value is ->"<<"\t"<<m<<endl;
    }
};
int main() {
    prepost obj1(8),obj2(9);
    cout<<"Initial value of the objects ->"<<endl;
    obj1.display(),obj2.display();
    prepost result1=++obj2;
     cout<<"After the prefix process ->"<<endl;
    result1.display();
    cout<<"This will show the value beforehand(default)  ->"<<endl;
    prepost result2=obj1++;
    result2.display();
    cout<<"Now the default value changes as it got incremented [postfix]"<<endl;
    obj1.display();
    return 0;
}