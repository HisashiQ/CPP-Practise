//
// Created by Quinn Koike on 04/02/2017.
//

#include "SavingsAccount.h"

const double SavingsAccount::checkAvailableFunds() const {
    return getBalance() + (getBalance() * 0.05);
}
