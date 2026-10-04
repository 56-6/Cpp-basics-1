#include<iostream>
using namespace std;
class ic
{ public:
    int m,n;
    public:
    ic(int a)
    {
        cout<<a<<endl;
    }
    ic(string a) {
        cout<<a<<endl;
    }
    ic(int a,int b) {
        cout<<a+b;
    }
};
int main() {
    ic obj1(2),obj2("well"),obj3(7,6);
}