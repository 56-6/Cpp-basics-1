#include<iostream>
using namespace std;
class student {
    private:
    int marks;
    public:
    student (int f){
        marks=f;
    }
    student operator++(){
        student temp=*this;
         ++marks;
        return temp;
    }
    student operator++(int){
        student tem=*this;
        marks++;
        return tem;
    }
    void display(){
        cout<<"The marks is :"<<marks<<endl;
    }
};
int main() {
    int n,k;
    cout<<"Enter the marks ->"<<endl;
    cin>>n>>k;
    student obj(n),obj2(k);
    cout<<"Marks before ->"<<endl;
    student r=++obj;
    student p=obj2++;
    r.display(),p.display();
    ++obj,++obj,++obj,++obj;
    obj2++,obj2++,obj2++,obj2++;
    cout<<"Marks after ->"<<endl;
    cout<<"After overloading prefix++ operator ,the marks incremented !"<<endl;
    obj.display();
    cout<<"After overloading postfix++ operator similarly ,marks incremented->"<<endl;
    obj2.display();
    cout<<"Original marks before incrementation through postfix++ operator is ->"<<endl;
    p.display();
    return 0;
}