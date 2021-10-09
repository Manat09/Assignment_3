#include "CheckingAccount.h"


CheckingAccount::CheckingAccount() : fee(1.5){}                                                                  //default constructor

double CheckingAccount::getFee() const {
    return fee;
}

void CheckingAccount::setFee(double fee) {
    CheckingAccount::fee = fee;
}

void CheckingAccount::withdraw(int cash, string currency) {
    double commission = cash * (getFee()/100.0);
    if (currency=="dollars" || currency=="dollar"){
        CheckingAccount::setDollars(CheckingAccount::getDollars() - cash - commission);
        cout<<cash<<"$ "<<"has been withdrawn. The commission for procedure is: "<<commission<<"$"<<endl;
    }
    if (currency=="euros" || currency=="euro") {
        CheckingAccount::setEuros(CheckingAccount::getEuros() - cash - commission);
        cout<<cash<<" euros "<<"has been withdrawn. The commission for procedure is: "<<commission<<" euros "<<endl;
    }
    if (currency=="tenges" || currency=="tenge") {
        CheckingAccount::setTenge(CheckingAccount::getTenge() - cash - commission);
        cout<<cash<<"tg "<<"has been withdrawn. The commission for procedure is: "<<commission<<"tg"<<endl;
    }
}
void CheckingAccount::deposit(string currency){}