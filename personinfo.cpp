#include<iostream>
#include<string>
using namespace std;
class info {
    private :
    string name;
    string country;
    int age;
    public :
    void getinfo() {
        cout<<"Enter the name :";
        getline(cin,name);
        cout<<"Enter the country :";
        getline(cin,country);
        cout<<"Enter the age :";
        cin>>age;
        cin.ignore();
    }
    void putinfo() {
        cout<<"The person's "<<"Name is :"<<name<<endl<<"He's from :"<<country<<endl<<"His age being :"<<age<<endl;
    }
};
int main() {
    info obj,obj1,obj2;
    obj.getinfo();
    obj1.getinfo();
    obj2.getinfo();
    obj.putinfo();
    obj1.putinfo();
    obj2.putinfo();
    return 0;
}