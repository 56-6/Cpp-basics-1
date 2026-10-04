#include<iostream>
#include<string>
using namespace std;
class one {
    public :
    string name;
    string address;
    public:
    one() {
    cout  <<"Enter the name "<<endl;
    getline(cin, name);
    cout <<"Enter the address "<<endl;
    getline(cin, address);
    }
    public :
    void print1() {
        cout<<"The name is :"<<name<<endl;
        cout<<"The address is :"<<address<<endl;
    }
};
class two : public one {
    public :
    int roll;
    float cgpa;
    public :
    two() {
        cout<<"Enter the roll :"<<endl;
        cin>>roll;
        cout<<"Enter the cgpa :"<<endl;
        cin>>cgpa;
    }
    public :
    void print2() {
        cout<<"The roll is :"<<roll<<endl;
        cout<<"The cgpa is :"<<cgpa<<endl;
    }
};
int main() {
    two obj2;
    obj2.print1();
    obj2.print2();
    return 0;
}