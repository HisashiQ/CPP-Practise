//
// Created by Quinn Koike on 18/01/2017.
//

#include <iostream>
#include <stdexcept>
#include "rainfall.h"

Rainfall::Rainfall(const std::array<double, monthsNum> &rainfall) : rainfallArray(rainfall) {
}

double Rainfall::getMonthAmount(int month) const {
    return month <= 12 ? rainfallArray[month] : -1;
}

void Rainfall::setMonthAmount(int month, double &rainfallAmount) {
    if (month > 0 && month <= 12){
        if (rainfallAmount > 0  && rainfallAmount < 500 ){
            rainfallArray[month-1] = rainfallAmount;
        } else {
            throw std::invalid_argument("Must enter a rainfall amount between 0.0 and 500.00");
        }
    } else {
        throw std::invalid_argument("Must enter a month between 1 and 12");
    }
}

void Rainfall::getHighest() {
    double highestRainfall = 0.0;
    int month = 0;
    int iterator = 0;
    for (double rainfall : rainfallArray) {
        iterator++;
        if(rainfall > highestRainfall) {
            highestRainfall = rainfall;
            month = iterator - 1;
        }
    }
        std::cout << "Highest: " << std::flush;
        translateToMonth(month);
        std::cout << " | " << getMonthAmount(month) << std::endl;
}

void Rainfall::getLowest() {
    double lowestRainfall = 1000000.00;
    int month = 0;
    int iterator = 0;
    for (double rainfall : rainfallArray) {
        iterator++;
        if(rainfall < lowestRainfall) {
            lowestRainfall = rainfall;
            month = iterator - 1;
        }
    }

    std::cout << "Lowest: " << std::flush;
    translateToMonth(month);
    std::cout << " | " << getMonthAmount(month) << std::endl;
}


double Rainfall::getMean() const {
    double total = 0;
    for (double rainfall : rainfallArray){
        total += rainfall;
    }
    return (total / monthsNum);
}

void Rainfall::outputBarChart() {
    int iterator = 0;
    for(int amount : rainfallArray){
        translateToMonth(iterator);
        iterator++;
        if (amount < 50 ){
            std::cout << "  *" << std::endl;
        } else if (amount >=50 && amount <80){
            std::cout << "  **" << std::endl;
        } else if (amount >=80 && amount <110){
            std::cout << "  ***" << std::endl;
        } else if (amount >=110 && amount <140) {
            std::cout << "  ****" << std::endl;
        } else {
            std::cout << "  *****" << std::endl;
        }
    }
}

void Rainfall::translateToMonth(int &month) {
    switch(month){
        case 0:
            std::cout << "Jan" << std::flush;
            break;
        case 1:
            std::cout << "Feb" << std::flush;
            break;
        case 2:
            std::cout << "Mar" << std::flush;
            break;
        case 3:
            std::cout << "Apr" << std::flush;
            break;
        case 4:
            std::cout << "May" << std::flush;
            break;
        case 5:
            std::cout << "Jun" << std::flush;
            break;
        case 6:
            std::cout << "Jul" << std::flush;
            break;
        case 7:
            std::cout << "Aug" << std::flush;
            break;
        case 8:
            std::cout << "Sep" << std::flush;
            break;
        case 9:
            std::cout << "Oct" << std::flush;
            break;
        case 10:
            std::cout << "Nov" << std::flush;
            break;
        case 11:
            std::cout << "Dec" << std::flush;
            break;
    }
}


