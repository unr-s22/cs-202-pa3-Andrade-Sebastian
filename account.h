#ifndef ACCOUNT_H
#define ACCOUNT_H
#include "money.h"
#include <iostream>
#include <vector>

class Account : public Money {

public:
    Account(){
        Money w{Account{}};
    }

    bool makeDeposit(int deposit){

        std::vector<Money> deposit;
    }

    bool makeWithdrawals(int withdrawal){
        std::vector<Money> withdrawal;
    }


    friend std::ostream &operator<< (std::ostream &os, const Account &account){
        os << "Account Details" << std::endl;
        os << "-----------------------------" << std::endl;
        os << "Current Balance: $"  << std::endl;
        os << "-----------------------------" << std::endl;
        os << "Number of Deposits: " << std::endl;
        os << "------------------" << std::endl;
        os << "Number of Withdrawals:" << std::endl;
        os << "------------------" << std::endl;

        return os;
    }




};


#endif