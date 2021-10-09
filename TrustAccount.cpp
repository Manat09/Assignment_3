#include "TrustAccount.h"

double TrustAccount::getBonus() const {
    return bonus;
}

void TrustAccount::setBonus(double bonus) {
    TrustAccount::bonus = bonus;
}

int TrustAccount::getBonusDollars() const {
    return bonusDollars;
}
void TrustAccount::setBonusDollars(int bonusDollars) {
    TrustAccount::bonusDollars = bonusDollars;
}
int TrustAccount::getBonusEuros() const {
    return bonusEuros;
}
void TrustAccount::setBonusEuros(int bonusEuros) {
    TrustAccount::bonusEuros = bonusEuros;
}
int TrustAccount::getBonusTenge() const {
    return bonusTenge;
}
void TrustAccount::setBonusTenge(int bonusTenge) {
    TrustAccount::bonusTenge = bonusTenge;
}

TrustAccount::TrustAccount() : bonus(0), bonusDollars(10), bonusEuros(10), bonusTenge(10) {}

void TrustAccount::deposit(string currency){
    if (currency == "dollars") {
        if (getDollars()>=1000){
            setDollars(  getDollars() * (1 + (getInterestRateDollars()) / 100));
            setBonus(getBonus()+getBonusDollars());
        }
        else
            setDollars(getDollars() * (1 + (getInterestRateDollars()) / 100));
    }
    else if (currency=="euros") {
        if (getEuros()>=1000){
            setEuros(  getEuros() * (1 + (getInterestRateEuros()) / 100));
            setBonus(getBonus()+getBonusEuros());
        }
        else
            setEuros(getEuros() * (1 + (getInterestRateEuros()) / 100));
    }
    else {
        if (getTenge()>=1000){
            setTenge(  getTenge() * (1 + (getInterestRateTenge()) / 100));
            setBonus(getBonus()+getBonusTenge());
        }
        else
            setTenge(getTenge() * (1 + (getInterestRateTenge()) / 100));
    }
}

void TrustAccount::withdraw(int amount, string currency){
    double sumOfDollars = getDollars() / 100.0 * 20;
    double sumOfEuros = getEuros() / 100.0 * 20;
    double sumOfTenge = getTenge() / 100.0 * 20;
    if(currency == "dollars") {
        if (sumOfDollars > amount){
            TrustAccount::setDollars(TrustAccount::getDollars() - amount);
            cout << amount << " dollars " << "has been withdrawn." << endl;
        }
        else cout<<"The amount of dollars that is allowed to be withdraw must be smaller than 20% of the balance."<<endl;
    }
    else if(currency == "euros") {
        if(sumOfEuros > amount){
            TrustAccount::setEuros(TrustAccount::getEuros() - amount);
            cout << amount << " euros " << "has been withdrawn." << endl;
        }
        else cout<<"The amount of euros that is allowed to be withdraw must be smaller than 20% of the balance."<<endl;
    }
    if(currency == "tenge"){
        if(sumOfTenge > amount) {
            TrustAccount::setTenge(TrustAccount::getTenge() - amount);
            cout << amount << " tenge " << "has been withdrawn." << endl;
        }
        else cout<<"The amount of tenge that is allowed to be withdraw must be smaller than 20% of the balance."<<endl;
    }
};


