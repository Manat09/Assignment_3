#ifndef ASSIGNMENT_3_SAVINGSACCOUNT_H
#define ASSIGNMENT_3_SAVINGSACCOUNT_H
#include "Account.h"

class SavingsAccount : public Account{
public:
    SavingsAccount();
    void setInterestRateDollars(double interestRateForDollars);
    void setInterestRateEuros(double interestRateForEuros);
    void setInterestRateTenge(double interestRateForTenge);

    double getInterestRateDollars() const;
    double getInterestRateEuros() const;
    double getInterestRateTenge() const;

    void deposit(string currency);
    void withdraw(int cash, string currency);
private:
    double interestRateDollars;
    double interestRateEuros;
    double interestRateTenge;
};
#endif //ASSIGNMENT_3_SAVINGSACCOUNT_H
