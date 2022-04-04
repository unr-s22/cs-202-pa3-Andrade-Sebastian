#include "account.h"
#include "money.h"

//---Git Commands---
//git pull origin master -first to get updated work changes
//git push origin master -so partner can see
//git log

int main(){

    Account account(Money(300, 23));
    std::cout << account.getBalance() << std::endl;
    account.makeDeposit(Money(200, 00));
    account.makeDeposit(Money(300, 24));
    account.makeDeposit(Money(501, 22));
    std::cout << account.getBalance() << std::endl;
    account.makeWithdrawals(Money(300, 10));
    account.makeWithdrawals(Money(201, 34));
    std::cout << account.getBalance() << std::endl;
    return 0;
}

