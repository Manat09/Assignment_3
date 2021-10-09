#include "SavingsAccount.h"

SavingsAccount::SavingsAccount(): interestRateDollars(10), interestRateEuros(10), interestRateTenge(10){}

void SavingsAccount::deposit(string currency){          //function that increases money by some interest according to currency
    if (currency=="dollars" || currency=="dollar"){
        SavingsAccount::setDollars(getDollars() * (1.0+(double(interestRateDollars) / 100.0)) );
    }
    if (currency=="euros" || currency=="euro") {
        SavingsAccount::setEuros(getEuros() * (1.0 + (double(interestRateEuros) / 100.0)));
    }
    if (currency=="tenges" || currency=="tenge") {
        SavingsAccount::setTenge(getTenge() * (1.0+(double(interestRateTenge) / 100.0)) );
    }
}
void SavingsAccount::withdraw(int cash, string currency){}

int SavingsAccount::getInterestRateDollars() const {
    return interestRateDollars;
}
int SavingsAccount::getInterestRateEuros() const {
    return interestRateEuros;
}
int SavingsAccount::getInterestRateTenge() const {
    return interestRateTenge;
}

void SavingsAccount::setInterestRateDollars(int interestRateDollars) {
    SavingsAccount::interestRateDollars = interestRateDollars;
}
void SavingsAccount::setInterestRateEuros(int interestRateEuros) {
    SavingsAccount::interestRateEuros = interestRateEuros;
}
void SavingsAccount::setInterestRateTenge(int interestRateTenge) {
    SavingsAccount::interestRateTenge = interestRateTenge;
}


