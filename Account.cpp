#include "Account.h"

Account::Account(const string &name, double balance, double dollars, double euros, double tenge) : name(name),
                                                                                                   balance(balance),
                                                                                                   dollars(dollars),
                                                                                                   euros(euros),
                                                                                                   tenge(tenge) {};
const string &Account::getName() const {
    return name;
}
void Account::setName(const string &name) {
    Account::name = name;
}
double Account::getBalance() const {
    return balance;
}
void Account::setBalance(double balance) {
    Account::balance = balance;
}
double Account::getDollars() const {
    return dollars;
}
void Account::setDollars(double dollars) {
    Account::dollars = dollars;
}
double Account::getEuros() const {
    return euros;
}
void Account::setEuros(double euros) {
    Account::euros = euros;
}
double Account::getTenge() const {
    return tenge;
}
void Account::setTenge(double tenge) {
    Account::tenge = tenge;
}
//
//double Account::deposit(){
//    return 0;
//}

double Account::withdraw() {
    return 0;
}

double Account::deposit(double dollars, double euros) {
    return dollars+euros;
}
