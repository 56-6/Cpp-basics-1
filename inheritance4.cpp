#include<iostream>
using namespace std;
class b;
class a{
    public:
    void cl(){
        cout<<"Nothing compares"<<endl;
    }
     void fun(b obj);
};
class b : public a{
    private:
    int num=10;
    public:
    void cl2(){
        cout<<"Friend doesn't allow inheritance"<<endl;
    }
   // friend void a :: fun(b obj); // [we have to explicitly declare like this ( as a friend function inside of b) ]
    // friend class a;  //or like this [friend class]
};
void a::fun(b obj){
    //cout<<obj.num<<endl; //a::fun doesn't have special access to the private members in b even though b inherits from parent class a,just cause 
}   //b inherits from a,it doesn't mean a's functions automatically gets friend access to b,need to explicitly be declared inside b

//but if num were set public we would have been able to access it
int main(){
    a obj;
    obj.cl();
    b obj1;
    obj1.cl2();
    obj1.cl(); //inheritance
    obj.fun(obj1); //doesn't work[ERROR]
    return 0;
}
//But friendship is not inherited → meaning:

//If class B makes function f its friend,

//and later class C : public B is defined,

//then f is not automatically a friend of C unless declared again.

//So, the friendship is one-to-one; it doesn’t propagate down the inheritance chain.