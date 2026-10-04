#include <iostream>
#include <cmath>
using namespace std;

int main() {
    char var;
    cout << "Enter the character :"<<endl;
    cin>>var;
    while (var != '\n') {
    if (var == 'A') {
    int a,b;
        cout<<"Enter the numbers for addition "<<endl;
        cin>>a;
        cin>>b;
        cout<<"The addition is \n"<<a+b<<endl;
    }
    else if (var == 'S') {
    int c,d;
        cout<<"Enter the numbers for subtraction "<<endl;
        cin>>c;
        cin>>d;
        cout<<"The subtraction is \n"<<c-d<<endl;
    }
    else if(var == 'E') {
        cout<<"Thank you"<<endl;
        break;
    }
    else {
        cout<<"Invalid input"<<endl;
    }
    }
    

    return 0;
}