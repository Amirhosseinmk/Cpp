#include "account.h"
#include "savingAccount.h"
int main(){
    std::cout << "account" << '\n';
    account *acc1 = new account();
    acc1->deposite(1000.00);
    acc1->withdraw(34500.00);
    std::cout << "saving" << '\n';
    saving *save1 = new saving();
    save1->deposite(300);
    save1->withdraw(4600);
}