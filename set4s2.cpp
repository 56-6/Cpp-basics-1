#include<iostream>
#include<string>
using namespace std;
class one {
    public:
    string name;
    string address;
    one(){
        cout<<"Enter the name and address :"<<endl;
        getline(cin,name);
        getline(cin,address);
    }
};
class two:public one{
    public:
    int roll;
    float cgpa;
    two(){
        cout<<"Enter the roll and cgpa :"<<endl;
        cin>>roll>>cgpa;
    }
};
class three:public two {
    public:
    three(){
        cout<<"the information of that student are as follows ->"<<endl;
        cout<<name<<"\t"<<address<<endl;
        cout<<roll<<"\t"<<cgpa<<endl;
    }
};
int main(){
    three obj;
    return 0;
}