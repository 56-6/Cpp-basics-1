#include<iostream>
#include<cmath>
using namespace std;
int fun();
int main() {
    cout<<"The sum is "<<fun()<<endl;
}
int fun () {
    int i,n, j,isprime;
    int sum=0,count=0;
    cout<<"Enter the integer input  ";
    cin>>n;
      cout<<"the prime numbers in the mentioned range are as follows"<<endl;
    for (i=2;i<=50;i++) {
        isprime=1;
        for(j=2;j<=i/2;j++) {
            if(i%j ==0) {
                isprime=0;
                break;
            }
        }
        if(isprime) {
            cout<<i<<endl;
            count++;
            sum+=i;
            if(count==n) {
                break;
            }
    }
 }  
    
    return sum;
}