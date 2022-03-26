#ifndef MONEY_H
#define MONEY_H
#include <iostream>

class Money {
private:
    int dollars;
    int cents;

public:
    //constructors
    Money(){
        dollars = 0;
        cents = 0;
    }

    Money(int dollars, int cents): dollars(dollars), cents(cents){

    }

    //getters & setters
    int getDollars(){
        return dollars;
    }

    int getCents(){
        return cents;
    }

    void setDollars(int newDollars){
        dollars = newDollars;
    }

    void setCents(int newCents){
        cents = newCents;
    }
    
    bool operator<(const Money &rhs) const{
        return cents < rhs.cents;
    }

    Money operator-(const Money& m){
        Money money;
        money.dollars = this->dollars - m.dollars;
        money.cents = this->cents - m.cents;
        return money;
    }

    Money operator+(const Money& m){
        Money money;
        money.dollars = this->dollars + m.dollars;
        money.cents = this->cents + m.cents;
        return money;
    }

    //overload of << including $ printout
    friend std::ostream &operator<< (std::ostream &os, const Money &money){
        os << "$" << money.cents * 0.01;
        return os;
    }
};


#endif
