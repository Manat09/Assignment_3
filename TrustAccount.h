#ifndef ASSIGNMENT_3_TRUSTACCOUNT_H
#define ASSIGNMENT_3_TRUSTACCOUNT_H
#include "SavingsAccount.h"
class TrustAccount: public SavingsAccount{
public:
    TrustAccount();
    void setBonus(double bonus);
    double getBonus() const;
    int getBonusDollars() const;
    void setBonusDollars(int bonusDollars);
    int getBonusEuros() const;
    void setBonusEuros(int bonusEuros);
    int getBonusTenge() const;
    void setBonusTenge(int bonusTenge);
    void deposit(string currency);
    void withdraw(int amount, string currency);
private:
    double bonus;
    int bonusDollars;
    int bonusEuros;
    int bonusTenge;
};

#endif //ASSIGNMENT_3_TRUSTACCOUNT_H
