#ifndef ASSIGNMENT_3_REDISTRIBUTION_H
#define ASSIGNMENT_3_REDISTRIBUTION_H

#include "Account.h"
#include "SavingsAccount.h"

class Redistribution{
private:
    double tenge;

public:
    vector<SavingsAccount*>accounts;
    Redistribution();
    Redistribution(double tenge);
    void redistribute(double tenge);
};
#endif //ASSIGNMENT_3_REDISTRIBUTION_H
