#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <iostream>

class Employee{
    std::string name;
    std::string position;
    int age; 
    public:
    static double runningTotal;
    static int numEmployees;
    Employee(){
        name = "";
        position = "";
        age = 0;
    }
    Employee(std::string name,std::string position,int age){
        this->name = name;
        this->position = position;
        this->age = age;
    }
    ~Employee(){}
    std::string nameGetter()const;
    std::string positionGetter()const;
    int ageGetter()const;
    void nameSetter(std::string name);
    void positionSetter(std::string position);
    void ageSetter(int age);
    
};

















#endif