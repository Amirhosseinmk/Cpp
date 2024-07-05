#include <iostream>
#include <cstring>
#define N 16
using namespace std;
class Course;
class Room{        //these classes are associated if we delete Room class nothing will happen
    char name_[N];
    public:
    Room(const char* name){
        strncpy(name_,name,N);
    }
    ~Room(){
        cout << "Room is deleted\n";
    }
    friend class Course;  
};
class Course{
    char code_[N];
    char name_[N];
    char room_name_[N] = {};
    public:
    Course(const char* code,const char* name){
        strncpy(code_,code,N);
        code_[N - 1] = '\0';
        strncpy(name_,name,N);
        name_[N - 1] = '\0';
    }
    void book_room(Room* rooms){
        strncpy(room_name_,rooms->name_,N);
    }
    void display_info(){
        cout << "Course code: " << code_ << endl;
        cout << "Course name: " << name_ << endl;
        cout << "Room: " << room_name_ << endl;
    }
    ~Course(){
        cout << "Course has been deleted" << endl;
    }
};
int main(){
    Course web_dev("11346","HTML");
    Course Cpp("6784","C-programing");
    Room room1("A3288"), room2("K4356");
    web_dev.book_room(&room1);
    Cpp.book_room(&room2);
    web_dev.display_info();
    Cpp.display_info();
    return 0;
}