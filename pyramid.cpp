#include<iostream>
using namespace std;
int main() {
    int i,j;
    for (i=0;i<3;i++) {
        for(j=0;j<=i;j++) {
            cout<<'^';
        }
        cout<<endl;
    }
    //also transpose for 2 by 2 matrix(3 by 3 in transpose.cpp)
    int arr[2][2]={{1,2},{3,4}};
    for(int k=0;k<2;k++) {
        for(int m=0;m<2;m++){
            cout<<arr[m][k];
        }
        cout<<endl;
    }
}