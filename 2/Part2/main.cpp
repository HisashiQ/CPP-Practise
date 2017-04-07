#include <iostream>
#include "CurrentAccount.h"
#include "SavingsAccount.h"

int main() {

    CurrentAccount *accountPtr;
    char choice;
    bool cont = true;
    std::string input = "";
    while (cont){
      double depositAmount = 0;
      double withdrawAmount = 0;
      while (true) {
        std::cout << "Please enter 'c' to create a Current Account or 's' to create a savings account" << std::endl;
        std::cout << ">> " << std::flush;
        getline(std::cin, input);

        if (input.length() == 1 && (input == "c" || input == "s")) {
            choice = input[0];
            break;
        }

        std::cout << "Invalid character, please try again" << std::endl;
      }
      if (input == "s"){
        SavingsAccount ca;
        accountPtr = &ca;
      } else {
        CurrentAccount ca;
        accountPtr = &ca;
      }


        std::cout << "Deposit Amount?: " << std::endl;
        std::cin >> depositAmount;
        accountPtr -> deposit(depositAmount);
        std::cout << "Withdrawal Amount?: " << std::endl;
        std::cin >> withdrawAmount;
        accountPtr -> withdrawFunds(withdrawAmount);
        std::cout << "Available Funds: " << accountPtr -> checkAvailableFunds() << '\n';


        while (true) {
          std::cout << "Would you like to open another account? (y/n)" << std::endl;
          std::cout << ">> " << std::flush;
          std::cin.clear();
          getline(std::cin, input);

          if (input.length() == 1 && (input == "y" || input == "n")) {
              choice = input[0];
              break;
          }

          std::cout << "Invalid character, please try again" << std::endl;
        }
        if (input == "y"){
          cont = true;
        } else {
          cont = false;
        }

    }
}
