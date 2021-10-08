#ifndef ASSIGNMENT_3_ACCOUNT_H
#define ASSIGNMENT_3_ACCOUNT_H

#include <iostream>
#include <string>
using namespace std;

class Account{
public:
    Account();
    const string &getName() const;
    void setName(const string &name);
    int getBalance() const;
    void setBalance(int balance);
    int getDollars() const;)
    void setDollars(int dollars);
    int getEuros() const;
    void setEuros(int euros);
    int getTenge() const;
    void setTenge(int tenge);
private:
    string name = "Unnamed Account";
    int balance = 0;
    int dollars;
    int euros;
    int tenge;

    int deposit(){
        return 0;
    }
    int withdraw(){
        return 0;
    }
};

#endif //ASSIGNMENT_3_ACCOUNT_H
