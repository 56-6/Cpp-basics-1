#include<iostream>
#include<cmath>
using namespace std;
int main() {
    int a,b,c,sum;
    float avg;
    float area;
    cout<<"Enter value of a"<<endl;
    cin>>a;
    cout<<"Enter value of b"<<endl;
    cin>>b;
    cout<<"Enter value of c"<<endl;
    cin>>c;
    sum =a+b+c;
    avg=sum/2;
    area=sqrt(avg*(avg-a)*(avg-b)*(avg-c));
    cout<<"The area would be :"<<area<<endl;
    return 0;
}
