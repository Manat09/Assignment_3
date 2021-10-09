#include "CheckingAccount.h"


CheckingAccount::CheckingAccount() : fee(1.5){}

double CheckingAccount::getFee() const {
    return fee;
}
void CheckingAccount::setFee(double fee) {
    CheckingAccount::fee = fee;
}

void CheckingAccount::withdraw(int amount, string currency) {
    double fee2 = amount / 100.0 * getFee();
    if (currency=="dollars"){
        if(getDollars() > amount + fee2) {
            CheckingAccount::setDollars(CheckingAccount::getDollars() - amount - fee2);
            cout << amount << " dollars has been withdrawn. Fee is: " << fee2 << " dollars" << endl;
            cout << "Current balance in dollars: " << getDollars() << " dollars" << endl;
        } else cout<<"You don't have that much money"<<endl;
    }
    else if (currency=="euros") {
        if(getEuros() > amount + fee2) {
            CheckingAccount::setEuros(CheckingAccount::getEuros() - amount - fee2);
            cout << amount << " euros has been withdrawn. Fee is: " << fee2 << " euros" << endl;
            cout << "Current balance in euros: " << getEuros() << " euros" << endl;
        } else cout<<"You don't have that much money"<<endl;
    }
    else if(currency == "tenge"){
        if(getTenge() > amount + fee2) {
            CheckingAccount::setTenge(CheckingAccount::getTenge() - amount - fee2);
            cout << amount << " tenge has been withdrawn. Fee is: " << fee2 << " tenge" << endl;
            cout << "Current balance in tenge: " << getTenge() << " tenge" << endl;
        } else cout<<"You don't have that much money"<<endl;
    }
    else{ cout<<"There is no such currency."<<endl; }
}
void CheckingAccount::deposit(string currency){}