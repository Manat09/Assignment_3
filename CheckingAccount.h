#ifndef ASSIGNMENT_3_CHECKINGACCOUNT_H
#define ASSIGNMENT_3_CHECKINGACCOUNT_H

#include "Account.h"

class CheckingAccount:public Account{
public:
    CheckingAccount(); //default constructor

    void withdraw(int amount, string currency);
    void deposit(string currency);
    void setFee(double fee);
    double getFee() const;
private:
    double fee;
};

#endif //ASSIGNMENT_3_CHECKINGACCOUNT_H
