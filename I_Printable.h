#ifndef ASSIGNMENT_3_I_PRINTABLE_H
#define ASSIGNMENT_3_I_PRINTABLE_H
#include "SavingsAccount.h"
class I_Printable {
public:

    void print(const SavingsAccount& account);
    I_Printable(); //Default constructor
};

#endif //ASSIGNMENT_3_I_PRINTABLE_H
