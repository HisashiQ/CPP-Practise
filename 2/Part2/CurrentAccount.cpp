//
// Created by Quinn Koike on 04/02/2017.
//

#include <iostream>
#include "CurrentAccount.h"

void CurrentAccount::withdrawFunds(double &withdrawal) {
    if (checkAvailableFunds() > withdrawal){
        balance -= withdrawal;
    } else {
        std::cout << "You do not have sufficient funds" << std::endl;
    }
}

void CurrentAccount::deposit(double &deposit) {
    balance += deposit;
}

const double CurrentAccount::checkAvailableFunds() const {
    return getBalance() + 100;
}

const double CurrentAccount::getBalance() const {
    return balance;
}
