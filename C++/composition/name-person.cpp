#include <iostream>
#include <cstring>
#define N 25
using namespace std;
class Name{
    char fname_[N];
    char lname_[N];
    public:
    Name(const char* fname,const char* lname){
        strncpy(fname_,fname,N);
        fname_[N - 1] = '\0';
        strncpy(lname_,lname,N);
        lname_[N - 1] = '\0';
    }
    ~Name(){
        cout << "Name has been deleted" << endl;
    }
    void display(){
        cout << "Name: " << fname_ << " " << lname_ << endl;
    }
};
class Person{
    Name name;
    char dob_[N];
    char gender_[N];
    public:
    Person(const char* dob,const char* gender,const char* fname,const char* lname):name(fname,lname){
        strncpy(dob_,dob,N);
        dob_[N - 1] = '\0';
        strncpy(gender_,gender,N);
        gender_[N - 1] = '\0';
    }
    ~Person(){
        cout << "Person has been deleted" << endl;
    }
    void display(){
        cout << "person data: " << endl;
        name.display();
        cout << "Date of birth: " << dob_ << endl;
        cout << "Gender: " << gender_ << endl;
    }
};
int main(){
    Person person1("15Nov","male","Amir","Khonsari");
    Person person2("11sep","female","Tara","song");
    Person person3("04June","male","Ali","Soltani");
    person1.display();
    person2.display();
    person3.display();
    return 0;
}