#include "Account.h"
#include "CheckingAccount.h"
#include "I_Printable.h"
#include "Redistribution.h"
#include "SavingsAccount.h"
#include "TrustAccount.h"

int main() {
    I_Printable i_printable = *new I_Printable();
    Redistribution *redistribution = new Redistribution();
    SavingsAccount savingsAccount = SavingsAccount();
    savingsAccount.setTenge(100);
    savingsAccount.deposit("tenge");
    savingsAccount.deposit("tenge");

    redistribution->accounts.push_back(&savingsAccount);

    SavingsAccount savingsAccount1 = SavingsAccount();
    savingsAccount.setTenge(200);
    savingsAccount.deposit("dollars");
    savingsAccount.deposit("dollars");

    redistribution->accounts.push_back(&savingsAccount1);

    cout<<"Your current deposit:" << "\n";
    i_printable.print(savingsAccount);
    i_printable.print(savingsAccount1);


    redistribution->redistribute(1000);
    cout<<"Your deposit after redistribution:" <<"\n";
    i_printable.print(savingsAccount);
    i_printable.print(savingsAccount1);

    CheckingAccount checkingAccount = CheckingAccount();
    checkingAccount.setEuros(1000);
    checkingAccount.withdraw(50, "euros");
    cout<<checkingAccount.getEuros()<<endl;

    TrustAccount trustAccount = TrustAccount();
    trustAccount.setEuros(1000);
    trustAccount.deposit("euros");
    cout<<"Bonus: "<<trustAccount.getBonus()<<endl;
    cout<<"Balance in Euros: "<<trustAccount.getEuros()<<endl<<endl;
    trustAccount.deposit("euros");
    cout<<"Bonus: "<<trustAccount.getBonus()<<endl;
    cout<<"Balance in Euros: "<<trustAccount.getEuros()<<endl<<endl;
    trustAccount.withdraw(50, "dollars");
    trustAccount.withdraw(50, "euros");
    trustAccount.withdraw(50, "tenge");
    return 0;
}
