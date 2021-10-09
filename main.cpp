#include "Account.h"
#include "CheckingAccount.h"
#include "I_Printable.h"
#include "Redistribution.h"
#include "TrustAccount.h"

int main() {
    I_Printable i_printable = *new I_Printable();
    Redistribution *redistribution = new Redistribution();
    SavingsAccount savingsAccount = SavingsAccount();
    savingsAccount.setTenge(1000);
    savingsAccount.deposit("tenge");
    savingsAccount.deposit("tenge");

    redistribution->accounts.push_back(&savingsAccount);

    SavingsAccount savingsAccount1 = SavingsAccount();
    savingsAccount.setTenge(500);
    savingsAccount.deposit("dollars");

    redistribution->accounts.push_back(&savingsAccount1);

    cout<<"Your current deposit:" << "\n";
    i_printable.print(savingsAccount);

    redistribution->redistribute(500);
    cout<<"Your deposit after redistribution:" <<"\n";
    i_printable.print(savingsAccount);

    CheckingAccount checkingAccount = CheckingAccount();
    checkingAccount.setEuros(1000);
    checkingAccount.withdraw(50, "euros");

    TrustAccount trustAccount = TrustAccount();
    trustAccount.setEuros(1000);
    trustAccount.deposit("euros");
    cout<<"Bonus: "<<trustAccount.getBonus()<<endl;
    cout<<"Balance in Euros: "<<trustAccount.getEuros()<<"\n\n";
    trustAccount.deposit("euros");
    cout<<"Bonus: "<<trustAccount.getBonus()<<endl;
    cout<<"Balance in Euros: "<<trustAccount.getEuros()<<"\n\n";
    trustAccount.withdraw(50, "dollars");
    trustAccount.withdraw(50, "euros");
    trustAccount.withdraw(50, "tenge");
    return 0;
}
