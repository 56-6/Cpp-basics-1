#include<iostream>
using namespace std;
int function(int array[][3]);  //in 2D array . All size should be declared,if not 2 then at least 1
int main() {
    int arr[3][3];
    cout<<"enter the elements"<<endl;
    for(int i=0;i<3;i++) {
        for(int j=0;j<3;j++) {
            cin>>arr[i][j];
        }
    }
    function(arr);
}
int function (int array[][3]) {
    for(int i=0;i<3;i++) {
        for(int j=0;j<3;j++) {
            cout<<array[j][i];
        }
        cout<<endl;
    }
}