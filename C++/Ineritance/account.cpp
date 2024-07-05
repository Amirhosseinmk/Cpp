#include "account.h"
account :: account():balance(0.0),name("An account"){
}
void account :: deposite(double amount){
    std::cout << "the deposition is : " << amount << '\n';
}
void account :: withdraw(double amount){
    std::cout << "the withdrawn is : " << amount << '\n';
}
