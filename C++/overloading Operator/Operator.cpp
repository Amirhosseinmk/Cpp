#include <iostream>
#include <string>
#define SIZE 10
using namespace std;
struct Information{
    string name;
    int age;
    Information(){
        name = "";
        age = 0;
    }
    Information(string name,int age){
        this->name = name;
        this->age = age;
    } 
};
struct Mylist{
    Information list[SIZE];
};
    /*void operator<<(ostream& COUT,Information& data){
    COUT << "Name:" << data.name << '\n';
    COUT << "AGE:" << data.age << '\n';
    }*/
    ostream& operator<<(ostream& COUT,Information& data){
    COUT << "Name:" << data.name << '\n';
    COUT << "AGE:" << data.age << '\n';
    return COUT;
    }
    ostream& operator<<(ostream& COUT,Mylist& list){
        for(int i = 0; i < SIZE; i++){
        COUT << list.list[i];
        }
    return COUT;
    }
int main(){
    Information client1 = Information("John",40);
    Information client2 = Information("Kevin",34);
    Mylist info;
    info.list[0] = client1;
    info.list[1] = client2;
    //cout << client1 << client2;
    cout << info;

}