//
// Created by Quinn Koike on 04/02/2017.
//

#ifndef PART2_SAVINGSACCOUNT_H
#define PART2_SAVINGSACCOUNT_H


#include "CurrentAccount.h"

class SavingsAccount : public CurrentAccount {
public:

    const double checkAvailableFunds() const override;

private:
};


#endif //PART2_SAVINGSACCOUNT_H
