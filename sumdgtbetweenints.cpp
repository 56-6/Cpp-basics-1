//Set 2 question 3 (lab) -> Write a c++ program to add up all the digits between two given integers
#include<iostream>
using namespace std;
class HH {
    public :
    int sum=0;
    public :
    void sumdigit(int m,int n) {
        for (int i=m;i<=n;i++) {
            int sumd=i%10 + i/10;
            sum+=sumd;
        }
        cout<<"The sum is :"<<sum<<endl;
    }
};
int main () {
    HH obj;
    int x,y;
    cout<<"Enter the first integer :"<<endl;
    cin>>x;
    cout<<"Enter the second integer :"<<endl;
    cin>>y;
    obj.sumdigit(x,y);
    return 0;
}