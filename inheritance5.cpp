#include<iostream>
using namespace std;
class eigh;
class sev {
    public:
    void fun(){
        cout<<"This is the very first class"<<endl;
    }
    void funn(eigh obj);
};
class eigh {
    private :
    int a = 9;
    friend class sev;  //class sev is a friend class of class eigh
};
class nine : public eigh {
    public :
    void pri(){
        cout<<"Just cause class nine inherits from class eigh it doesn't become a friend OF CLASS eigh,only class sev is a friend of class eigh here"<<endl;
    }
//    void funn2(eigh obj){
//       cout<<obj.a<<endl;  //it doesn't have access to the private data member 'a' but class sev has !
//    }
};
void sev::funn(eigh obj){
    cout<<"Well,it does work as sev is a friend of class eigh meaning private member can be accessed here "<<endl;
    cout<<obj.a<<endl;
}
int main(){
    sev obj;
    obj.fun();
    eigh obje;
    obj.funn(obje);
    nine objf;
    objf.pri();
    return 0;
}
