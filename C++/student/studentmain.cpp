#include "student.h"
#include <stdio.h>
int main(){
    Student s1 ={"Alice", 123, 90.5};
    Student s2 ={"Bob", 124, 85.5};
    Student s3 = {"Charlie", 125, 80.5};
    Student s4 = {"David", 126, 75.5};
    Student s5 = {"Eve", 127, 70.5};
    Student s6 = {"Frank", 128, 65.5};
    Student s7 = { "Grace", 129, 60.4};
    Student s8 = { "Helen", 130, 75.4};
    Student s9 = { "Ivy", 131, 80.4};
    Student s10 = { "Jack", 132, 95.4};
    Student s11 = { "Kate", 133, 90.4};
    Student student[11] = {s1, s2, s3, s4, s5, s6, s7, s8, s9, s10, s11};
    Student student2[5] = {s11, s6, s8, s10, s4};
    Course c1;
    c1.printDetails();
    Course c2(student, 11);
    c2.printDetails();
    //c2.addStudent(s11);
    //c2.removeStudent(125);
    c2.removeStudent(325);
    c1.addStudent(s1);
    c1.addStudent(s2);
    c1.addStudent(s3);
    c1.printDetails();
    

}