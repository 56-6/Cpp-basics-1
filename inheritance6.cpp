#include<iostream>
using namespace std;
class h;
class w  {
    public:
    void fun(h j);
};
class h {
    private:
    int val;
    public:
    h(int a){
        val=a;
    }
    public :
    void print(){
        cout<<"cause w::fun(h obj) is a friend function"<<endl;
    }
    friend void w:: fun(h j);
    friend class g;   //Derived friend class forward declaration
};
void w::fun(h j){
    cout<<"Accessing the private member ->"<<j.val<<endl;
}
class g : public h {
    public :
    g():h(0){}   //or any value
    public:
    void fri2(h j){
        cout<<"this(class g) is a friend as well as it's declared friend in class h ( explicit declaration of friend )"<<"\t";
        cout<<"and so it can access the private data member ->"<<j.val<<endl;
    }
};
int main(){
    w obj;
    h ko(6);
    g obg;
    obj.fun(ko);
    ko.print();
    obg.fri2(ko);
    return 0;
}