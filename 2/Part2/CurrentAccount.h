//
// Created by Quinn Koike on 04/02/2017.
//

#ifndef PART2_CURRENTACCOUNT_H
#define PART2_CURRENTACCOUNT_H


#include <cstddef>

class CurrentAccount {
public:

    void withdrawFunds(double &);
    void deposit(double &);
    virtual const double checkAvailableFunds() const;
    const double getBalance() const;
private:
    double balance = 0;
};


#endif //PART2_CURRENTACCOUNT_H
