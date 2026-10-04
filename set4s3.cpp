#include<iostream>
#include<string>
using namespace std;
class one {
    public :
    string name;
    string designation;
    one(){
        cout<<"Enter the name and designation of the employee :"<<endl;
        getline(cin,name);
        getline(cin,designation);
    }
};
class two {
    public:
    double salary;
    int experience;
    two(){
        cout<<"Enter the salary and experience of the employee :"<<endl;
        cin>>salary>>experience;
    }
};
class three :public one,public two {
    public:
    three(){
        cout<<"the employee's information set are ->"<<endl;
        cout<<name<<"\t"<<designation<<endl;
        cout<<salary<<"\t"<<experience<<endl;
    }
};
int main(){
    three obj;
    return 0;
}