#include<iostream>
using namespace std;


class ICE 
{
    public:
    int a;
    public :
     ICE () 
    {cout<<"Classwork"<<endl;}
     ICE (int v)
    {a=v;
        cout<<v<<endl;}
ICE (const ICE &var) 
{ a=var.a;}
    };
int main () {
    ICE obj1;
    ICE obj2(9);
    ICE obj3=obj2;
    cout<<obj3.a;
}

