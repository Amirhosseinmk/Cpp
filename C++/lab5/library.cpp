#include "library.h"
using namespace std;
StudentId::StudentId(const char* firstName,const char* lastName,int id){
    strncpy(first_name_,firstName,N);
    first_name_[N - 1] = '\0';
    strncpy(last_name_,lastName,N);
    last_name_[N - 1] = '\0';
    id_ = id;
}
void StudentId::display(){
    cout << "Name: " << first_name_ << " " << last_name_ << endl;
    cout << "ID: " << id_ << endl;
}
CourseId::CourseId(const char* name,const char* code){
    strncpy(code_,code,N);
    code_[N - 1] = '\0';
    strncpy(name_,name,N);
    name_[N - 1] = '\0';
}
void CourseId::display(){
    cout << "Course Code: " << code_ << endl;
    cout << "Course Name: " << name_ << endl;
}
class Student;
Course::Course(const char* name,const char* code):course_id_(name,code){
    num_students_ = 0;
    for(int i = 0; i < SIZE;i++){
        students_[i] = nullptr;
    }
}
void Course::display(){
    course_id_.display();
}
void Course::display_students(){
    course_id_.display();
    cout << "List of students: " << endl;
    for(int i = 0; i < num_students_; i++){
        students_[i]->display();
    }
}
bool Course::add_students(Student* student){
    bool flag = true;
    if(num_students_ >= SIZE){
        flag = false; 
    }
    else{
        students_[num_students_] = student;
        num_students_++;
        flag = true;
    }
    return flag;
}
Student::Student(const char* firstName,const char* lastName,int id):student_id(firstName,lastName,id){
    num_courses_ = 0;
    for(int i = 0;i < SIZE;i++){
        courses_[i] = nullptr;
    }
}
void Student::display(){
    student_id.display();
}
void Student::display_courses(){
    student_id.display();
    for(int i = 0; i < num_courses_;i++){
        courses_[i]->display();
    }
    cout << "--------------------------------" << endl;
}
bool Student::add_course(Course& course){
    if(num_courses_ >= SIZE){
        return false;
    }
    else{
        courses_[num_courses_] = &course;
        num_courses_++;
        return course.add_students(this);
    }
}
