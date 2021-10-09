#ifndef ASSIGNMENT_3_ACCOUNT_H
#define ASSIGNMENT_3_ACCOUNT_H
#include <iostream>
#include <string>
#include <sstream>
#include <vector>
using namespace std;

class Account {
public:
    Account();
    Account(const string &name, double balance, double dollars, double euros, double tenge);

    virtual void deposit(string currency) = 0;
    virtual void withdraw(int amount, string currency) = 0;

    const string &getName() const;
    double getBalance() const;
    double getDollars() const;
    double getEuros() const;
    double getTenge() const;
    void setName(const string &name);
    void setBalance(double balance);
    void setDollars(double dollars);
    void setEuros(double euros);
    void setTenge(double tenge);
private:
    string name;
    double balance;
    double dollars;
    double euros;
    double tenge;
};
#endif //ASSIGNMENT_3_ACCOUNT_H
