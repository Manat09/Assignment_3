#include "Account.h"

#ifndef ASSIGNMENT_3_CHECKINGACCOUNT_H
#define ASSIGNMENT_3_CHECKINGACCOUNT_H

class CheckingAccount:public Account{
public:
    CheckingAccount(const string &name, double balance, double dollars, double euros, double tenge);

private:
    float fee = 1.5;
public:
    float getFee() const;
};

#endif //ASSIGNMENT_3_CHECKINGACCOUNT_H
