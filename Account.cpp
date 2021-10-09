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

void Account::deposit(double balance, double dollars, double euros, double tenge) {
    setBalance(
            dollars*((1+interest_rate[0])/100) +
            euros*((1+interest_rate[1])/100) +
            tenge*((1+interest_rate[2])/100)
    );
    cout<<"Your current balance is: "<<getBalance()<<endl;
}

void Account::withdraw(double balance, double fee, double amount) {
    setBalance(balance - (amount/100 * fee));
    cout<<"You have withdrawn "<<amount<<"\nAnd fee is 1.5%: "<<amount/100 * fee<<endl;
    cout<<"Your current balance is: "<<getBalance()<<endl;
}




