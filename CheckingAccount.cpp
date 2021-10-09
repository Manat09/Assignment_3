//
// Created by Computer on 09.10.2021.
//

#include "CheckingAccount.h"

CheckingAccount::CheckingAccount(const string &name, double balance, double dollars, double euros, double tenge
                                    ) : Account(name, balance, dollars, euros, tenge){}
float CheckingAccount::getFee() const {
    return fee;
}

