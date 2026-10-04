#include <iostream>
#include<string>
using namespace std;
class ICE {
    public:
    int a;
    public:
    void descend(int n,int arr[]){   // Easier loop condition on extras file
        for(int i=0;i<n-1;i++) {
            for(int j=0;j<n-i-1;j++){   //think of the inner loop as the elements getting checked on columns while the outer loop (fixed for a whole round of inner loop counts) represents rows
                if(arr[j]<arr[j+1]){
                    int temp=arr[j];
                    arr[j]=arr[j+1];
                    arr[j+1]=temp;  //https://chatgpt.com/share/689f6dfa-5fb8-8001-b608-98062e1ebb20
                }
            }
        }
    }
};

int main() {
    ICE Onj;
    int array[100];
    int n;
    cout<<"Enter the size :"<<endl;
    cin>>n;
    cout<<"Enter the array elements :";
    for(int i=0;i<n;i++) {
        cin>>array[i];
    }
    cout<<endl;
    cout<<"The array elements are :"<<endl;
    for(int i=0;i<n;i++) {
        cout<<array[i]<<endl;
    }
    Onj.descend(n,array);
    cout<<"The elements in descending order are :"<<endl;
    for(int i=0;i<n;i++) {
        cout<<array[i]<<endl;
    }
    return 0;
}