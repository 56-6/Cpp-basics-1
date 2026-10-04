#include<iostream>
using namespace std;
class BankAccount {  
    private :
    int balance;
    public:
    BankAccount(int m){
        balance=m;
    }
    void operator--(){
        --balance;
    }
    BankAccount operator--(int){
        BankAccount temp=*this;
        balance--;
        return temp;
    }
    void display(){
        cout<<"The Balance is ->"<<"\t"<<balance<<"$"<<endl;
    }
};
int main(){
    int x,y;
    cout<<"Enter the balance: "<<endl;
    cin>>x>>y;
    BankAccount obj1(x),obj2(y);
    cout<<"Initial values ->"<<endl;
    obj1.display(),obj2.display();
    --obj1;
    cout<<"Prefix happens !"<<endl;
    obj1.display();
    cout<<"Deducts first ,then returns new value "<<endl;
    cout<<"Postfix happens ! "<<endl;
    BankAccount result=obj2--;
    result.display();
    obj2.display();
    cout<<"The postfix operator returns the old value and then deducts "<<endl;
    return 0;
}