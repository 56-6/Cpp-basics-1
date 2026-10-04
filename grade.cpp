#include<iostream>
#include<string>
using namespace std;
int main() {
    char grade;
    cout<<"Enter the grade"<<endl;
    cin>>grade;
    switch(grade) {   //expression not variable
        case 'A': cout<<"Average";
        break;
        case 'E': cout<<"Excellent";
        break;
        case 'G': cout<<"Good";
        break;
        case 'F': cout<<"Fail";
        break;
        case 'V': cout<<"Very Good";
        break;
        default: cout<<"Invalid input"<<endl;   
        break;
    }
    return 0;
}