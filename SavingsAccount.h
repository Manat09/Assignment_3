#ifndef ASSIGNMENT_3_SAVINGSACCOUNT_H
#define ASSIGNMENT_3_SAVINGSACCOUNT_H
#include "Account.h"

class SavingsAccount : public Account{
public:
    SavingsAccount();
    void setInterestRateDollars(int interestRateForDollars);
    void setInterestRateEuros(int interestRateForEuros);
    void setInterestRateTenge(int interestRateForTenge);

    int getInterestRateDollars() const;
    int getInterestRateEuros() const;
    int getInterestRateTenge() const;

    void deposit(string currency);
    void withdraw(int cash, string currency);
private:
    int interestRateDollars;
    int interestRateEuros;
    int interestRateTenge;
};
#endif //ASSIGNMENT_3_SAVINGSACCOUNT_H
