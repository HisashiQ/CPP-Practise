#include <iostream>
#include <array>
#include "rainfall.h"

void getUserChoice(int, Rainfall *, int, double);

int main() {
    std::array<double, 12> rainfallAmount = {154.3, 79.2, 95.6, 46.3, 109.6, 230.0,
                                             109.5, 107.4, 54.0, 72.2, 176.0, 55.1};
    int choice = 1;
    int month = 0;
    double rainAmount = 0.0;
    Rainfall rainfallObj(rainfallAmount);
    do {
        std::cin.clear();
        std::cout << "Enter a number from the following choices: " << std::endl;
        std::cout << "  | 1: Get the rainfall for a specific month" << std::endl;
        std::cout << "  | 2: Get information on the HIGHEST rainfall month" << std::endl;
        std::cout << "  | 3: Get information on the LOWEST rainfall month" << std::endl;
        std::cout << "  | 4: Set the amount of rainfall for a specific month" << std::endl;
        std::cout << "  | 5: Get the MEAN rainfall for the year" << std::endl;
        std::cout << "  | 6: See a BAR CHART representing monthly rainfall" << std::endl;
        std::cout << "  | 7: Quit" << std::endl;
        std::cin >> choice;
        if (choice == 4){
            std::cout << "What month would you like to change the rainfall data for?" << std::endl;
            std::cin >> month;
            std::cout << "How much rainfall occurred?" << std::endl;
            std::cin >> rainAmount;
        }
        getUserChoice(choice, &rainfallObj, month, rainAmount);
    } while (choice != 7);
    return 0;
}

void getUserChoice(int choice, Rainfall *rainfallObj, int setMonth=0, double rainAmount=0){
    int month = 0;
    switch(choice){
        case 1:
            std::cout << "What Month would you like to look up? (1 for Jan, 2 for Feb etc)" << std::endl;
            std::cin >> month;
            month -= 1;
            rainfallObj -> translateToMonth(month);
            std::cout << " " << rainfallObj -> getMonthAmount(month) << std::endl;
            break;
        case 2:
            rainfallObj -> getHighest();
            break;
        case 3:
            rainfallObj -> getLowest();
            break;
        case 4:
            rainfallObj -> setMonthAmount(setMonth, rainAmount);
            break;
        case 5:
            std::cout << "Mean " << rainfallObj -> getMean() << std::endl;
            break;
        case 6:
            rainfallObj -> outputBarChart();
            break;
        case 7:
            break;
        default:
            std::cout << "That's not a choice, please try again";
            break;
    }
}