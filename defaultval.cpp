#include<iostream>
using namespace std;
void def(int a,int b=20);
int main() {
    def(30);//however if we do send a value, then the sent value will be used not 20!
    //def(30,10);  will OUTPUT 40
    return 0;
}
void def(int a,int b) {
    cout<<"sum is :"<<a+b; //outputs 50
}