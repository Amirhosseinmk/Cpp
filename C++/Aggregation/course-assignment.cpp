#include <iostream>
#include <cstring>
#define N 16
using namespace std;
class Assignment{
    char name_[N];
    float marks_;
    public:
    Assignment(const char* name,float marks){
        strncpy(name_,name,N);
        name_[N - 1] = '\0';
        marks_ = marks;
    }
    ~Assignment(){
        cout << "Assignment has been deleted\n" << endl;
    }
    void display(){
        cout << "Assignment: " << name_ << endl;
        cout << "marks: " << marks_ << endl;
    }

};
class Course{
    char code_[N];
    char name_[N];
    Assignment* assignment_[16] = {};
    int num_assignment_ = 0;
    public:
    Course(const char* code,const char* name){
        strncpy(code_,code,N);
        code_[N - 1] = '\0';
        strncpy(name_,name,N);
        name_[N - 1] = '\0';
    }
    ~Course(){
        cout << "Course has been deleted\n";
    }
    void add_assignment(Assignment* assignment){
        assignment_[num_assignment_] = assignment;
        num_assignment_++;
    }
    void display_assignment(){
        cout << "Assignment list" << endl;
        cout << "----------------" << endl;
        for(int i = 0; i < num_assignment_;i++){
            assignment_[i]->display();
        }
    }
};
int main(){
    Assignment exercise1("C++",98),exercise2("web",50),exercise3("pythone",80),exercise4("Java",30);
    Course software_Engineering("1143","BSA"), software_Dev("1144","BSD");
    software_Engineering.add_assignment(&exercise1);
    software_Engineering.add_assignment(&exercise3);
    software_Engineering.add_assignment(&exercise4);
    software_Dev.add_assignment(&exercise2);
    software_Engineering.display_assignment();
    software_Dev.display_assignment();
    return 0;
}