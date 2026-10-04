#include<iostream>
using namespace std;
class one{
    public:
    int num;
    void input(){
        cout<<"Enter the number :"<<endl;
        cin>>num;
    }
    void square(){
        cout<<"The square of that number is ->"<<"\t"<<num*num<<endl;
    }
    void cube(){
        cout<<"The cube of that number is ->"<<"\t"<<num*num*num<<endl;
    }
};
class child1:public one {
};
class child2:public one {
};
int main() {
    child2 obj;
    child1 obj2;
    obj.input();
    obj.square();
    obj.cube();
    obj2.input();
    obj2.square();
    obj2.cube();
    return 0;
}