#include<iostream>
using namespace std;
class parent {
    public:
    parent(){
        cout<<"let's see where this goes ahh (dead rose emoji)"<<endl;
    }
};
class derived : public parent {
    public :
    derived (){
        cout<<"Go with the flow ahh (heartbreak emoji)"<<endl;
        cout<<endl<<"NO FKIN WAY IT WORKS BRUH(mathanoshto ,laga unpaid internship)"<<endl;
    }
};
int main(){
    derived obj;   // contructor flow -> parent to derived [and virtual to non-virtual] destructor flow -> the opposite
    return 0;
}