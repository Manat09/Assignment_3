#include "Account.h"
#include "CheckingAccount.h"
int main() {
    CheckingAccount user("Zoro", 0, 200, 100, 50);

    user.deposit(user.getBalance(),user.getDollars(), user.getEuros(), user.getTenge());
    user.withdraw(user.getBalance(),user.getFee(), 120);
    return 0;
}
