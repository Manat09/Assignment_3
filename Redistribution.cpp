#include "Redistribution.h"
#include "Account.h"
#include "vector"
using namespace std;
Redistribution::Redistribution(): tenge(0){}; //default constructor that sets every tenge as "0"
Redistribution::Redistribution(double tenge) : tenge(tenge) {};  //constructor that sets value specified by user

void Redistribution::redistribute(double tenge) {
    double amount = tenge / accounts.size(); //Created amount which store each tenge for accounts
    for(auto &to : accounts){
        to->setTenge(to->getTenge() + amount); //Setting tenge for each account
    }
}
