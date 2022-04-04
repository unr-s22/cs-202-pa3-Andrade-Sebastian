#ifndef ACCOUNT_H
#define ACCOUNT_H
#include "money.h"
#include <iostream>
#include <vector>

class Account {
        bool d, w;
Money money;
std::vector<Money> Deposit;
std::vector<Money> Withdrawals;
public:
    explicit Account(Money m){
    Deposit.push_back(m);
    money = m;
    d = w = false;
    }
    bool makeDeposit(Money deposit){
        Deposit.push_back(deposit);
        d = true;
        return d;
    }
    bool makeWithdrawals(Money withdrawal){
        Withdrawals.push_back(withdrawal);
        w = true;
        return w;
    }
    Money getBalance(){
        if (!d && !w)
            return money;
        money = Deposit[0];
        for (int i = 1; i < Deposit.size(); i++)
            money = money + Deposit[i];
        for (auto & Withdrawal : Withdrawals)
            money = money - Withdrawal;
    return money;
    }

    friend std::ostream &operator << (std::ostream &os, Account &account){
        os<< "Account Details" <<std::endl;
        os<< "-----------------------------" <<std::endl;
        os<< "Current Balance: " << account.getBalance() <<std::endl;
        os<< "-----------------------------" <<std::endl;
        os<< "Number of Deposits: " << account.Deposit.size() <<std::endl;
        os<< "------------------" <<std::endl;
        for (int i = 0; i < account.Deposit.size(); i++)
            os<< "(" << (i + 1) << ") " << account.Deposit[i] <<std::endl;
        os<< "Number of Withdrawals: " << account.Withdrawals.size() <<std::endl;
        os<< "------------------" <<std::endl;
        for (int i = 0; i < account.Withdrawals.size(); i++)
            os<< "(" << (i + 1) << ") " << account.Withdrawals[i] <<std::endl;
        return os;
    }

};


#endif