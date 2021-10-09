#include "I_Printable.h"
I_Printable::I_Printable() {}
void I_Printable::print(const SavingsAccount& account) {
    cout<<"\n"<<"Your total balance: "<<account.getDollars() + (account.getEuros()/0,8) + (account.getTenge()/425)<<" dollars"<<endl;
    cout<< "Your balances in: "<<account.getDollars()<<" dollars, "<<account.getEuros()<<" euros, "<<account.getTenge()<<" tenge.\n\n";
}