#include "Account.h"

#ifndef ASSIGNMENT_3_CHECKINGACCOUNT_H
#define ASSIGNMENT_3_CHECKINGACCOUNT_H

class CheckingAccount:public Account{
private:
    double fee;
public:
    CheckingAccount(); //default constructor

    void withdraw(int cash, string currency);   //function to get money from balance with specific fee

    void deposit(string currency);

    void setFee(double fee);

    double getFee() const;
};

#endif //ASSIGNMENT_3_CHECKINGACCOUNT_H
