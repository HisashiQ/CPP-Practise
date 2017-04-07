//
// Created by Quinn Koike on 18/01/2017.
//

#ifndef LAB1_WK2_RAINFALL_H
#define LAB1_WK2_RAINFALL_H

#include <array>
#include <string>

class Rainfall {
public:
    static const size_t monthsNum = 12;

    Rainfall(const std::array<double, monthsNum> &);

    double getMonthAmount(int) const ;
    void setMonthAmount(int, double &);
    void getHighest();
    void getLowest();
    double getMean() const;
    void outputBarChart();
    void translateToMonth(int &);

private:
    std::array<double, monthsNum> rainfallArray;
};


#endif //LAB1_WK2_RAINFALL_H
