#include "student.h"
Course :: Course(){
    studentCount = 0;
}
Course :: Course(Student student[], int studentCount){
    if(studentCount <= 10 && studentCount > 0){
            for(int i = 0; i < studentCount; i++){
                this->student[i] = student[i];
            }
            this->studentCount = studentCount;
        }
        else if(studentCount > 10 && studentCount > 0){
            for(int i = 0; i < 10; i++){
                this->student[i] = student[i];
            }
            this->studentCount = 10;
        }
}

void Course :: addStudent(Student s){
    if(studentCount < 10){
        student[studentCount] = s;
        studentCount++;
    }
    else{
        printf("Course Is Full\n");
    }
}
void Course :: removeStudent(long int id){
    int evaluate = 0;
    for(int i = 0; i < studentCount; i++){
        if(student[i].studentID == id){
            evaluate = 1;
            for(int j = i; j < studentCount -1 ; j++){
                student[j] = student[j+1];
            }
        }
        else{
            evaluate = 0;
        }
    }
    if(evaluate == 0){
        printf("Student Not Found\n");
    }
}
double Course :: getAverage(){
    double sum = 0.0;
    if(studentCount == 0){
        sum = 0.0;
    }
    else{
        for(int i = 0; i<studentCount ; i++){
            sum += student[i].grade;
        }
    }
    return sum/studentCount;
}
void Course :: printDetails(){
    int courseCount;
    if(studentCount == 0){
        printf("--------Printing Course %d Details------\n",courseCount);
        printf("Course Is Empty\n");
        }
    else{
        printf("--------Printing Course %d Details------\n",courseCount);
    for(int i = 0; i < studentCount; i++){
        printf("Student %d: %s, %ld, %.3lf\n",i+1,student[i].name,student[i].studentID,student[i].grade);
        }
        printf("Course Average: %.3lf\n",getAverage());
    }
    courseCount++; 
}