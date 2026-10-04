#include<iostream>
#include<cmath>
using namespace std;
int main() {
    int a,b,c;
    cout <<"enter 1st number :"<<endl;
    cin>>a;
    cout <<"enter 2nd number :"<<endl;
    cin>>b;
    cout <<"enter 3rd number :"<<endl;
    cin>>c;
    int largest=0;
    for (int i=0;i<3;i++) {

    if(a>largest)  {
        largest = a;
    }
    else if (b>largest) {
        largest =b;
    }
    else if (c>largest) {
        largest =c;
    }
    }
    cout<<"the largest number is :"<< largest<<endl;
    return 0;  
}