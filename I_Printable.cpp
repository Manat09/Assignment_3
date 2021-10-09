#include "I_Printable.h"
#include "SavingsAccount.h"
I_Printable::I_Printable() {}
void I_Printable::print(const SavingsAccount& account) {
    cout<< "Your total balance: " + to_string(account.getEuros()) + " euros, " + to_string(account.getDollars()) + " dollars, " + to_string(account.getTenge()) + " tenge.\n";
}