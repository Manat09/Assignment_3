#ifndef ASSIGNMENT_3_REDISTRIBUTION_H
#define ASSIGNMENT_3_REDISTRIBUTION_H


#include "Account.h"
#include "SavingsAccount.h"

class Redistribution{
private:
    double tenge;

public:
    vector<SavingsAccount*>accounts; //Creatd vector of accounts
    Redistribution(); //Default constructor
    Redistribution(double tenge);  //constructor that sets value specified by user
    void redistribute(double tenge); //function that redistributes 'tenge' by objects of Account
};


#endif //ASSIGNMENT_3_REDISTRIBUTION_H
