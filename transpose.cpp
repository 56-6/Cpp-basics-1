#include<iostream>
using namespace std;
int main() {
    int a[3][3];
    cout<<"enter the elements"<<endl;
    for(int i=0;i<3;i++) {
        for(int j=0;j<3;j++){
            cin>>a[i][j];
        }
    }
    for(int k=0;k<3;k++) {
        for(int m=0;m<3;m++) {
            cout<<a[k][m];
        }
        cout<<endl;
    }
    cout<<endl;
    for(int l=0;l<3;l++){
        for(int b=0;b<3;b++) {
            cout<<a[b][l];
        }
        cout<<endl;
    }
}