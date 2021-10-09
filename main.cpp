#include "Account.h"
#include "CheckingAccount.h"
#include "I_Printable.h"
#include "Redistribution.h"
#include "SavingsAccount.h"
#include "TrustAccount.h"

int main() {
    I_Printable printable = *new I_Printable();

    Redistribution *redis = new Redistribution(); //Created object

    SavingsAccount savingsAccount = SavingsAccount(); //First account
    savingsAccount.setTenge(100);
    savingsAccount.deposit("tenge");
    savingsAccount.deposit("tenge");


    redis->accounts.push_back(&savingsAccount); //Storing accounts in vector


    SavingsAccount savingsAccount1 = SavingsAccount(); //Second account
    savingsAccount.setTenge(200);
    savingsAccount.deposit("dollar");
    savingsAccount.deposit("dollar");

    redis->accounts.push_back(&savingsAccount1); //Storing accounts in vector

    cout<<"******** Information about deposit ********" << "\n";
    cout<<"\n";
    printable.print(savingsAccount); //Printing savings of accounts
    printable.print(savingsAccount1);


    redis->redistribute(1000); //There redistributing tenge among accounts
    cout<<"\n";
    cout<<"******** After redistribution ********" <<"\n";
    cout<<"\n";
    printable.print(savingsAccount); //Then printing after redistributing
    printable.print(savingsAccount1);

    //cout<<savingsAccount.getTenge()<<endl;
    // printable.print(savingsAccount);




    CheckingAccount checkingAccount = CheckingAccount();
    checkingAccount.setEuros(1000);
    checkingAccount.withdraw(50, "euro");
    //cout<<checkingAccount.getEuros()<<endl;

    TrustAccount trustAccount = TrustAccount();
    trustAccount.setEuros(1000);
    trustAccount.deposit("euro");
    //cout<<"Bonus: "<<trustAccount.getBonus()<<endl;
    //cout<<"Balance in Euros: "<<trustAccount.getEuros()<<endl<<endl;
    trustAccount.deposit("euro");
    //cout<<"Bonus: "<<trustAccount.getBonus()<<endl;
    //cout<<"Balance in Euros: "<<trustAccount.getEuros()<<endl<<endl;
    return 0;
}
