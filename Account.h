#ifndef ASSIGNMENT_3_ACCOUNT_H
#define ASSIGNMENT_3_ACCOUNT_H
#include <iostream>
#include <string>
using namespace std;

class Account{
public:
    Account(const string &name, double balance, double dollars, double euros, double tenge);

    double deposit(double dollars, double euros);

public:
    const string &getName() const;

    void setName(const string &name);

    double getBalance() const;

    void setBalance(double balance);

    double getDollars() const;

    void setDollars(double dollars);

    double getEuros() const;

    void setEuros(double euros);

    double getTenge() const;

    void setTenge(double tenge);

private:
    string name = "Unnamed Account";
    double balance = 0;
    double dollars{};
    double euros{};
    double tenge{};

    double withdraw();
};

#endif //ASSIGNMENT_3_ACCOUNT_H
