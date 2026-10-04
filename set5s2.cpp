#include<iostream>
#include<string>
using namespace std;
class printer {
    public:
    void print(int x){
        cout<<x<<endl;
    }
    void print(double y){
        cout<<y<<endl;
    }
};
class AdvancedPrinter:public printer {
    public:
    void print(string s){
    cout<<s<<endl; }
   // using printer::print;
    void pri(double y){printer::print(y);}

};
int main(){
    AdvancedPrinter obj;
    obj.print("s");
    //obj.print(5.6);
    obj.pri(10.5);
    //obj.print("Eya");
    //obj.print(9.876);
    obj.printer::print(12);
    obj.printer::print(12.445);
    obj.AdvancedPrinter::print("Hahahahahqhq");
    return 0;
}