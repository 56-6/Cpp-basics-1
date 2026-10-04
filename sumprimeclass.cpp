#include<iostream>
using namespace std;
class rate {
    public:
    int i,j,isprime,count,sum,n;
    public:
    void prime() {
        cout<<"Enter the range :"<<endl;
        cin>>n;
        sum=0;
        count =0;
        cout<<"The prime numbers in the mentioned range are :"<<endl;
        for(i=2;i<=n;i++){
            isprime =1;
            for(j=2;j<=i/2;j++){
                if(i%j==0){
                    isprime=0;
                    break;
                }
            }
        if(isprime){
            cout<<i<<"\t";
            sum+=i;
            count++;
            if(count == n){
                break;
            }
        }
    }
    cout<<"The sum in the mentioned range is :"<<sum<<endl;
    }
};
int main() {
    rate ob;
    ob.prime();
    return 0;
}