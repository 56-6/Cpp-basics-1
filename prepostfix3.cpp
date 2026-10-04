#include <iostream>
using namespace std;

class Number {
    int value;

public:
    // Constructor
    Number(int v = 0) : value(v) {}

    // Pre-increment: ++obj
    Number operator++() {
        ++value; // increase first
        return *this;
    }

    // Post-decrement: obj--
    Number operator--(int) {
        Number temp = *this; // save current state
        value--;             // decrease afterwards
        return temp;         // return old value
    }

    void display() {
        cout << "Value = " << value << endl;
    }
};

int main() {
    Number n(5);

    cout << "Initial: ";
    n.display();

    cout << "\nApplying pre-increment (++n):" << endl;
    ++n;
    n.display();
    Number m=++n;
    cout<<"Won't show the default value as this pointer is afterwards the increment operation [so incrementation happens beforehand]"<<endl;
    m.display();

    cout << "\nApplying post-decrement (n--):" << endl;
    n--;
    n.display();
    Number r =n--;
    r.display();
    cout<<"However without 'this' pointer returned [temp object], it won't show default [will get decremented ,n--]"<<endl;
    n.display();

    return 0;
}
