#include "CheckingAccount.h"


CheckingAccount::CheckingAccount() : fee(1.5){}

double CheckingAccount::getFee() const {
    return fee;
}
void CheckingAccount::setFee(double fee) {
    CheckingAccount::fee = fee;
}

void CheckingAccount::withdraw(int amount, string currency) {
    double fee2 = amount / 100 * getFee();
    if (currency=="dollar"){
        CheckingAccount::setDollars(CheckingAccount::getDollars() - amount - fee2);
        cout << amount << " dollars " << "has been withdrawn. The fee for procedure is: " << fee2 << " dollars" << endl;
    }
    else if (currency=="euro") {
        CheckingAccount::setEuros(CheckingAccount::getEuros() - amount - fee2);
        cout << amount << " euros " << "has been withdrawn. The fee for procedure is: " << fee2 << " euros" << endl;
    }
    else{
        CheckingAccount::setTenge(CheckingAccount::getTenge() - amount - fee2);
        cout << amount << " tenge " << "has been withdrawn. The fee for procedure is: " << fee2 << " tenge" << endl;
    }
}
void CheckingAccount::deposit(string currency){}