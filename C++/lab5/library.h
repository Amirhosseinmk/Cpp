#ifndef LIBRARY_H
#define LIBRARY_H
#include <iostream>
#include <cstring>
const int N = 64;
const int SIZE = 30;
class StudentId{
    char first_name_[N];
    char last_name_[N];
    int id_;
    public:
    StudentId(const char* firstName,const char* lastName,int id);
    void display();
};
class CourseId{
    char code_[N];
    char name_[N];
    public:
    CourseId(const char* name,const char* code);
    void display();
};
class Student;
class Course{
    CourseId course_id_;
    Student* students_[SIZE];
    int num_students_;
    public:
    Course(const char* name,const char* code);
    void display();
    void display_students();
    bool add_students(Student* student);
};
class Student{
    StudentId student_id;
    Course* courses_[SIZE];
    int num_courses_;
    public:
    Student(const char* firstName,const char* lastName,int id);
    void display();
    void display_courses();
    bool add_course(Course& course);
};































#endif  