#include<iostream>
using namespace std;
class def {
    public :
    def(int m,int n=20);
};
def :: def (int m,int n){
    cout<<m+n<<endl;
}
int main() {
    def obj(35),obj2(25,37);
    return 0;
}