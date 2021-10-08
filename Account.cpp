//
// Created by Computer on 08.10.2021.
//

#include "Account.h"

Account::Account() {

}

const string &Account::getName() const {
    return name;
}

void Account::setName(const string &name) {
    Account::name = name;
}

int Account::getBalance() const {
    return balance;
}

void Account::setBalance(int balance) {
    Account::balance = balance;
}

int Account::getDollars() const {
    return dollars;
}

void Account::setDollars(int dollars) {
    Account::dollars = dollars;
}

int Account::getEuros() const {
    return euros;
}

void Account::setEuros(int euros) {
    Account::euros = euros;
}

int Account::getTenge() const {
    return tenge;
}

void Account::setTenge(int tenge) {
    Account::tenge = tenge;
}
