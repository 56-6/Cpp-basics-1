//Function Overloading (functions with same names are allowed but the parameters type or parameter count has to be different)
//return type doesn't matter

#include<iostream>
#include<cmath>
using namespace std;
void same();
void same(int x,int y);
float same(float x,float y);
int main () {
    int a=10;
    int b=20;
    float p=5.2;
    float q=8.9;
    same();
    same(a,b);
    cout<<same(p,q)<<endl;
    return 0;
}
void same() {
    cout<<"hello there"<<endl;
}
void same(int a,int b) {
    cout<<a+b<<endl;
}
float same (float x,float y) {
    return y-x;
}