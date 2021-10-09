#include "Redistribution.h"
using namespace std;
Redistribution::Redistribution(): tenge(0){};
Redistribution::Redistribution(double tenge) : tenge(tenge) {};

void Redistribution::redistribute(double tenge) {
    double amount = tenge / accounts.size();
    for(auto &to : accounts){
        to->setTenge(to->getTenge() + amount);
    }
}
