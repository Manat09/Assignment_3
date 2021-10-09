#include "SavingsAccount.h"

SavingsAccount::SavingsAccount(): interestRateDollars(50), interestRateEuros(50), interestRateTenge(50){}

double SavingsAccount::getInterestRateDollars() const {
    return interestRateDollars;
}
double SavingsAccount::getInterestRateEuros() const {
    return interestRateEuros;
}
double SavingsAccount::getInterestRateTenge() const {
    return interestRateTenge;
}
void SavingsAccount::setInterestRateDollars(double interestRateDollars) {
    SavingsAccount::interestRateDollars = interestRateDollars;
}
void SavingsAccount::setInterestRateEuros(double interestRateEuros) {
    SavingsAccount::interestRateEuros = interestRateEuros;
}
void SavingsAccount::setInterestRateTenge(double interestRateTenge) {
    SavingsAccount::interestRateTenge = interestRateTenge;
}
void SavingsAccount::deposit(string currency){
    if (currency=="dollars"){
        setDollars(getDollars() * (1 + (interestRateDollars / 100)) );
    }
    else if (currency=="euros") {
        setEuros(getEuros() * (1 + (interestRateEuros / 100)));
    }
    else{
        setTenge(getTenge() * (1 + (interestRateTenge / 100)) );
    }
}
void SavingsAccount::withdraw(int cash, string currency){}
