#ifndef MONEY_H
#define MONEY_H
#include <iostream>

class Money {
private:
    int dollars;
    int cents;



public:
    Money(){
        dollars = 0;
        cents = 0;
    }

    Money(int dollars, int cents): dollars(dollars), cents(cents){

    }

    friend std::ostream &operator <<(std::ostream &os, const Money &money){
        os << "$" << money.cents * 0.01;
        return os;
    }
    
    bool operator<(const Money &rhs) const{
        return cents < rhs.cents;
    }

    Money operator- (){
        dollars = -dollars;
        cents = -cents;
        return Money(dollars, cents);
    }

    Money operator+ (){
        dollars = +dollars;
        cents = +cents;
        return Money(dollars, cents);
    }
    int getDollars(){
        return dollars;
    }

    int getCents(){
        return cents;
    }

    void setDollars(int newDollars){
        newDollars = dollars;
    }

    void setCents(int newCents){
        newCents = cents;
    }
};


#endif
