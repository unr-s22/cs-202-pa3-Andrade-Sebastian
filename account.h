#include "money.h"
#ifndef ACCOUNT_H
#define ACCOUNT_H
#include <vector>
#include <numeric>

class Account {
public:
    std::vector<int> centsVector{23};
    std::vector<int> dollarsVector{300};


    void deposit(int dollars, int cents){
        centsVector.push_back(cents);
        dollarsVector.push_back(dollars);
    }
    int addDepositC(){
        int cent = (std::accumulate(centsVector.begin(),centsVector.end(),0));

        return cent;
    }
    int addDepositD(){
        int dollar = (std::accumulate(dollarsVector.begin(),dollarsVector.end(),0));

        return dollar;
    }
    auto withdrawD(int dollars){
        int dollar = (std::accumulate(dollarsVector.begin(),dollarsVector.end(),0) - dollars);

        return dollar;

    }

    auto withdrawC(int cents) {
        int cent = (std::accumulate(centsVector.begin(), centsVector.end(), 0) - cents);

        return cent;
    }


};

#endif