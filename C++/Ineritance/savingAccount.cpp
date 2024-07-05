#include "savingAccount.h"
saving :: saving():interest(3.0){}

void saving :: deposite(double amount){
    std::cout << "the deposition is: " << amount << '\n';
}
void saving :: withdraw(double amount){
    std::cout << " the withdraw is: " << amount << '\n';
}