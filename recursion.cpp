#include<iostream>
#include<cmath>
using namespace std;
int main () {
    int i,j,isprime;
    cout<<"Prime numbers within the mentioned range are"<<endl;
    for(i=2;i<=100;i++) {
        isprime=1;
        for(int j=2;j<=i/2;j++) {
            if (i%j ==0) {
                isprime=0;
                break;
            }
        }
            if (isprime) {
            cout<<i<<endl;
        }
    }
    return 0;
}