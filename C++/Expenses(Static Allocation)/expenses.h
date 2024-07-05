#ifndef EXPENSES_H
#define EXPENSES_H
#include <iostream>
#include <string>
#include <cmath>
using namespace std;
class Personal{
    private:
    std::string name;
    double expenses[12];
    double income[12];
    int age;
    public:
    Personal();
    Personal(std::string name,int age,double* expenses,double* income);
    void setName(std::string name);
    void setMonthlyExpenses(double monthlyExpenses,int month);
    void setMonthlyIncome(double monthlyIncome,int month);
    double getMonthlyExpenses(int month);
    double getMonthlyIncome(int month);
    double getTotalExpenses();
    double getTotalIncome();
    double getAverageExpenses();
    double getAverageIncome();
    double getTotalSaving();
    void display();
    void setMonthlyincome(double* insertion);   
};



#endif 