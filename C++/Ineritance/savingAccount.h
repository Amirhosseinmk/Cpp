#ifndef SAVINGACOUNT_H
#define SAVINGACOUNT_H
#include "account.h"

class saving : public account{
    public:
    double interest;
    saving();
    void deposite(double amount);
    void withdraw(double amount);

};
#endif