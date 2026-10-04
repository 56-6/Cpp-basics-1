//Without return object version ,postfix acts like prefix 
#include<iostream>
using namespace std;
class prepost {
    private:
    int a;
    public:
    prepost(int m){
        a=m;
    }
    void operator++(){
        ++a;
    }
    void operator++(int){
        a++;
    }
    void display(){
        cout<<a<<endl;
    }
};
int main(){
    prepost obj(2),obj2(4);
    ++obj;//calls void operator++() [Prefix]
    obj2++; //calls void operator++(int) [Postfix]
    cout<<"After prefix ->"<<endl;
    obj.display();
    cout<<"After postfix ->"<<endl;
    obj2.display();
    return 0;
}