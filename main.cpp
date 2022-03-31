#include "account.h"
#include "money.h"
#include <functional>
#include <numeric>
#include <vector>

//---Git Commands---
//git pull origin master -first to get updated work changes
//git push origin master -so partner can see
//git log

int main(){

    std::vector <int> deposits;

//starting balance $300.23
    Money m(300,23);

    std::cout<< m << std::endl;

    Account account;

//new 3 deposits
    account.deposit(200, 0);
    account.deposit(300, 24);
    account.deposit(501, 22);

    int dollar1, cent1, dollar2, cent2, centF, dollarF;
//calculate dollars and cents
    dollar1 = account.addDepositD();
    cent2 = account.addDepositC();

//withdrawal 1
    dollar2 = account.withdrawD(501);
    cent2 = account.withdrawC(44);
//withdrawal 2
    dollarF = account.withdrawD(201);
    centF = account.withdrawC(34);

//balance
    std::cout << Money (dollarF, centF) << std::endl;



//auto sum_deposits = std::accumulate(deposits.begin(), deposits.end(),m);

    return 0;
}
