#ifndef ACCOUNT_H
#define ACCOUNT_H
#include <iostream>
class account{
    public:
    double balance;
    std::string name;
    account();
    void deposite(double amount);
    void withdraw(double amount);
};














#endif