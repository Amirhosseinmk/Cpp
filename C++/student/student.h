#ifndef STUDENT_H
#define STUDENT_H
#include <stdio.h>
#include <iostream>
struct Student{
    char name[51];
    long int studentID;
    double grade;
};

class Course {
    private:
    Student student[10];
    int studentCount;
    public:
    Course();
    Course(Student student[], int studentCount);
    void addStudent(Student s);
    void removeStudent(long int id);
    double getAverage();
    void printDetails();
};

#endif
