#ifndef ASSIGNMENT_3_TRUSTACCOUNT_H
#define ASSIGNMENT_3_TRUSTACCOUNT_H
#include "SavingsAccount.h"
class TrustAccount: public SavingsAccount{
private:
    double bonus;
    int bonusForDollars;
    int bonusForEuros;
    int bonusForTenge;
public:
    TrustAccount();
    void deposit(string currency);
    void withdraw(int cash, string currency);
    void setBonus(double bonus);
    void setBonusForDollars(int bonusForDollars);
    void setBonusForEuros(int bonusForEuros);
    void setBonusForTenge(int bonusForTenge);
    double getBonus() const;
    int getBonusForDollars() const;
    int getBonusForEuros() const;
    int getBonusForTenge() const;
};

#endif //ASSIGNMENT_3_TRUSTACCOUNT_H
