#include "Account.h"

int main() {
    Account user("Manat", 1000, 200, 100, 50);
    cout<<user.deposit(user.getDollars(), user.getEuros());
    return 0;
}
