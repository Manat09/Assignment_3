#include "Account.h"

Account::Account(): name("Unnamed Account"), balance(0), dollars(0), euros(0), tenge(0){}
Account::Account(const string &name, double balance, double dollars, double euros, double tenge) : name(name),
                                                                                                   balance(balance),
                                                                                                   dollars(dollars),
                                                                                                   euros(euros),
                                                                                                   tenge(tenge) {}
const string &Account::getName() const {
    return name;
}
double Account::getBalance() const {
    return balance;
}
double Account::getDollars() const {
    return dollars;
}
double Account::getEuros() const {
    return euros;
}
double Account::getTenge() const {
    return tenge;
}
void Account::setName(const string &name) {
    Account::name = name;
}
void Account::setBalance(double balance) {
    Account::balance = balance;
}
void Account::setDollars(double dollars) {
    Account::dollars = dollars;
}
void Account::setEuros(double euros) {
    Account::euros = euros;
}
void Account::setTenge(double tenge) {
    Account::tenge = tenge;
}
