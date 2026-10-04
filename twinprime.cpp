#include<iostream>
using namespace std;
class HHH {
    public:
    int i,j;
    int prime1=0;
    int prime2=0;
    public:
    bool isprime(int m) {
        if(m<2)
            return false;
        
        for(j=2;j<=m/2;j++){
            if(m%j==0)
            return false;
        }
        return true;
    }
    public:
    void twin(int m){
        for(int i=2;i+2<=m;i++){
            if(isprime(i)&&isprime(i+2)){
                if(i+2<=m){
                    prime1=i;
                    prime2=i+2;
                }
            }
        }
        if(prime1 && prime2) {
            cout<<"The twin prime pair where the max one is <= "<<m<<"\t"<<"are as follows :"<<prime1<<"\t"<<prime2<<endl;
        }
        else{cout<<"No twin prime pair found "<<endl;}
    }
};
int main() {
    HHH oo;
    int x;
    cout<<"Enter the integer value :"<<endl;
    cin>>x;
    oo.twin(x);
    return 0;
}