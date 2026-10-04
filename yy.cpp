#include <iostream>
#include <cmath>
using namespace std;

int main() {
        char var;
        int a,b;
    while (true) {
        cout << "Enter the character :"<<endl;
        cin>>var;

    if (var == 'A') {
        cout<<"Enter the numbers for addition :"<<endl;
        cin>>a;
        cin>>b;
        cout<<"The addition is \n"<<a+b<<endl;
        break;
    }
    else if (var == 'S') {
        cout<<"Enter the numbers for subtraction :"<<endl;
        cin>>a;
        cin>>b;
        cout<<"The subtraction is \n"<<a-b<<endl;
        break;
    }
    else if(var == 'E') {
        cout<<"Thank you"<<endl;
        break;
    }
    else {
        cout<<"Invalid input"<<endl;
        break;
    }
    }
    

    return 0;
}