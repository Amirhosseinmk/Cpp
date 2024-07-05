#include "expenses.h"
#include <iostream>
Personal :: Personal(){
    for(int i = 0 ;i < 12;i++){
            expenses[i] = 0;
            income[i] = 0;
        }
        age = 0;
        name = "";
}

Personal :: Personal(std::string name,int age,double* expenses,double* income){
    for(int i = 0; i < 12; i++){
            this->expenses[i] = expenses[i];
            this->income[i] = income[i];
        }
        this->age = age;
        this->name = name;
}

void Personal :: setName(std::string name){
    this->name = name;
}
void Personal :: setMonthlyExpenses(double monthlyExpenses,int month){
    if(month <= 12 && month > 0){
        this->expenses[month-1] = monthlyExpenses;
    }
    else{
        cout << "You are inserting the wrong month" << '\n';
    }
}
void Personal :: setMonthlyIncome(double monthlyIncome,int month){
    if(month <= 12 && month > 0){
        this->income[month-1] = monthlyIncome;
    }
    else{
       cout << "You are inserting the wrong month" << '\n';
    }
}
double Personal :: getMonthlyExpenses(int month){
    if(month <= 12 && month > 0){
       return this->expenses[month-1];
    }
    else{
        cout << "You are inserting the wrong month" << '\n';
        return 0;
    }
}
double Personal :: getMonthlyIncome(int month){
    if(month <= 12 && month > 0){
        return this->income[month-1];
    }
    else{
        cout << "You are inserting the wrong month" << '\n';
        return 0;
    }
} 
double Personal :: getTotalExpenses(){
    double sum = 0.0;
    for(int i = 0; i < 12; i++){
        sum += this->expenses[i];
    }
    return sum;
}
double Personal :: getTotalIncome(){
    double sum = 0.0;
    for(int i = 0; i < 12; i++){
        sum += this->income[i];
    }
    return sum;
}
double Personal :: getAverageExpenses(){
    return getTotalExpenses()/12.00;
}
double Personal :: getAverageIncome(){
    return getTotalIncome()/12.00;
}
double Personal :: getTotalSaving(){
    return getTotalIncome() - getTotalExpenses();
}
void Personal :: display(){
    cout << "Name:" << name << '\n';
    cout << "Age:" << age << '\n';
    cout << "Monthly Expenses:[";
    for(int i = 0 ; i < 12;i++){
        cout << expenses[i];
        if( i < 11){
        cout << ",";
        }
    }
    cout << "]" << '\n';
    cout << "Monthly Income:[";
    for(int i = 0 ;i < 12; i++){
        cout << income[i];
        if( i < 11){
        cout << ",";
        }
    }
    cout << "]" << '\n';
}
void Personal :: setMonthlyincome(double* insertion){
    for(int i = 0; i < 12; i++){
            income[i] = insertion[i];
        }
    }


