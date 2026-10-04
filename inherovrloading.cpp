//function overloading in inheritance 
#include<iostream>
using namespace std;
class one {
    public:
    void func(){
        cout<<"First function in class one "<<endl;
    }
    public:
    void func(int g){
        cout<<"Second one ->"<<g<<endl;
    } //func() 0verloads in the scope -> class one !
};
class two:public one {    //inheritance
    public:
    void func(){    //hides one::fun() 
        cout<<"It's a Seperate function in a seperate class";
        cout<<"\n"<<"Therefore it's not overloading [name hiding happens here]"<<endl;
    }
    //using one::func; //this unhides one's versions of func();[all of the func's except ofc default one(has to be wrapped in a different name)]

    //this pulls all overloads of base class into the derived class scope [using keyword]
    
     
     void func(int a) {one ::func(a);}  //explicit forwarding [if we want just the int one]
     //we can change it's name to make it more obvious
     //example : void funcles(int a) {one ::func(a);}[then in main() -> obj.funcles(10);]
};
int main(){
    two obj;
    //obj.func(5);   //it wouldn't show one::func() cause same name functions in the derived class hides all overloads from the base class,even if their parameters lists are different,needs to be forwarded explicitly to be able to use or by using keyword ;(if parameterized then parameter count = same mainly if everything same[function signature] in different sets of classes[parent & derived]->overriding otherwise overloading)
    obj.func();
                // read more on the function overriding note 
   obj.func(10);  // two :: func(int) forwards to one::func(int) 


//    obj.two::func();
  //  obj.one::func();
   // obj.one::func(10);
  //  obj.func(100);  //here the compiler will show an error[if there's no explicit forwarding] , as compiler will omit the previous same name functions in the base class [clearly parameter difference doesn't matter]
                    // This process is called name hiding 

                    //process no 2 -->
                    //use using keyword 
    return 0;                
}