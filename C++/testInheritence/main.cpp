#include <iostream>
using namespace std;
class base{
    int value;
    public:
    base(){
       cout << "Base with no arguement " << endl << '\n';
    }
    base(int x){
        value = x;
        cout << "Base with overloaded constructor" << endl << '\n';
    }
    ~base(){
        cout << "Base deconstructor" << '\n';
    }
};
class derived : public base{
    int double_value;
    public:
    derived():base(){
        double_value = 0;
        cout << "Derived constructor with no arguement " << endl << '\n';
    }
    derived(int x):base(x){
        double_value = x * 2;
        cout << "Derived overloaded constructor" << endl << '\n';
    }
    ~derived(){
        cout << "Derived deconstructor" << endl << '\n';
    }
};
int main(){
    // derived b;
    derived(1000);
    return 0;
}